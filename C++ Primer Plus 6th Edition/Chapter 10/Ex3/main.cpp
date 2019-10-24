#include <iostream>
#include "golf.h"


int main(void){
    const int LEN = 10;
    Golf arr[LEN];
    int i{0};

    for(; i<LEN; ++i){
        if(arr[i].setgolf() == 0){
            break;
        }
    }

    system("clear");
    for(int j=0; j<i; ++j){
        arr[j].showgolf();
    }

    for(int j=0; j<i; ++j){
        arr[j].changehandicap(j+10);
    }

    for(int j=0; j<i; ++j){
        arr[j].showgolf();
    }


    return 0;
}