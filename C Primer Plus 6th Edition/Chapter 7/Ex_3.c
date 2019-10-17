/*
    Write a program that reads integers until 0 is entered. After input terminates, the
        program should report the total number of even integers (excluding the 0) entered, the
        average value of the even integers, the total number of odd integers entered, and the
        average value of the odd integers.
*/

#include <stdio.h>


int main(void){
    int nr_even = 0,
        nr_odd = 0,
        average_even = 0,
        average_odd = 0;
    
    int _tmp;
    scanf("%d", &_tmp);
    while(_tmp){
        if(_tmp % 2){
            nr_odd++;
            average_odd += _tmp;
        } else if(!(_tmp % 2)){
            nr_even++;
            average_even += _tmp;
        }

        scanf("%d", &_tmp);
    }

    printf("Even numbers [%d] and their average [%d]\n", nr_even, average_even/nr_even);
    printf("Odd numbers [%d] and their average [%d]\n", nr_odd, average_odd/nr_odd);


    return 0;
}