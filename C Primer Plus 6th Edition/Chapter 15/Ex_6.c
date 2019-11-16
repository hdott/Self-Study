/*
    Design a bit-field structure that holds the following information:
    - Font ID: A number in the range 0–255
    - Font Size: A number in the range 0–127
    - Alignment: A number in the range 0–2 represented the choices Left, Center, and Right
    - Bold: Off (0) or on (1)
    - Italic: Off (0) or on (1)
    - Underline: Off (0) or on (1)
        Use this structure in a program that displays the font parameters and uses a looped menu
        to let the user change parameters. For example, a sample run might look like this:
    ID SIZE ALIGNMENT  B   I   U
     1   12   left    off off off
    
    f)change font
    s)change size
    b)toggle bold
    i)toggle italic
    q)quit
    a)change alignment
    u)toggle underline
    s
    Enter font size (0-127): 36

    ID SIZE ALIGNMENT  B   I   U
     1   36   left    off off off

    f)change font
    s)change size
    b)toggle bold
    i)toggle italic
    q)quit
    a)change alignment
    u)toggle underline
    a
    Select alignment:
    l)left
    c)center
    r)right
    r

    ID SIZE ALIGNMENT  B   I   U
     1   36   right    off off off
    
    f)change font
    s)change size
    b)toggle bold
    i)toggle italic
    q)quit
    a)change alignment
    u)toggle underline
    i

    ID SIZE ALIGNMENT  B   I   U
     1   36   right    off on off

    f)change font
    s)change size
    b)toggle bold
    i)toggle italic
    q)quit
    a)change alignment
    u)toggle underline
    q
    Bye!
        The program should use the & operator and suitable masks to ensure that the ID and size
        entries are converted to the specified range.
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

const enum align{left, center, right};
const enum type{off, on};

struct bit_fi{
    unsigned ID : 8;
    unsigned SIZE: 7;
    unsigned ALIGNMENT: 3;
    bool B: 1;
    bool I: 1;
    bool U: 1;
};

void print_bit_fi(struct bit_fi td);
char print_menu(void);
void font(struct bit_fi *td);
void font_size(struct bit_fi *td);
void alignment(struct bit_fi *td);


int main(void){
    struct bit_fi td = {1, 12, left, off, off, off};
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
                if(td.B){
                    td.B = off;
                } else{
                    td.B = on;
                }
                break;
            case 'i':
                if(td.I){
                    td.I = off;
                } else{
                    td.I = on;
                }
                break;
            case 'u':
                if(td.U){
                    td.U = off;
                } else{
                    td.U = on;
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

void print_bit_fi(struct bit_fi td){
    printf("ID: %d\n", td.ID);
    printf("SIZE: %d\n", td.SIZE);
    switch(td.ALIGNMENT){
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
    printf("B: %s\n", td.B ? "on" : "off");
    printf("I: %s\n", td.I ? "on" : "off");
    printf("U: %s\n", td.U ? "on" : "off");
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

void font(struct bit_fi *td){
    printf("Enter font (0-255): ");
    int f;
    scanf("%d", &f);
    getchar();

    if(f < 0 || f > 255){
        fprintf(stderr, "ERROR\tOUT OF RANGE\n");
        exit(EXIT_FAILURE);
    } else{
        td->ID = f;
    }
}

void font_size(struct bit_fi *td){
    printf("Enter font size (0-127): ");
    int f;
    scanf("%d", &f);
    getchar();

    if(f < 0 || f > 127){
        fprintf(stderr, "ERROR\tOUT OF RANGE\n");
        exit(EXIT_FAILURE);
    } else{
        td->SIZE = f;
    }
}

void alignment(struct bit_fi *td){
    printf("l)left\tc)center\tr)right\n");
    char opt = getchar();
    getchar();

    if(opt != 'l' &&  opt != 'c' && opt != 'r'){
        fprintf(stderr, "ERROR\tOUT OF RANGE\n");
        exit(EXIT_FAILURE);
    } else{
        switch(opt){
            case 'l':
                td->ALIGNMENT = left;
                break;
            case 'c':
                td->ALIGNMENT = center;
                break;
            case 'r':
                td->ALIGNMENT = right;
                break;
        }
    }
}