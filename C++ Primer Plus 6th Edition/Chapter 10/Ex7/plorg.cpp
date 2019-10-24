#include <iostream>
#include <cstring>
#include "plorg.h"


Plorg::Plorg(const char *name, int ci){
    strcpy(this->plorg_name, name);
    this->cont_index = ci;
}

void Plorg::printPlorg() const{
    std::cout << "Name: " << this->plorg_name << std::endl;
    std::cout << "Contentment Index: " << this->cont_index << std::endl;
}