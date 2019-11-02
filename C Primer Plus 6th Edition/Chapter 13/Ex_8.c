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

char** splitLine(int *size, const char * restrict line);
void freeRaggedArr(char **arr, int size);
int countChar(const char * restrict str, char ch);
void help();


int main(int argc, char **argv){
    for(int i = 1; i < argc; ++i){
        if(!strcmp(argv[i], "--help")){
            help();
            exit(EXIT_SUCCESS);
        }
    }

    char line[LEN],
        _tmpL[LEN],
        ch;
    int size;
    char **words;
    FILE *pf;

    if(argc == 1){
        while(1){
            printf("> ");

            fgets(line,  LEN, stdin);
            line[strlen(line)-1] = '\0';

            words = splitLine(&size, line);
            if(strlen(words[0]) > 1){
                fputs("ERROR [Reading 1st Arg] - Required a char\n", stderr);
                freeRaggedArr(words, size);
                continue;
            }
            if((ch = words[0][0]) == 'q'){
                freeRaggedArr(words, size);
                exit(EXIT_SUCCESS);
            }
            for(int i = 1; i < size; ++i){
                if(!(pf = fopen(words[i], "r"))){
                    fprintf(stderr, "ERROR [Openning File] %s\n", words[i]);
                    continue;
                } else{
                    int count = 0;
                    while(!feof(pf)){
                        fgets(_tmpL, LEN, pf);
                        count += countChar(_tmpL, ch);
                    }
                    printf("file[%s] - char[%c] - count[%d]\n", words[i],
                                ch, count);
                    fclose(pf);
                }
            }
            freeRaggedArr(words, size);
        }
    } else if(argc == 2){
        while(1){
            if(strlen(argv[1]) > 1){
                fputs("ERROR [Reading 1st Arg] - Required a char\n", stderr);
                exit(EXIT_FAILURE);
            }
            printf("> ");
            ch = argv[1][0];

            fgets(line,  LEN, stdin);
            if(line[0] == 'q'){
                exit(EXIT_SUCCESS);
            }

            line[strlen(line)-1] = '\0';

            words = splitLine(&size, line);
            for(int i = 0; i < size; ++i){
                if(!(pf = fopen(words[i], "r"))){
                    fprintf(stderr, "ERROR [Openning File] %s\n", words[i]);
                    continue;
                } else{
                    int count = 0;
                    while(!feof(pf)){
                        fgets(_tmpL, LEN, pf);
                        count += countChar(_tmpL, ch);
                    }
                    printf("file[%s] - char[%c] - count[%d]\n", words[i],
                                ch, count);
                    fclose(pf);
                }
            }
            freeRaggedArr(words, size);
        }
    } else if(argc > 2){
        if(strlen(argv[1]) > 1){
            fputs("ERROR [Reading 1st Arg] - Required a char\n", stderr);
            exit(EXIT_FAILURE);
        }
        printf("> ");
        ch = argv[1][0];

        for(int i = 2; i < argc; ++i){
            if((pf = fopen(argv[i], "r"))){
                fprintf(stderr, "ERROR [Openning File] %s\n", argv[i]);
                continue;
            } else{
                while(!feof(pf)){
                    fgets(_tmpL, LEN, pf);
                    printf("file[%s] - char[%c] - count[%d]\n", argv[i],
                            ch, countChar(_tmpL, ch));
                }
                fclose(pf);
            }
        }
    }

    // freeRaggedArr(words, size);

    return 0;
}

char** splitLine(int *size, const char * restrict line){
    int nrS = 0;
    char **arr = NULL;        
    char *ln = (char*) malloc(strlen(line)+1);
    strcpy(ln, line);
    
    char *pch = strtok(ln, " ,\n");
    while(pch){
        char **temp = (char**) realloc(arr, ++nrS * sizeof(char*));

        if(!temp){
            fputs("ERROR [Alocating Mem]", stderr);
            freeRaggedArr(arr, nrS);
            exit(EXIT_FAILURE);
        }

        arr = temp;
        arr[nrS-1] = (char*) malloc(strlen(pch)+1);
        strcpy(arr[nrS-1], pch);
        // puts(pch);

        pch = strtok(NULL, " ,\n");
    }

    free(ln);
    *size = nrS;
    return arr;
}

void freeRaggedArr(char **arr, int size){
    for(int i = 0; i < size; ++i){
        free(arr[i]);
    }
    free(arr);
}

int countChar(const char * restrict str, char ch){
    int count = 0;
    for(int i = 0; i < strlen(str); ++i){
        if(str[i] == ch){
            count++;
        }
    }

    return count;
}

void help(){
    printf("Count the apparitons of a char within a file:\n\n");
    printf("\t- [no arg]                -> [char][file1 file2 ...]\n");
    printf("\t- [char]                  -> [file1 file2 ...]\n");
    printf("\t- [char][file1 file2 ...]\n");
    printf("\nUsing without full arguments list at least [char][file1], enters a loop\n");
    printf("\twhich can be canceled by using [q] as the first arg\n");
}