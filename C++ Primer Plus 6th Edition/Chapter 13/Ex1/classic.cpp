#include <iostream>
#include <cstring>
#include "classic.h"


Classic::Classic(const char *pw, const char *s1, const char *s2, int n, double x) : 
                                    Cd(s1, s2, n,  x){
    primaryWork = new char[strlen(pw)+1];
    strcpy(primaryWork, pw);
}

Classic::Classic(const Classic & c) : Cd(c){
    delete[] primaryWork;
    primaryWork = new char[strlen(c.primaryWork)+1];
    strcpy(primaryWork, c.primaryWork);
}

Classic::~Classic(){
    delete[] primaryWork;
}

void Classic::Report() const{
    Cd::Report();
    std::cout << primaryWork << std::endl;
}

Classic & Classic::operator=(const Classic & c){
    Cd::operator=(c);
    delete[] primaryWork;
    primaryWork = new char[strlen(c.primaryWork)+1];
    strcpy(primaryWork, c.primaryWork);

    return *this;
}