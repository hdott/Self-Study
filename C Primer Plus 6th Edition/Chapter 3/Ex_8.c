/*
    In the U.S. system of volume measurements, a pint is 2 cups, a cup is 8 ounces,
        an ounce is 2 tablespoons, and a tablespoon is 3 teaspoons. Write a program
        that requests a volume in cups and that displays the equivalent volumes in
        pints, ounces, tablespooons, and teaspoons. 
*/

#include <stdio.h>


int main(void){
    const int cups_in_pint = 2,
            ounces_in_cup = 8,
            tablespoons_in_ounce = 2,
            teaspoons_in_tablespoon = 3;
    
    float volume_cups;
    printf("Enter volume in cups: ");
    scanf("%f", &volume_cups);

    float pint = volume_cups / (float) cups_in_pint;
    printf("[%.2f] Cups = [%.2f] Pints\n", volume_cups, pint);

    float ounces = volume_cups * (float) ounces_in_cup;
    printf("[%.2f] Cups = [%.2f] Ounces\n", volume_cups, ounces);

    float tablespoons = volume_cups * (float) tablespoons_in_ounce;
    printf("[%.2f] Cups = [%.2f] Tablespoons\n", volume_cups, tablespoons);

    float teaspoons = volume_cups * (float) teaspoons_in_tablespoon;
    printf("[%.2f] Cups = [%.2f] Teaspoons\n", volume_cups, teaspoons);
    

    return 0;
}