/*
    Write a program that uses three user-defined functions (counting main())
        and produces the following output:
        Three blind mice
        Three blind mice
        See how they run
        See how they run
    One function, called two times, should produce the first two lines, and the
        remaining function, also called twice, should produce the remaining output.
*/

#include <iostream>

void three();
void see();


int main(void){
    three();
    three();
    see();
    see();

    return 0;
}

void three(){
    std::cout << "Three blind mice" << std::endl;
}

void see(){
    std::cout << "See how they run" << std::endl;
}