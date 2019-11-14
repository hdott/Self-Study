#include <iostream>
#include "plorg.h"


int main(void){
    Plorg plorg,
            plorg1("Plorgy", 44);

    plorg.printPlorg();
    plorg1.printPlorg();
    plorg.changeCI(33);
    plorg.printPlorg();


    return 0;
}