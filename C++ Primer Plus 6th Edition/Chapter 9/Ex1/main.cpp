#include <iostream>
#include "golf.h"


int main(void){
    golf arr[Len];
    int i{0};

    for(; i<Len; ++i){
        if(setgolf(arr[i]) == 0){
            break;
        }
    }

    system("clear");
    for(int j=0; j<i; ++j){
        showgolf(arr[j]);
    }

    for(int j=0; j<i; ++j){
        handicap(arr[j], j+10);
    }

    for(int j=0; j<i; ++j){
        showgolf(arr[j]);
    }


    return 0;
}