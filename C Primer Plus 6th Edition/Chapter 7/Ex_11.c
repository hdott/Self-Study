/*
    The ABC Mail Order Grocery sells artichokes for $2.05 per pound, beets for $1.15 per
        pound, and carrots for $1.09 per pound. It gives a 5% discount for orders of $100 or
        more prior to adding shipping costs. It charges $6.50 shipping and handling for any
        order of 5 pounds or under, $14.00 shipping and handling for orders over 5 pounds
        and under 20 pounds, and $14.00 plus $0.50 per pound for shipments of 20 pounds or
        more. Write a program that uses a switch statement in a loop such that a response of a
        lets the user enter the pounds of artichokes desired, b the pounds of beets, c the pounds
        of carrots, and q allows the user to exit the ordering process. The program should keep
        track of cumulative totals. That is, if the user enters 4 pounds of beets and later enters
        5 pounds of beets, the program should use report 9 pounds of beets. The program then
        should compute the total charges, the discount, if any, the shipping charges, and the
        grand total. The program then should display all the purchase information: the cost per
        pound, the pounds ordered, and the cost for that order for each vegetable, the total cost
        of the order, the discount (if there is one), the shipping charge, and the grand total of all
        the charges.
*/

#include <stdio.h>
#include <stdlib.h>


int main(void){
    const double artichokesP = 2.05,
                beetsP = 1.15,
                carrotsP = 1.09,
                shipping_handling_under5 = 6.5,
                shipping_handling_under20 = 14.0,
                shipping_handling_excess = 0.5,
                discout_over100 = 0.05;
    double artichokes = 0,
            beets = 0,
            carrots = 0;

    char option;
    do{
        system("clear");
        printf("The ABC Mail Order Grocery Store:\n");
        printf("a) artichokes - %.2lf\n", artichokesP);
        printf("b) beests - %.2lf\n", beetsP);
        printf("c) carrots - %.2lf\n", carrotsP);
        printf("q) quit\n");
        printf("\nOption: ");
        scanf("%c", &option);
        getchar();

        if(option == 'q'){
            break;
        }

        printf("Pounds: ");
        double _tmp;
        scanf("%lf", &_tmp);
        getchar();
        switch(option){
            case 'a':
                artichokes += _tmp;
                break;
            case 'b':
                beets += _tmp;
                break;
            case 'c':
                carrots += _tmp;
                break;
            case 'q':
                option = 'q';
                break;
            default:
                continue;
                break;   
        }

    } while(option != 'q');

    double total_price_artichockes = 0,
            total_price_beets = 0,
            total_price_carrots = 0,
            total_price = 0,
            total_pounds = 0,
            shipping_charge = 0;

    total_price_artichockes += artichokes * artichokesP;
    total_price_beets += beets * beetsP;
    total_price_carrots += carrots * carrotsP;
    total_price = total_price_artichockes + total_price_beets +
                    total_price_carrots;
    total_pounds = artichokes + beets + carrots;

    double isDiscount;
    // check for discount
    if(total_price > 100){
        isDiscount = total_price * discout_over100;
        total_price -= isDiscount;
    }

    // find shipping
    if(total_pounds < 5){
        shipping_charge = shipping_handling_under5;
    } else if(total_pounds > 5 && total_pounds < 20){
        shipping_charge = shipping_handling_under20;
    } else{
        shipping_charge += shipping_handling_under20;
        double _tmp = total_pounds - 20;
        shipping_charge += _tmp * shipping_handling_excess;
    }

    printf("\nCost per pound: %.2lf\n", total_price / total_pounds);
    printf("Pounds ordered: %.2lf\n", total_pounds);
    if(total_price_artichockes > 0){
        printf("Cost of artichockes: %.2lf\n", total_price_artichockes);
    }
    if(total_price_beets > 0){
        printf("Cost of beets: %.2lf\n", total_price_artichockes);
    }
    if(total_price_carrots > 0){
        printf("Cost of carrots: %.2lf\n", total_price_carrots);
    }
    printf("Total order cost: %.2lf\n", total_price);
    if(isDiscount > 0){
        printf("Discount: %.2lf\n", isDiscount);
    }
    printf("Shipping charge: %.2lf\n", shipping_charge);
    printf("TOTAL: %.2lf\n", total_price + shipping_charge);


    return 0;
}