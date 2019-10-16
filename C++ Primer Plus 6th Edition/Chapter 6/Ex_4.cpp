/*
    When you join the Benevolent Order of Programmers, you can be known at BOP
        meetings by your real name, your job title, or your secret BOP name.Write a pro-
        gram that can list members by real name, by job title, by secret name, or by a mem-
        ber’s preference. Base the program on the following structure:
    // Benevolent Order of Programmers name structure
    struct bop{
        char fullname[strsize]; // real name
        char title[strsize];    // job title
        char bopname[strsize];  // secret BOP name
        int preference;         // 0 = fullname, 1 = title, 2 = bopname
    };
        In the program, create a small array of such structures and initialize it to
        suitable values. Have the program run a lopp that lets the user select from
        different alternatives:
    a. display by name
    b. display by title
    c. display by bopname
    d. display by preference
    q. quit
        Note that “display by preference” does not mean display the preference member; it
        means display the member corresponding to the preference number. For instance, if
        preference is 1 , choice d would display the programmer’s job title.A sample run
        may look something like the following:
    Benevolent Order of Programmers Report
    a. display by name
    b. display by title
    c. display by bopname
    d. display by preference
    q. quit
    Enter your choice: a
    Wimp Macho
    Raki Rhodes
    Celia Laiter
    Hoppy Hipman
    Pat Hand
    Next choice: d
    Wimp Macho
    Junior Programmer
    MIPS
    Analyst Trainee
    LOOPY
    Next choice: q
    Bye!
*/

#include <iostream>

const int strsize{100};

struct bop{
        char fullname[strsize]; // real name
        char title[strsize];    // job title
        char bopname[strsize];  // secret BOP name
        int preference;         // 0 = fullname, 1 = title, 2 = bopname
    };


int main(void){
    bop arr[5]{{"Wimp Macho", "title1", "la1", 0},
                {"Raki Rhodes", "Junior Programmer", "la2", 1},
                {"Celia Laiter", "title2", "MIPS", 2},
                {"Hoppy Hipman", "Analyst Trainee", "la3", 1},
                {"Pat Hand", "title3", "LOOPY", 2}};
    
    std::cout << "Benevolent Order of Programmers Report" << std::endl;
    std::cout << "a. display by name\n"
            << "b. display by title\n"
            << "c. display by bopname\n"
            << "d. display by preference\n"
            << "q. quit" << std::endl;
    
    char option;
    std::cout << "Enter your choice: ";
    std::cin >> option;
    while(option != 'q'){
        switch(option){
            case 'a':
                for(int i=0; i<5; ++i){
                    std::cout << arr[i].fullname << std::endl;
                }
                break;
            case 'b':
                for(int i=0; i<5; ++i){
                    std::cout << arr[i].title << std::endl;
                }
                break;
            case 'c':
                for(int i=0; i<5; ++i){
                    std::cout << arr[i].bopname << std::endl;
                }
                break;
            case 'd':
                for(int i=0; i<5; ++i){
                    switch(arr[i].preference){
                        case 0:
                            std::cout << arr[i].fullname << std::endl;
                            break;
                        case 1:
                            std::cout << arr[i].title << std::endl;
                            break;
                        case 2:
                            std::cout << arr[i].bopname << std::endl;
                            break;
                    }
                }
        }

        std::cout << "Next choice: ";
        std::cin >> option;
    }
    std::cout << "Bye!" << std::endl;


    return 0;
}