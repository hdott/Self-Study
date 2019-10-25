#include <iostream>
#include "list.h"


int main(void){
    List<int> ls;

    ls.add(new item<int>{1, NULL});

    // ls.visit(ls.printNode);
    
    // for(int i=2; !ls.isFull(); ++i){
    //     ls.add(new item<int>{i, NULL});
    // }

    // ls.visit(ls.printNode);


    return 0;
}