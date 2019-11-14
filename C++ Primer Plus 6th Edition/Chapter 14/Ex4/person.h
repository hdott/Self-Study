#pragma once
#include <iostream>

using namespace std;

class Person{
    private:
        string first_name,
                last_name;

    public:
        Person() : first_name("TMP_F"), last_name("TMP_L"){};
        Person(string first, string last) : first_name(first), last_name(last){};

        void Show(void) const{
            cout << last_name << ", " << first_name << endl;
        }
};