/*
    Write a function that normally takes one argument, the address of a string, and
        prints that string once. However, if a second, type int , argument is provided and is
        nonzero, the function should print the string a number of times equal to the num-
        ber of times that function has been called at that point. (Note that the number of
        times the string is printed is not equal to the value of the second argument; it is
        equal to the number of times the function has been called.) Yes, this is a silly func-
        tion, but it makes you use some of the techniques discussed in this chapter. Use the
        function in a simple program that demonstrates how the function works.
*/

#include <iostream>

int called{0};

void print(const std::string& str, int nr=0);


int main(void){
    std::string str;

    called++;
    print("Calling this 1st time");
    called++;
    print("Calling this 2nd time");
    called++;
    print("Calling this 3rd time with 2nd arg [100]", 100);


    return 0;
}

void print(const std::string& str, int nr){
    if(!nr){
        std::cout << str << std::endl;
    } else{
        for(int i=0; i<called; ++i){
            std::cout << str << std::endl;
        }
    }
}