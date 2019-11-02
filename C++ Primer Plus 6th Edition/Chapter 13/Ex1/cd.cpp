#include <iostream>
#include <cstring>
#include "cd.h"


Cd::Cd(const char * s1, const char * s2, int n, double x) : selections(n), playtime(x){
    strcpy(performers, s1);
    strcpy(label, s2);

}

Cd::Cd(const Cd & d){
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::~Cd(){}

void Cd::Report() const{ // reports all CD data
    using namespace std;
    cout << performers << " - " << label << " - " << selections
        << " - " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d){
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}