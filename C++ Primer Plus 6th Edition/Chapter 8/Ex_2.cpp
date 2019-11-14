/*
    The CandyBar structure contains three members.The first member holds the brand
        name of a candy bar.The second member holds the weight (which may have a frac-
        tional part) of the candy bar, and the third member holds the number of calories
        (an integer value) in the candy bar.Write a program that uses a function that takes
        as arguments a reference to CandyBar , a pointer-to- char , a double , and an int and
        uses the last three values to set the corresponding members of the structure.The last
        three arguments should have default values of “Millennium Munch,” 2.85, and 350.
        Also the program should use a function that takes a reference to a CandyBar as an
        argument and displays the contents of the structure. Use const where appropriate.
*/

#include <iostream>

struct CandyBar{
    std::string brand;
    double weight;
    int nr_of_cal;
};

void createCB(CandyBar& cb, const char* br="Millenium Munch",
            const double wg=2.85, const int noc=350);
void printCB(const CandyBar& cb);


int main(void){
    CandyBar cb;

    createCB(cb);
    printCB(cb);


    return 0;
}

void createCB(CandyBar& cb, const char* br, const double wg, const int noc){
    cb.brand = br;
    cb.weight = wg;
    cb.nr_of_cal = noc;
}

void printCB(const CandyBar& cb){
    std::cout << "Brand: " << cb.brand << std::endl;
    std::cout << "Weight: " << cb.weight << std::endl;
    std::cout << "Calories: " << cb.nr_of_cal << std::endl;
}