/*
    Write a program that reads two binary strings as command-line arguments and prints
        the results of applying the ~ operator to each number and the results of applying the
        & , | , and ^ operators to the pair. Show the results as binary strings. (If you don’t have a
        command-line environment available, have the program read the strings interactively.)
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_bs(char * bs);
char * negate_bs(char * bs);
char * bs_and_bs(char * bs1, char * bs2);
char * bs_or_bs(char * bs1, char * bs2);
char * bs_xor_bs(char * bs1, char * bs2);


int main(int argc, char **argv){
    if(argc == 3){
        char * bs;

        bs = negate_bs(argv[1]);
        printf("~%s -> ", argv[1]);
        print_bs(bs);
        free(bs);

        bs = negate_bs(argv[2]);
        printf("~%s -> ", argv[2]);
        print_bs(bs);
        free(bs);

        bs = bs_and_bs(argv[1], argv[2]);
        printf("%s & %s -> ", argv[1], argv[2]);
        print_bs(bs);
        free(bs);

        bs = bs_or_bs(argv[1], argv[2]);
        printf("%s | %s -> ", argv[1], argv[2]);
        print_bs(bs);
        free(bs);

        bs = bs_xor_bs(argv[1], argv[2]);
        printf("%s ^ %s -> ", argv[1], argv[2]);
        print_bs(bs);
        free(bs);
    }


    return 0;
}

void print_bs(char * bs){
    for(int i = 0; i < strlen(bs); ++i){
        if(!(i % 4)){
            putchar(' ');
        }
        putchar(bs[i]);
    }
    putchar('\n');
}

char * negate_bs(char * bs){
    char * bsr = (char*) malloc(sizeof(char) * strlen(bs) + 1);
    int i = 0;
    for(i = 0; i < strlen(bs); ++i){
        if(bs[i] == '1'){
            bsr[i] = '0';
            continue;
        }
        if(bs[i] == '0'){
            bsr[i] = '1';
        }
    }
    bsr[i] = '\0';


    return bsr;
}

char * bs_and_bs(char * bs1, char * bs2){
    int size1 = strlen(bs1)-1,
        size2 = strlen(bs2)-1;

    int x = size1 > size2 ? size1 : size2;
    char * bs = (char*) malloc(sizeof(char) * x + 1);
    for(int i = size1, j = size2; (i >= 0 || j >=0) && x >= 0; --x){
        if(!i || !j){
            if(!i){
                bs[x] = ((bs1[j--] - '0') & 0) + '0';
                continue;
            }
            if(!j){
                bs[x] = ((bs2[i--] - '0') & 0) + '0';
                continue;
            }
        } else{
            int b1 = bs1[i--] - '0',
                b2 = bs2[j--] - '0';
            bs[x] = (b1 & b2) + '0';
        }
    }
    bs[x] = '\0';

    return bs;
}

char * bs_or_bs(char * bs1, char * bs2){
    int size1 = strlen(bs1)-1,
        size2 = strlen(bs2)-1;

    int x = size1 > size2 ? size1 : size2;
    char * bs = (char*) malloc(sizeof(char) * x + 1);
    for(int i = size1, j = size2; (i >= 0 || j >=0) && x >= 0; --x){
        if(!i || !j){
            if(!i){
                bs[x] = ((bs1[j--] - '0') | 0) + '0';
                continue;
            }
            if(!j){
                bs[x] = ((bs2[i--] - '0') | 0) + '0';
                continue;
            }
        } else{
            int b1 = bs1[i--] - '0',
                b2 = bs2[j--] - '0';
            bs[x] = (b1 | b2) + '0';
        }
    }
    bs[x] = '\0';

    return bs;
}

char * bs_xor_bs(char * bs1, char * bs2){
    int size1 = strlen(bs1)-1,
        size2 = strlen(bs2)-1;

    int x = size1 > size2 ? size1 : size2;
    char * bs = (char*) malloc(sizeof(char) * x + 1);
    for(int i = size1, j = size2; (i >= 0 || j >=0) && x >= 0; --x){
        if(!i || !j){
            if(!i){
                bs[x] = ((bs1[j--] - '0') ^ 0) + '0';
                continue;
            }
            if(!j){
                bs[x] = ((bs2[i--] - '0') ^ 0) + '0';
                continue;
            }
        } else{
            int b1 = bs1[i--] - '0',
                b2 = bs2[j--] - '0';
            bs[x] = (b1 ^ b2) + '0';
        }
    }
    bs[x] = '\0';

    return bs;
}