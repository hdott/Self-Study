/*
    Write a program that behaves like the modification of Listing 12.13 , which we discussed
        after showing the output of Listing 12.13 . That is, have the program produce output like
        the following:
    Enter the number of sets; enter q to stop : 18
    How many sides and how many dice? 6 3
    Here are 18 sets of 3 6-sided throws.
    12 10 6 9 8 14 8 15 9 14 12 17 13 8 14
    How many sets? Enter q to stop: q
*/

/* manydice.c -- multiple dice rolls                    */
/* compile with diceroll.c                              */
#include <stdio.h>
#include <stdlib.h>              /* for library srand() */
#include <time.h>                /* for time()          */
#include "diceroll.h"            /* for roll_n_dice()   */
/* and for roll_count  */
int main(void)
{
    int dice,roll;
    int sides;
    int status;
    int sets;
    
    srand((unsigned int) time(0)); /* randomize seed      */
    printf("Enter the number of sets; enter q to stop: ");
    while (scanf("%u", &sets) == 1)
    {
        // printf("Enter the number of sides per die, 0 to stop.\n");
        // printf("How many dice?\n");
        printf("How many sides and how many dice? ");
        scanf("%u", &sides);

        if ((status =scanf("%d", &dice)) != 1)
        {
            if (status == EOF)
                break;             /* exit loop           */
            else
            {
                printf("You should have entered an integer.");
                printf(" Let's begin again.\n");
                while (getchar() != '\n')
                    continue;     /* dispose of bad input */
                printf("How many sides? Enter 0 to stop.\n");
                continue;         /* new loop cycle       */
             }
        }
        
        printf("Here are %u sets of %u %u-sided throws.\n", sets, dice, sides);
        for(int i = 0; i < sets; ++i){
            roll = roll_n_dice(dice, sides);
            printf("%d ", roll);
        }
        
        // printf("You have rolled a %d using %d %d-sided dice.\n",
        //        roll, dice, sides);
        // printf("How many sides? Enter 0 to stop.\n");
        printf("\nHow many sets? Enter q to stop: ");
    }
    // printf("The rollem() function was called %d times.\n",
    //        roll_count);           /* use extern variable */
    
    // printf("GOOD FORTUNE TO YOU!\n");
    
    return 0;
}