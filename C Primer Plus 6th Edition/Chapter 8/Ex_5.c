/*
    Modify the guessing program of Listing 8.4 so that it uses a more intelligent guessing
        strategy. For example, have the program initially guess 50, and have it ask the user
        whether the guess is high, low, or correct. If, say, the guess is low, have the next guess
        be halfway between 50 and 100, that is, 75. If that guess is high, let the next guess be
        halfway between 75 and 50, and so on. Using this binary search strategy, the program
        quickly zeros in on the correct answer, at least if the user does not cheat.
*/

#include <stdio.h>


int main(void){
    int guess_low = 0,
        guess_high = 100,
        ch;

    printf("~~~ Guessing Game ~~~\n");
    printf("Choose a number in the range (0,100)\n");
    printf("And I will attempt to guess it!\n");
    printf("**************************************");
    printf("Let's start:\n");
    printf("Is the number [%d] higher(>), lower(<) or correct(y)? ",
            (guess_high+guess_low) / 2);
    while((ch = getchar()) != 'y'){
        getchar();
        switch(ch){
            case '>':
                guess_low = (guess_high+guess_low) / 2 + 1;
                break;
            case '<':
                guess_high = (guess_high+guess_low) / 2 -1;
                break;
            default:
                printf("The character is not supported!\n");
                continue;
                break;
        }

        printf("Is the number [%d] higher(>), lower(<) or correct(y)? ",
            (guess_high+guess_low) / 2);
    }

    printf("Done! Your number is [%d]\n", (guess_high+guess_low) / 2);


    return 0;
}