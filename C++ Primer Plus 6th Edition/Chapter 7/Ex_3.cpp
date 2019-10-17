/*
    Here is a structure declaration:
    struct box
    {
        char maker[40];
        float height;
        float width;
        float length;
        float volume;
    };
        a. Write a function that passes a box structure by value and that displays the
        value of each member.
        b. Write a function that passes the address of a box structure and that sets the
        volume member to the product of the other three dimensions.
        c. Write a simple program that uses these two functions.
*/

#include <iostream>

struct box;
void printBox(box);
void setVolumeBox(box *);


struct box{
    char marker[40];
    float height,
        width,
        length,
        volume;
};


int main(void){
    std::cout << "Enter the following: " << std::endl;
    std::cout << "marker = ";
    box b;
    std::cin >> b.marker;
    std::cout << "height = ";
    std::cin >> b.height;
    std::cout << "width = ";
    std::cin >> b.width;
    std::cout << "length = ";
    std::cin >> b.length;
    setVolumeBox(&b);
    printBox(b);


    return 0;
}

void printBox(box b){
    std::cout << "marker = " << b.marker << std::endl;
    std::cout << "height = " << b.height << std::endl;
    std::cout << "width  = " << b.width << std::endl;
    std::cout << "length = " << b.length << std::endl;
    std::cout << "volume = " << b.volume << std::endl;
}

void setVolumeBox(box *b){
    b->volume = b->height *
                b->length *
                b->width;
}