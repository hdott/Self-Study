/*
    Begin with the following structure declaration:
    struct chaff{
        char dross[20];
        int slag;
    };
        Write a program that uses placement new to place an array of two such
        structures in a buffer. Then assign values to the structure members (remembering
        to us strcpy() for the char array) and use a loop to display the contents.
        Option 1 is to use a static array, for the buffer. Option 2 is to use regular
        new to allocate the buffer.
*/

#include <iostream>
#include <cstring>
#include <new>

struct chaff{
    char dross[20];
    int slag;
};

void printStruct(const chaff& chf);


int main(void){
    using namespace std;

    // test to find out the size in bytes of chaff struct
    // for my config is 24 bytes
    // chaff test;
    // cout << sizeof(test) << endl;

    char buffer1[48];
    char* buffer2 = new char[48];

    chaff *p1, *p2;
    p1 = new (buffer1) chaff[2];
    p2 = new (buffer2) chaff[2];

    strcpy(p1[0].dross, "test1.1");
    p1[0].slag = 1;
    strcpy(p1[1].dross, "test1.2");
    p1[1].slag = 2;
    strcpy(p2[0].dross, "test2.1");
    p2[0].slag = 3;
    strcpy(p2[1].dross, "test2.2");
    p2[1].slag = 4;

    printStruct(p1[0]);
    printStruct(p1[1]);
    printStruct(p2[0]);
    printStruct(p2[1]);


    delete []buffer2;
    return 0;
}

void printStruct(const chaff& chf){
    using namespace std;

    cout << "dross: " << chf.dross << endl;
    cout << "slag: " << chf.slag << endl;
}