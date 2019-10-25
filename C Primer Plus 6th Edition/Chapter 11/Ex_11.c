/*
    Write a program that reads in up to 10 strings or to EOF , whichever comes first. Have it
        offer the user a menu with five choices: print the original list of strings, print the strings
        in ASCII collating sequence, print the strings in order of increasing length, print the
        strings in order of the length of the first word in the string, and quit. Have the menu
        recycle until the user enters the quit request. The program, of course, should actually
        perform the promised tasks.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXL 10
#define MAXLEN 80

static int size;

int getChars(char *str, int n);
void readStrings(char str[][MAXLEN]);
void printStringList(char str[][MAXLEN]);
void printASCIIcollatingseq(char str[][MAXLEN]);
void copyStrList(char str[][MAXLEN], const char source[][MAXLEN]);
void printStringListInIncreasingLength(char str[][MAXLEN]);
void printStringListInOrderOfFirstWordLength(char str[][MAXLEN]);


int main(void){
    const char *menu[5] = {"1. Print the original list of strings",
                            "2. Print the strings in ASCII collating sequence",
                            "3. Print the strings in order of increasing length",
                            "4. Print the strings in order of the length of the first word in the string",
                            "5. Quit"};


    char strList[MAXL][MAXLEN];
    char strList1[MAXL][MAXLEN];

    printf("Input up to 10 strings:\n");
    readStrings(strList);
    copyStrList(strList1, strList);

    int opt;
    do{
        system("clear");

        for(int i=0; i<5; ++i){
            puts(menu[i]);
        }
        putchar('\n');

        printf("opt: ");
        scanf("%d", &opt);
        getchar();

        switch(opt){
            case 1:
                printStringList(strList);
                break;
            case 2:
                printASCIIcollatingseq(strList);
                break;
            case 3:
                printStringListInIncreasingLength(strList1);
                break;
            case 4:
                printStringListInOrderOfFirstWordLength(strList1);
                break;
            case 5:
                exit(0);
                break;
        }

        printf("\nenter ...");
        getchar();
    } while(opt != 5);


    return 0;
}

int getChars(char *str, int n){
    int ch,
        i = 0,
        count = 0;
    for(; i<n-1 && (ch = getchar()) != '\n' && ch != EOF; ++i){
        *(str+i) = (char)ch;
        count++;
    }
    if(ch == EOF){
        return EOF;
    }
    *(str+i) = '\0';
    
    if(ch != '\n'){
        while((ch = getchar()) != '\n'){
            continue;
        }
    }
    
    return count;
}

void readStrings(char str[][MAXLEN]){
    int i=0;

    for(; i<MAXL; ++i){
        printf("Line[%d]: ", i+1);
        if(getChars(*(str+i), MAXLEN) == EOF){
            clearerr(stdin);
            break;
        }
    }
    size = i;
}

void printStringList(char str[][MAXLEN]){
    for(int i=0; i<size; ++i){
        puts(*(str+i));
    }
}

void printASCIIcollatingseq(char str[][MAXLEN]){
    for(int i=0; i<size; ++i){
        for(int j=0; j<strlen(*(str+i)); ++j){
            putchar('\'');
            putchar(*(*(str+i)+j));
            putchar('\'');
        }
        putchar('\n');
    }
}

void copyStrList(char str[][MAXLEN], const char source[][MAXLEN]){
    for(int i=0; i<size; ++i){
        for(int j=0; j<MAXLEN; ++j){
            *(*(str+i)+j) = *(*(source+i)+j);
        }
    }
}

void printStringListInIncreasingLength(char str[][MAXLEN]){
    for(int i=0; i<size; ++i){
        for(int j=i+1; j<size; ++j){
            if(strlen(*(str+i)) > strlen(*(str+j))){
                char _aux[MAXLEN];
                strcpy(_aux, *(str+i));
                strcpy(*(str+i), *(str+j));
                strcpy(*(str+j), _aux);
            }
        }
    }

    printStringList(str);
}

void printStringListInOrderOfFirstWordLength(char str[][MAXLEN]){
    char strI[MAXLEN],
        strJ[MAXLEN];
    for(int i=0; i<size; ++i){
        for(int j=i+1; j<size; ++j){
            sscanf(*(str+i), "%s", strI);
            sscanf(*(str+j), "%s", strJ);
            if(strlen(strI) > strlen(strJ)){
                char _aux[MAXLEN];
                strcpy(_aux, *(str+i));
                strcpy(*(str+i), *(str+j));
                strcpy(*(str+j), _aux);
            }
        }
    }

    printStringList(str);
}