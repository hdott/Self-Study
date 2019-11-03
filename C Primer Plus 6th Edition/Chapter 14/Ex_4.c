/*
    Write a program that creates a structure template with two members according to the
        following criteria:
    a. The first member is a social security number. The second member is a structure
        with three members. Its first member contains a first name, its second member
        contains a middle name, and its final member contains a last name. Create and
        initialize an array of five such structures. Have the program print the data in this
        format:
        Dribble, Flossie M. –– 302039823
        Only the initial letter of the middle name is printed, and a period is added. Neither the
        initial (of course) nor the period should be printed if the middle name member is empty.
        Write a function to do the printing; pass the structure array to the function.
    b. Modify part a. by passing the structure value instead of the address.
*/

#include <stdio.h>

typedef char String[40];
typedef struct social{
    String SSN;
    struct{
        String first;
        String middle;
        String last;
    };
} Social;

void printSocialPoint(Social *soc);
void printSocialVal(Social soc);


int main(void){
    Social arr[5] = {{"1234", {"f1", "m1", "l1"}},
                    {"1235", {"f2", " ", "l2"}},
                    {"1236", {"f3", "m3", "l3"}},
                    {"1237", {"f4", "m4", "l4"}},
                    {"1238", {"f5", "m5", "l5"}}};

    for(int i = 0; i < 5; ++i){
        printSocialPoint(&arr[i]);
        printSocialVal(arr[i]);
    }

    return 0;
}

void printSocialPoint(Social *soc){
    String mid;
    if(soc->middle[0] == ' '){
        mid[0] = '\0';
    } else{
        mid[0] = soc->middle[0];
        mid[1] = '.';
        mid[2] = '\0';
    }
    printf("%s, %s %s -- %s\n", soc->last, soc->first, mid, soc->SSN);
}

void printSocialVal(Social soc){
    String mid;
    if(soc.middle[0] == ' '){
        mid[0] = '\0';
    } else{
        mid[0] = soc.middle[0];
        mid[1] = '.';
        mid[2] = '\0';
    }
    printf("%s, %s %s -- %s\n", soc.last, soc.first, mid, soc.SSN);
}