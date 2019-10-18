/*
    Modify Programming Ex_8.c from Chapter 7 so that the menu choices are labeled by
        characters instead of by numbers; use q instead of 5 as the cue to terminate input.
*/

#include <stdio.h>
#include <stdlib.h>


int main(void){
    const double tax_rate1_300 = 0.15,
                tax_rate2_150 = 0.2,
                tax_rate3 = 0.25,
                overtime = 1.5;
    double bpr;

    int option;
    do{
        system("clear");
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("a) $8.75/hr\t\t\tb) $9.33/hr\nc) $10.00/hr\t\t\td) $11.20/hr\nq) quit\n");
        printf("*****************************************************************\n");

        option = getchar();
        getchar();
        switch(option){
            case 'a':
                bpr = 8.75;
                break;
            case 'b':
                bpr = 9.33;
                break;
            case 'c':
                bpr = 10.00;
                break;
            case 'd':
                bpr = 11.20;
                break;
            case 'q':
                exit(0);
                break;
            default:
                continue;
                break;
        }

        int hours;
        printf("Enter the number of hours worked this week: ");
        scanf("%d", &hours);
        getchar();

        double net_pay = 0;
        if(hours > 40){
            net_pay = 40 * bpr;
            hours -= 40;
            net_pay += hours * (bpr * overtime); 
        } else{
            net_pay = hours * bpr;
        }

        double _tmp = net_pay,
                tax = 0;
        for(int i=0; i<3; ++i){
            switch(i){
                case 0:
                    if(_tmp > 300){
                        tax += 300 * tax_rate1_300;
                        _tmp -= 300;
                    } else{
                        tax += _tmp * tax_rate1_300;
                        _tmp -= _tmp;
                    }
                    break;
                case 1:
                    if(_tmp > 150){
                        tax += 150 * tax_rate2_150;
                        _tmp -= 150;
                    } else{
                        tax += _tmp * tax_rate2_150;
                        _tmp -= _tmp;
                    }
                    break;
                case 2:
                    tax += _tmp * tax_rate3;
                    break;
            }
        }

        printf("Gross pay [%.2lf]\n", tax+net_pay);
        printf("Taxes [%.2lf]\n", tax);
        printf("Net pay [%.2lf]\n", net_pay);

        getchar();
    } while(option != 5);


    return 0;
}