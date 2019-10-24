#include <iostream>
#include <cstring>
#include "golf.h"


Golf::Golf(const char *full_name, int handicap){
    strcpy(this->fullname, full_name);
    this->handicap = handicap;
}

int Golf::setgolf(){
    using namespace std;
    
    char name[LEN];
    int handcp,
        opt{0};

    cout << "Enter the name of the user: ";
    cin.getline(name, LEN);
    if(strlen(name) > 0){
        opt = 1;
    }
    cout << "Enter the handicap value: ";
    (cin >> handcp).get();

    *this = Golf(name, handcp);


    return opt;
}

void Golf::changehandicap(int hc){
    this->handicap = hc;
}

void Golf::showgolf() const{
    std::cout << "Name: " << this->fullname << std::endl;
    std::cout << "Handicap: " << this->handicap << std::endl;
}