/*
    Do Ex_6.cpp but modify it to get information from a file.The first
        item in the file should be the number of contributors, and the rest of the file should
        consist of pairs of lines, with the first line of each pair being a contributor’s name
        and the second line being a contribution.That is, the file should look like this:
    4
    Sam Stone
    2000
    Freida Flass
    100500
    Tammy Tubbs
    5000
    Rich Raptor
    55000
*/

#include <iostream>
#include <fstream>


struct sprf{
    std::string name;
    double contribution;
}; 


int main(void){
    std::ifstream input;
    input.open("contributors.txt");
    int size;
    (input >> size).get();

    sprf *arr = new sprf[size];
    for(int i=0; i<size; ++i){
        getline(input, arr[i].name);
        (input >> arr[i].contribution).get();
    }
    input.close();

    std::cout << "Grand Patrons" << std::endl;
    bool condition{false};
    for(int i=0; i<size; ++i){
        if(arr[i].contribution >= 10000){
            std::cout << arr[i].name << ", " << arr[i].contribution << std::endl;
            condition = true;
        }
    }
    if(!condition){
        std::cout << "none" << std::endl;
    }

    std::cout << "headed Patrons" << std::endl;
    condition = false;
    for(int i=0; i<size; ++i){
        if(arr[i].contribution < 10000){
            std::cout << arr[i].name << ", " << arr[i].contribution << std::endl;
            condition = true;
        }
    }
    if(!condition){
        std::cout << "none" << std::endl;
    }


    return 0;
}