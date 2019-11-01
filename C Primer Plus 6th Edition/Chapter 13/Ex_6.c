/*
    Programs using command-line arguments rely on the user’s memory of how to use them
        correctly. Rewrite the program in Listing 13.2 so that, instead of using command-line
        arguments, it prompts the user for the required information.
*/

// reducto.c -- reduces your files by two-thirds!
#include <stdio.h>
#include <stdlib.h>    // for exit()
#include <string.h>    // for strcpy(), strcat()
#define LEN 40

int main(int argc, char *argv[])
{
    FILE  *in, *out;   // declare two FILE pointers
    int ch;
    char name[LEN];    // storage for output filename
    int count = 0;
    
    char src[LEN];
    printf("Enter input file name: ");
    fgets(src, LEN, stdin);
    src[strlen(src)-1] = '\0';

    // check for command-line arguments
    // if (argc < 2)
    // {
    //     fprintf(stderr, "Usage: %s filename\n", argv[0]);
    //     exit(EXIT_FAILURE);
    // }
    // set up input
    if ((in = fopen(src, "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n",
                src);
        exit(EXIT_FAILURE);
    }
    // set up output
    strncpy(name,src, LEN - 5); // copy filename
    name[LEN - 5] = '\0';
    strcat(name,".red");            // append .red
    if ((out = fopen(name, "w")) == NULL)
    {                       // open file for writing
        fprintf(stderr,"Can't create output file.\n");
        exit(3);
    }
    // copy data
    while ((ch = getc(in)) != EOF)
        if (count++ % 3 == 0)
            putc(ch, out);  // print every 3rd char
    // clean up
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr,"Error in closing files\n");
    
    return 0;
}