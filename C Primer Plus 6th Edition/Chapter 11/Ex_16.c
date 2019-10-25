/*
    Write a program that reads input until end-of-file and echoes it to the display. Have the
        program recognize and implement the following command-line arguments:
    -p  Print input as is
    -u  Map input to all uppercase
    -l  Map input to all lowercase
        Also, if there are no command-line arguments, let the program behave as if the –p
        argument had been used.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main(int argc, char **argv){
    int opt = 1;
    if(argc == 2){
        if(!strcmp(*(argv+1), "-p")){
            opt = 1;
        }
        if(!strcmp(*(argv+1), "-u")){
            opt = 2;
        }
        if(!strcmp(*(argv+1), "-l")){
            opt = 3;
        }
    }

    char ch;
    while((ch = getchar()) != EOF){
        switch(opt){
            case 1:
                putchar(ch);
                break;
            case 2:
                putchar(toupper(ch));
                break;
            case 3:
                putchar(tolower(ch));
                break;
        }
    }


    return 0;
}