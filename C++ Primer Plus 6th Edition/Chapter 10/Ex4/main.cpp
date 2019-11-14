#include <iostream>
#include "sales.h"


int main(void){
    double ar[4]{100.23, 142.45, 152.234, 166.66};
    SALES::Sales obj1(ar, 4);
    SALES::Sales obj2;
    obj2.setSales();

    obj1.showSales();
    obj2.showSales();


    return 0;
}