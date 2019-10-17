/*
    The 1988 United States Federal Tax Schedule was the simplest in recent times. It had
        four categories, and each category had two rates. Here is a summary (dollar amounts are
        taxable income):
    Category            Tax
    Single              15% of first $17850 plus 28% of excess
    Head of Household   15% of first $23900 plus 28% of excess
    Married, Joint      15% of first $29750 plus 28% of excess
    Married, Separate   15% of first $14875 plus 28% of excess
        For example, a single wage earner with a taxable income of $20,000 owes 0.15 × $17,850
        + 0.28 × ($20,000−$17,850). Write a program that lets the user specify the tax category
        and the taxable income and that then calculates the tax. Use a loop so that the user can
        enter several tax cases.
*/

#include <stdio.h>
#include <stdlib.h>


int main(void){
    const double first = 0.15,
                excess = 0.28;
    
    int option;

    do{
        system("clear");
        printf("***************************************\n");
        printf("Choose the type of tax for your income:\n");
        printf("1) Single\t\t\t15\% of first $17850 plus 28\% of excess\n");
        printf("2) Head of Household\t15\% of first $23900 plus 28\% of excess\n");
        printf("3) Married, Joint\t15\% of first $29750 plus 28\% of excess\n");
        printf("4) Married, Separate\t15\% of first $14875 plus 28\% of excess\n");
        printf("5) Quit\n");
        printf("***************************************\n");

        printf("Option: ");
        scanf("%d", &option);
        getchar();

        double first_income;
        switch(option){
            case 1:
                first_income = 17850;
                break;
            case 2:
                first_income = 23900;
                break;
            case 3:
                first_income = 29750;
                break;
            case 4:
                first_income = 14875;
                break;
            case 5:
                exit(0);
                break;
            default:
                continue;
                break;
        }

        double income;
        printf("Enter your income: ");
        scanf("%lf", &income);
        getchar();

        double tax = 0;
        if(income > first_income){
            tax += first_income * first;
            income -= first_income;
            tax += income * excess;
        } else{
            tax += income * first;
        }

        printf("Your tax is: %.2lf\n", tax);
        printf("\nPress Enter to continue...");
        getchar();
    } while(option != 5);


    return 0;
}