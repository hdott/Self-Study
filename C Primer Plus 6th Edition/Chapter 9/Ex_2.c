/*
    Devise a function chline(ch,i,j) that prints the requested character in columns i
        through j. Test it in a simple driver.
*/

#include <stdio.h>

void chline(char, int, int);


int main(void){
    chline('A', 5, 15);
    putchar('\n');
    

    return 0;
}

void chline(char ch, int i, int j){
    for(int y=1; y<=j; ++y){
        if(y<i){
            putchar('_');
        } else{
            putchar(ch);
        }
    }
}