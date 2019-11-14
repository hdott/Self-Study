#include <iostream>
#include <cstring>
#include "cow.h"


Cow::Cow(){
    strcpy(name, "defName");
    this->hobby = nullptr;
    this->weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt){
    strcpy(name, nm);
    this->hobby = new char(strlen(ho) + 1);
    strcpy(hobby, ho);
    this->weight = wt;
}

Cow::Cow(const Cow & c){
    strcpy(this->name, c.name);
    this->hobby = new char(strlen(c.hobby) + 1);
    strcpy(this->hobby, c.hobby);
    this->weight = c.weight;
}

Cow::~Cow(){
    delete[] hobby;
}

Cow & Cow::operator=(const Cow & c){
    if(this == &c)  return *this;

    delete[] hobby;
    strcpy(this->name, c.name);
    this->hobby = new char(strlen(c.hobby) + 1);
    strcpy(this->hobby, c.hobby);
    this->weight = c.weight;

    return *this;
}

void Cow::ShowCow() const{
    using std::cout;
    using std::endl;

    cout << "Name: " << name << endl;
    cout << "Hobby: " << *hobby << endl;
    cout << "Weight: " << weight << endl;
}