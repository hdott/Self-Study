#include <iostream>
#include <cstring>
#include "cd.h"


Cd::Cd(const char * s1, const char * s2, int n, double x) : selections(n), playtime(x){
    performers = new char[strlen(s1)+1];
    strcpy(performers, s1);
    label = new char[strlen(s2)+1];
    strcpy(label, s2);
}

Cd::Cd(const Cd & d){
    delete[] performers;
    performers = new char[strlen(d.performers)+1];
    strcpy(performers, d.performers);
    delete[] label;
    label = new char[strlen(d.label)+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd(){
    delete[] performers;
    delete[] label;
}

void Cd::Report() const{ // reports all CD data
    using namespace std;
    cout << performers << " - " << label << " - " << selections
        << " - " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d){
    delete[] performers;
    performers = new char[strlen(d.performers)+1];
    strcpy(performers, d.performers);
    delete[] label;
    label = new char[strlen(d.label)+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}