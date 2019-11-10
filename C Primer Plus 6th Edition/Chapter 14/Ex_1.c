/*
    Redo Review Question 5, but make the argument the spelled-out name of the month
        instead of the month number. (Don’t forget about strcmp() .) Test the function in a
        simple program.
*/

#include <stdio.h>
#include <string.h>

typedef struct month{
    char mnt[4];
    int days;
    int mnt_nr;
} Month;
Month months[12] = {{"JAN", 31, 1},
                    {"FEB", 28, 2},
                    {"MAR", 31, 3},
                    {"APR", 30, 4},
                    {"MAY", 31, 5},
                    {"JUN", 30, 6},
                    {"JUL", 31, 7},
                    {"AUG", 31, 8},
                    {"SEP", 30, 9},
                    {"OCT", 31, 10},
                    {"NOV", 30, 11},
                    {"DEC", 31, 12}};
char mnths[12][40] = {"January", "February", "March", "April", "May", "June",
                    "July", "August", "September", "October", "November", "December"};

int countDays(char *s);


int main(void){
    char str[40];

    while(1){
        printf("Enter the month: ");
        scanf("%s", str);
        if(strlen(str) <= 1)    break;
        printf("The number of days including %s is: %d\n", str, countDays(str));
    }


    return 0;
}

int countDays(char *s){
    int nr;
    for(int i = 0; i < 12; ++i){
        if(!strcmp(s, mnths[i])){
            nr = i;
            break;
        }
    }

    int sum = 0;
    for(int i = 0; i < 12; ++i){
        sum += months[i].days;

        if(i == nr) break;
    }

    return sum;
}