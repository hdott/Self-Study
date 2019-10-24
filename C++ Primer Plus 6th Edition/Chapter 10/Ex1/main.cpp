#include <iostream>
#include "bankacc.h"


int main(void){
    BankAccount user1("name1", "01234", 1000);

    user1.print();
    user1.deposit(500);
    user1.print();
    user1.withdraw(200);
    user1.print();


    return 0;
}