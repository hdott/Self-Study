/*
    Modify Listing 14.14 so that as each record is read from the file and shown to you, you
        are given the chance to delete the record or to modify its contents. If you delete the
        record, use the vacated array position for the next record to be read. To allow changing
        the existing contents, you’ll need to use the "r+b" mode instead of the "a+b" mode, and
        you’ll have to pay more attention to positioning the file pointer so that appended records
        don’t overwrite existing records. It’s simplest to make all changes in the data stored in
        program memory and then write the final set of information to the file. One approach to
        keeping track is to add a member to the book structure that indicates whether it is to be
        deleted.
*/

/* booksave.c -- saves structure contents in a file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTITL  40
#define MAXAUTL  40
#define MAXBKS   10             /* maximum number of books */
char * s_gets(char * st, int n);
struct book {                   /* set up book template    */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library[MAXBKS]; /* array of structures     */
    int count = 0;
    int index, filecount;
    FILE * pbooks;
    int size = sizeof (struct book);
    
    if ((pbooks = fopen("book.dat", "r+b")) == NULL)
    {
        fputs("Can't open book.dat file\n",stderr);
        exit(1);
    }
    
    rewind(pbooks);            /* go to start of file     */

    // req
    struct book tmp;
    while (count < MAXBKS &&  fread(&tmp, size,
                                    1, pbooks) == 1)
    {
        if (count == 0)
            puts("Current contents of book.dat:");
        printf("%s by %s: $%.2f\n",tmp.title,
               tmp.author, tmp.value);
        int opt;
        printf("1. Delete record?\n");
        printf("2. Modify record?\n");
        printf("3. Continue\n\n");

        printf("Option: ");
        scanf("%d", &opt);
        getchar();
        switch(opt){
            case 1:
                continue;
                break;
            case 2:
                printf("Enter the new price: ");
                scanf("%f", &tmp.value);
                getchar();
                break;
            case 3:
                break;
        }
        strcpy(library[count].author, tmp.author);
        strcpy(library[count].title, tmp.title);
        library[count].value = tmp.value;
        
        count++;
    }
    // filecount = count;
    if (count == MAXBKS)
    {
        fputs("The book.dat file is full.", stderr);
        exit(2);
    }
    
    puts("Please add new book titles.");
    puts("Press [enter] at the start of a line to stop.");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
           && library[count].title[0] != '\0')
    {
        puts("Now enter the author.");
        s_gets(library[count].author, MAXAUTL);
        puts("Now enter the value.");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;                /* clear input line  */
        if (count < MAXBKS)
            puts("Enter the next title.");
    }
    
    fclose(pbooks);
    remove("book.dat");
    if ((pbooks = fopen("book.dat", "w+b")) == NULL)
    {
        fputs("Can't open book.dat file\n",stderr);
        exit(1);
    }

    if (count > 0)
    {
        puts("Here is the list of your books:");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n",library[index].title,
                   library[index].author, library[index].value);
        fwrite(library, sizeof(struct book), count, pbooks);
    }
    else
    	puts("No books? Too bad.\n");
    
    puts("Bye.\n");
    fclose(pbooks);
    
    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');   // look for newline
        if (find)                  // if the address is not NULL,
            *find = '\0';          // place a null character there
        else
            while (getchar() != '\n')
                continue;          // dispose of rest of line
    }
    return ret_val;
}
