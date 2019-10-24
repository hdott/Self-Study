#pragma once
#include <iostream>


class BankAccount{
    private:
        std::string depositor_name;
        std::string acc_number;
        double balance;
    
    public:
        BankAccount(std::string dep_name, std::string acc_nr, double balance):
            depositor_name(dep_name), acc_number(acc_nr), balance(balance){};

        void print() const;
        void deposit(double nr);
        void withdraw(double nr);      
};