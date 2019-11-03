/*
    Write a program that prompts the user to enter the day, month, and year. The month
        can be a month number, a month name, or a month abbreviation. The program then
        should return the total number of days in the year up through the given day. (Do take
        leap years into account.)
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
struct checkMonth{
    int day;
    int year;
    int state;  // 1 - mnt // 2 - month // 3 - nr
    union{
        char mnt[4];
        char month[20];
        int nr;
    };
};

int countDays(struct checkMonth *c);
void leapYear(int year);


int main(void){
    char str[20];
    struct checkMonth check;

    while(1){
        printf("Enter day month year: ");
        scanf("%d %s %d", &check.day, str, &check.year);
        getchar();
        if(strlen(str) > 2){
            if(strlen(str) > 3){
                check.state = 2;
                strcpy(check.month, str);
            } else{
                check.state = 1;
                strcpy(check.mnt, str);
            }
        } else{
            check.state = 3;
            check.nr = atoi(str);
        }
        if(feof(stdin)){
            putchar('\n');
            break;
        }
        
        leapYear(check.year);
        printf("The number of days is: %d\n", countDays(&check));
    }


    return 0;
}

int countDays(struct checkMonth *c){
    int nr;
    switch(c->state){
        case 1:
            for(int i = 0; i < 12; ++i){
                if(!(strcmp(months[i].mnt, c->mnt))){
                    nr = i;
                    break;
                }
            }
            break;
        case 2:
            for(int i = 0; i < 12; ++i){
                if(!(strcmp(mnths[i], c->month))){
                    nr = i;
                    break;
                }
            }
            break;
        case 3:
            for(int i = 0; i < 12; ++i){
                if(i == c->nr-1){
                    nr = i;
                    break;
                }
            }
            break;
    }

    if(c->day > months[nr].days){
        fprintf(stderr, "Number of days exceeds the number of days in %s\n", mnths[nr]);
        exit(EXIT_FAILURE);
    }

    int sum = 0;
    for(int i = 0; i < 12; ++i){
        if(i == nr){
            sum += c->day;
            break;
        }
        sum += months[i].days;
    }

    return sum;
}

void leapYear(int year){
    if(!(year % 100)){
        if(!(year % 400)){
            months[1].days = 29;
        } else{
            months[1].days = 28;
        }
    } else if(!(year % 4)){
        months[1].days = 29;
    } else{
        months[1].days = 28;
    }
}