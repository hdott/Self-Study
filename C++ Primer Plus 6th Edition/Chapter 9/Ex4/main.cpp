#include <iostream>
#include "sales.h"


int main(void){
    SALES::Sales obj1,
                obj2;
    
    double ar[4]{100.23, 142.45, 152.234, 166.66};
    SALES::setSales(obj1, ar, 4);
    SALES::setSales(obj2);

    SALES::showSales(obj1);
    SALES::showSales(obj2);


    return 0;
}