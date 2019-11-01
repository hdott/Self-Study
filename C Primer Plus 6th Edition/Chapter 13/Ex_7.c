/*
    Write a program that opens two files. You can obtain the filenames either by using
        command-line arguments or by soliciting the user to enter them.
    a. Have the program print line 1 of the first file, line 1 of the second file, line 2 of the
        first file, line 2 of the second file, and so on, until the last line of the longer file (in
        terms of lines) is printed.
    b. Modify the program so that lines with the same line number are printed on the
        same line.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXL 256


int main(int argc, char **argv){
    if(argc != 3){
        fputs("Not enough arguments, program takes source and destination of copy file\n",
            stderr);
        exit(EXIT_FAILURE);
    }

    FILE *p1,
        *p2;

    if(!(p1 = fopen(argv[1], "r+"))){
        fprintf(stderr, "Cannot open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if(!(p2 = fopen(argv[2], "r+"))){
        fprintf(stderr, "Cannot open file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    char str1[MAXL],
        str2[MAXL];
    while(!feof(p1) || !feof(p2)){
        int state = 0;
        
        if(fgets(str1, MAXL, p1))   state = 1;
        if(fgets(str2, MAXL, p2) && state){
            state = 3;
        } else{
            state = 2;
        }

        switch(state){
            case 1:
                fputs(str1, stdout);
                break;
            case 2:
                fputs(str2, stdout);
                break;
            case 3:
                if(strlen(str1) == strlen(str2)){
                    str1[strlen(str1)-1] = str2[strlen(str2)-1] = '\0';
                    fprintf(stdout, "%s %s\n", str1, str2);
                    break;
                }

                fputs(str1, stdout);
                fputs(str2, stdout);
                break;
        }
    }    

    fclose(p1);
    fclose(p2);

    return 0;
}