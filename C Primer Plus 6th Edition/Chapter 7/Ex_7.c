/*
    Write a program that requests the hours worked in a week and then prints the gross pay,
        the taxes, and the net pay. Assume the following:
    a. Basic pay rate = $10.00/hr
    b. Overtime (in excess of 40 hours) = time and a half
    c. Tax rate: #15% of the first $300
    20% of the next $150
    25% of the rest
        Use #define constants, and don’t worry if the example does not conform to current
        tax law.
*/

#include <stdio.h>


int main(void){
    const double bpr = 10.00,
                tax_rate1_300 = 0.15,
                tax_rate2_150 = 0.2,
                tax_rate3 = 0.25,
                overtime = 1.5;
    
    int hours;
    printf("Enter the number of hours worked this week: ");
    scanf("%d", &hours);

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


    return 0;
}