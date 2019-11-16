/*
    Write a program with the same behavior as described in exercise 6, but use an unsigned
        long variable to hold the font information and use the bitwise operators instead of bit
        members to manage the information.
*/

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

const enum align{left, center, right};
const enum type{off, on};

void print_bit_fi(const unsigned long td);
char print_menu(void);
void font(unsigned long *td);
void font_size(unsigned long *td);
void alignment(unsigned long *td);


int main(void){
    unsigned long td = 0;
    int size = sizeof(unsigned long) * CHAR_BIT - 1;

    td = 1 << 13;
    td |= 12 << 6;
    td |= 0 << 3;
    td |= 0 << 2;
    td |= 0 << 1;
    td |= 0 << 0;

    print_bit_fi(td);

    char opt;
    while((opt = print_menu()) != 'q'){
        switch(opt){
            case 'f':
                font(&td);
                break;
            case 's':
                font_size(&td);
                break;
            case 'a':
                alignment(&td);
                break;
            case 'b':
                if(td & (1 << 2)){
                    td &= 0 << 2;
                } else{
                    td |= 1 << 2;
                }
                break;
            case 'i':
                if(td & (1 << 1)){
                    td &= 0 << 1;
                } else{
                    td |= 1 << 1;
                }
                break;
            case 'u':
                if(td & (1 << 0)){
                    td &= 0 << 0;
                } else{
                    td |= 1 << 0;
                }
                break;
            // case 'q':
            //     exit(EXIT_SUCCESS);
            //     break;
            default:
                fprintf(stderr, "ERROR\tOPTION NOT AVAILABLE\n");
                exit(EXIT_FAILURE);
                break;
        }
        print_bit_fi(td);
    }
    printf("Bye!\n");

    return 0;
}

void print_bit_fi(const unsigned long td){
    int size = sizeof(unsigned long) * CHAR_BIT - 1;

    printf("ID: %d\n", td >> 13);
    printf("SIZE: %d\n", (td << size-12) >> (size-6));
    switch((td << size-6) >> (size-3)){
        case left:
            printf("ALIGNMENT: left\n");
            break;
        case center:
            printf("ALIGNMENT: center\n");
            break;
        case right:
            printf("ALIGNMENT: right\n");
            break;
    }
    printf("B: %s\n", td & (1 << 2) ? "on" : "off");
    printf("I: %s\n", td & (1 << 1) ? "on" : "off");
    printf("U: %s\n", td & (1 << 0) ? "on" : "off");
    putchar('\n');
}

char print_menu(void){
    printf("f)change font\ts)change size\ta)change alignment\n");
    printf("b)toggle bold\ti)toggle italic\tu)toggle underline\n");
    printf("q)quit\n");

    char opt = getchar();
    getchar();

    return opt;
}

void font(unsigned long *td){
    int size = sizeof(unsigned long) * CHAR_BIT - 1;
    *td  = (*td << size-20) >> (size-20);

    printf("Enter font (0-255): ");
    int f;
    scanf("%d", &f);
    getchar();

    if(f < 0 || f > 255){
        fprintf(stderr, "ERROR\tOUT OF RANGE\n");
        exit(EXIT_FAILURE);
    } else{
        *td |= f << 13;
    }
}

void font_size(unsigned long *td){
    for(int i = 7; i < 14; ++i){
        *td &= 0 << i;
    }

    printf("Enter font size (0-127): ");
    int f;
    scanf("%d", &f);
    getchar();

    if(f < 0 || f > 127){
        fprintf(stderr, "ERROR\tOUT OF RANGE\n");
        exit(EXIT_FAILURE);
    } else{
        *td |= f << 6;
    }
}

void alignment(unsigned long *td){
    for(int i = 3; i < 7; ++i){
        *td &= 0 << i;
    }

    printf("l)left\tc)center\tr)right\n");
    char opt = getchar();
    getchar();

    if(opt != 'l' &&  opt != 'c' && opt != 'r'){
        fprintf(stderr, "ERROR\tOUT OF RANGE\n");
        exit(EXIT_FAILURE);
    } else{
        switch(opt){
            case 'l':
                *td |= 0 << 3;
                break;
            case 'c':
                *td |= 1 << 3;
                break;
            case 'r':
                *td |= 2 << 3;
                break;
        }
    }
}