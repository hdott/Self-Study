/*
    Modify the get_first() function of Listing 8.8 so that it returns the first non-
        whitespace character encountered. Test it in a simple program.
*/

#include <stdio.h>
#include <ctype.h>

char get_first(void);


int main(void){
    printf("First non-whitespace character is [%c]\n", get_first());


    return 0;
}

char get_first(void)
{
    int ch;
    
    while((ch = getchar())){
        if(isspace(ch)){
            continue;
        } else{
            break;
        }
    }
    return ch;
}