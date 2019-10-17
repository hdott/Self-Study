/*
    Modify assumption a. in Ex_7.c so that the program presents a menu of pay rates
        from which to choose. Use a switch to select the pay rate. The beginning of a run
        should look something like this:
    *****************************************************************
    Enter the number corresponding to the desired pay rate or action:
    1) $8.75/hr
    2) $9.33/hr
    3) $10.00/hr
    4) $11.20/hr
    5) quit
    *****************************************************************
        If choices 1 through 4 are selected, the program should request the hours worked. The
        program should recycle until 5 is entered. If something other than choices 1 through 5
        is entered, the program should remind the user what the proper choices are and then
        recycle. Use #defined constants for the various earning rates and tax rates.
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
        printf("1) $8.75/hr\t\t\t2) $9.33/hr\n3) $10.00/hr\t\t\t4) $11.20/hr\n5) quit\n");
        printf("*****************************************************************\n");

        scanf("%d", &option);
        switch(option){
            case 1:
                bpr = 8.75;
                break;
            case 2:
                bpr = 9.33;
                break;
            case 3:
                bpr = 10.00;
                break;
            case 4:
                bpr = 11.20;
                break;
            case 5:
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