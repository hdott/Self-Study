#include <iostream>
#include <cstring>
#include "golf.h"


void setgolf(golf& g, const char* nam, int hc){
    strcpy(g.fullname, nam);
    g.handicap = hc;
}

int setgolf(golf & g){
    using namespace std;
    
    char name[Len];
    int handcp,
        opt{0};

    cout << "Enter the name of the user: ";
    cin.getline(name, Len);
    if(strlen(name) > 0){
        opt = 1;
    }
    cout << "Enter the handicap value: ";
    (cin >> handcp).get();

    setgolf(g, name, handcp);

    return opt;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    using namespace std;

    cout << "Name: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}