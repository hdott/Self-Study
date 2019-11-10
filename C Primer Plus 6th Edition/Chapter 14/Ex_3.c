/*
    Revise the book-listing program in Listing 14.2 so that it prints the book descriptions in
        the order entered, then alphabetized by title, and then in order of increased value.
*/

/* manybook.c -- multiple book inventory */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char * s_gets(char * st, int n);
#define MAXTITL   40
#define MAXAUTL   40
#define MAXBKS   100              /* maximum number of books  */

struct book {                     /* set up book template     */
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};
int cmpAlphTitle(const void *p1, const void *p2);
int cmpIncrValue(const void *p1, const void *p2);


int main(void)
{
    struct book library[MAXBKS]; /* array of book structures */
    int count = 0;
    int index;
    
    printf("Please enter the book title.\n");
    printf("Press [enter] at the start of a line to stop.\n");
    while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
           && library[count].title[0] != '\0')
    {
        printf("Now enter the author.\n");
        s_gets(library[count].author, MAXAUTL);
        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);
        while (getchar() != '\n')
            continue;          /* clear input line         */
        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }
    
    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                   library[index].author, library[index].value);
        
        qsort(library, count, sizeof(struct book), cmpAlphTitle);
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                   library[index].author, library[index].value);

        qsort(library, count, sizeof(struct book), cmpIncrValue);
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title,
                   library[index].author, library[index].value);
    }
    else
    	printf("No books? Too bad.\n");
    
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

int cmpAlphTitle(const void *p1, const void *p2){
    struct book *bk1, *bk2;
    bk1 = (struct book *)p1;
    bk2 = (struct book *)p2;
    
    return strcmp(bk1->title, bk2->title);
}

int cmpIncrValue(const void *p1, const void *p2){
    struct book *bk1, *bk2;
    bk1 = (struct book *)p1;
    bk2 = (struct book *)p2;

    if(bk1->value < bk2->value) return -1;
    if(bk1->value == bk2->value)return 0;
    if(bk1->value > bk2->value) return 1;
}