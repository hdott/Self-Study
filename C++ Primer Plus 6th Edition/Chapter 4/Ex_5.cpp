/*
    The CandyBar structure contains three members. The first member holds the brand
        name of a candy bar. The second holds the weight (which may have a fractional
        part) of the candy bar, and the third member holds the number of calories (an
        integer value) in the candy bar. Write a program that declares such a structure
        and creates a CandyBar variable called snack, initializing its members to
        "Mocha Munch", 2.3, and 350, respectively. The initialization should be part
        of the declaration for snack. Finally, the program should display the contents
        of the snack variable.
    */

   #include <iostream>


struct CandyBar{
    std::string brand;
    double weight;
    int calories;
};

int main(void){
    CandyBar snack{"Mocha Munch", 2.3, 350};

    std::cout << snack.brand << ", " << snack.weight << ", "
            << snack.calories << std::endl;

    return 0;
}