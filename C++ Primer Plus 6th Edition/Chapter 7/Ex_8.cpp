/*
    Redo Listing 7.15 without using the array class. Do two versions:
        a. Use an ordinary array of const char * for the strings representing the sea-
        son names, and use an ordinary array of double for the expenses.
        b. Use an ordinary array of const char * for the strings representing the sea-
        son names, and use a structure whose sole member is an ordinary array of
        double for the expenses. (This design is similar to the basic design of the
        array class.)
*/

#include <iostream>
#include <string>
const int Seasons = 4;
const char *Snames[4] =
    {"Spring", "Summer", "Fall", "Winter"};

void fill(double pa[]);
void show(double da[]);
int main()
{
    double expenses[4];
    fill(expenses);
    show(expenses);
    // std::cin.get();
    // std::cin.get();
    return 0;
}

void fill(double pa[])
{
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << "Enter " << Snames[i] << " expenses: ";
        std::cin >> pa[i];
    }
}

void show(double da[])
{
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        std::cout << Snames[i] << ": $" << da[i] << '\n';
        total += da[i];
    }
    std::cout << "Total: $" << total << '\n';
}