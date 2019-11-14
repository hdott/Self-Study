// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
    // Stonewt incognito = 275; // uses constructor to initialize
    // Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    // Stonewt taft(21, 8);

    // cout << "The celebrity weighed ";
    // incognito.show_stn();
    // cout << "The detective weighed ";
    // wolfe.show_stn();
    // cout << "The President weighed ";
    // taft.show_lbs();
    // incognito = 276.8;      // uses constructor for conversion
    // taft = 325;             // same as taft = Stonewt(325);
    // cout << "After dinner, the celebrity weighed ";
    // incognito.show_stn();
    // cout << "After dinner, the President weighed ";
    // taft.show_lbs();
    // display(taft, 2);
    // cout << "The wrestler weighed even more.\n";
    // display(422, 2);
    // cout << "No stone left unearned\n";
    // std::cin.get();

    Stonewt arr[6];

    arr[0] = 11;
    arr[1] = 275;
    arr[2] = 285.7;
    for(int i=3; i<6; ++i){
        cout << "Enter pounds: ";
        std::cin >> arr[i];
    }

    Stonewt smallest = arr[0],
            largest = arr[0],
            eq11(11);

    int nr11 = 0;
    for(int i=0; i<6; ++i){
        if(smallest > arr[i]){
            smallest = arr[i];
        }
        if(largest < arr[i]){
            largest = arr[i];
        }
        if(eq11 == arr[i]){
            nr11++;
        }
    }

    cout << "Smallest:\n";
    smallest.show_lbs();
    cout << "Largest:\n";
    largest.show_lbs();
    cout << "Nr eq11: " << nr11 << std::endl;

    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! ";
        st.show_stn();
    }
}
