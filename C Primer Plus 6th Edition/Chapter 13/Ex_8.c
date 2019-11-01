/*
    Write a program that takes as command-line arguments a character and zero or more
        filenames. If no arguments follow the character, have the program read the standard
        input. Otherwise, have it open each file in turn and report how many times the character
        appears in each file. The filename and the character itself should be reported along with
        the count. Include error-checking to see whether the number of arguments is correct and
        whether the files can be opened. If a file can’t be opened, have the program report that
        fact and go on to the next file.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 256


int main(int argc, char **argv){
    
    if(argc < )

    

    return 0;
}

char** splitLine(int *size, char *line){
    int s = 1,
        i = 0;
    char **arr;        

    char word[LEN];
    while((sscanf(line, "%s", word)) != EOF){
        **arr = (char**) malloc(s * sizeof(char*));
        arr[i] = (char*) malloc(strlen(word)+1);
        strcpy(arr[i], word);
        puts(word);

        ++s;
    }


}