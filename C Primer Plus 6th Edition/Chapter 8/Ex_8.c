/*
    Write a program that shows you a menu offering you the choice of addition, subtraction,
        multiplication, or division. After getting your choice, the program asks for two numbers,
        then performs the requested operation. The program should accept only the offered
        menu choices. It should use type float for the numbers and allow the user to try again
        if he or she fails to enter a number. In the case of division, the program should prompt
        the user to enter a new value if 0 is entered as the value for the second number. A typical
        program run should look like this:
    Enter the operation of your choice:
    a. add          s. subtract
    m. multiply     d. divide
    q. quit
    a
    Enter first number: 22 .4
    Enter second number: one
    one is not an number.
    Please enter a number, such as 2.5, -1.78E8, or 3: 1
    22.4 + 1 = 23.4
    Enter the operation of your choice:
    a. add          s. subtract
    m. multiply     d. divide
    q. quit
    d
    Enter first number: 18.4
    Enter second number: 0
    Enter a number other than 0: 0.2
    18.4 / 0.2 = 92
    Enter the operation of your choice:
    a. add          s. subtract
    m. multiply     d. divide
    q. quit
    q
    Bye.
*/

#include <stdio.h>
#include <stdlib.h>


int menu(void);
float getFloat(void);
float handleComput(int opt, float x, float y);
void flushEcho(void);


int main(void){
    float   x,
            y;
    int opt;

    while(1){
        opt = menu();

        printf("Enter first number: ");
        x = getFloat();
        printf("Enter second number: ");
        y = getFloat();

        if(opt == 'd'){
            while(!y){
                printf("Enter a number other than 0: ");
                scanf("%f", &y);
                getchar();
            }
        }
        
        printf("%g + %g = %g\n", x, y, handleComput(opt, x, y));        
    }
    

    return 0;
}

int menu(void){
    int option;
    do{
        printf("Please enter the operation of your choice:\n");
        printf("a. add\t\t\ts. substract\n");
        printf("m. multiply\t\td. divide\n");
        printf("q. quit\n");

        option = getchar();
        getchar();
    } while(option != 'a' &&
            option != 's' &&
            option != 'm' &&
            option != 'd' &&
            option != 'q');
    
    if(option == 'q'){
        printf("Bye.\n");
        exit(0);
    }
    
    return option;
}

float getFloat(void){
    float x;
    while(scanf("%f", &x) != 1){
        flushEcho();
        printf("is not a number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
    }
    getchar();

    return x;
}

float handleComput(int opt, float x, float y){
    switch(opt){
        case 'a':
            return x+y;
            break;
        case 's':
            return x-y;
            break;
        case 'm':
            return x*y;
            break;
        case 'd':
            return x/y;
            break;
    }
}

void flushEcho(void){
    char ch;

    while((ch = getchar()) != '\n'){
        putchar(ch);
    }
    putchar(' ');
}