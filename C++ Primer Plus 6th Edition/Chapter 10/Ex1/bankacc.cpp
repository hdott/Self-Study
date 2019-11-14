#include <iostream>
#include "bankacc.h"


void BankAccount::print() const{
    using namespace std;

    cout << "Depositor Name: " << this->depositor_name << endl;
    cout << "Account Number: " << this->acc_number << endl;
    cout << "Balance: " << this->balance << endl;
}

void BankAccount::deposit(double nr){
    this->balance += nr;
}

void BankAccount::withdraw(double nr){
    this->balance -= nr;
}