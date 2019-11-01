/*
    Modify Listing 13.1 so that it solicits the user to enter the filename and reads the user’s
        response instead of using command-line arguments.
*/

/* count.c -- using standard I/O */
#include <stdio.h>
#include <stdlib.h> // exit() prototype
#include <string.h>


int main(int argc, char *argv[])
{
    int ch;         // place to store each character as read
    FILE *fp;       // "file pointer"
    unsigned long count = 0;
    // if (argc != 2)
    // {
    //     printf("Usage: %s filename\n", argv[0]);
    //     exit(EXIT_FAILURE);
    // }
    
    puts("Enter the name of the file:");
    char str[50];
    fgets(str, 50, stdin);
    str[strlen(str)-1] = '\0';
    
    if ((fp = fopen(str, "r")) == NULL)
    {
        printf("Can't open %s\n", str);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
    {
        putc(ch,stdout);  // same as putchar(ch);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", argv[1], count);
    
    return 0;
}