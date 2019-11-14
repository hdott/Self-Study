#pragma once
#include <iostream>


class Person {
    private:
        static const int LIMIT = 25;
        std::string lname;  // Person’s last name
        char fname[LIMIT];  // Person’s first name
    public:
        Person() {lname = ""; fname[0] = '\0'; } // #1
        Person(const std::string & ln, const char * fn = "Heyyou");
        // the following methods display lname and fname
        void Show() const;          // firstname lastname format
        void FormalShow() const;    // lastname, firstname format
};