/*
    The mass of a single molecule of water is about 3.0 x 10^-23 grams. A quart of
        water is about 950 grams. Write a program that requests an amount of water,
        in quarts, and display the number of water molecules in that amount.
*/

#include <stdio.h>


int main(void){
    const long double mass_molecule_water = 3.0e-23;
    int quart_of_water = 950,
        amount_water;

    printf("Enter amount of water in quarts: ");
    scanf("%d", &amount_water);

    printf("The number of water molecules in [%d] water quarts is: [%.3lle]\n",
            amount_water, (long double)(amount_water * quart_of_water) * mass_molecule_water);

    return 0;
}