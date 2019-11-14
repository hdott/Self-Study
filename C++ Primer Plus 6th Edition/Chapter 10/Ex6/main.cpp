#include <iostream>
#include "move.h"


int main(void){
    Move mv1(5,6);
    Move mv2;

    mv1.showmove();
    mv2.showmove();
    Move mv3 = mv1.add(mv2);
    mv3.showmove();
    mv3.reset();
    mv3.showmove();


    return 0;
}