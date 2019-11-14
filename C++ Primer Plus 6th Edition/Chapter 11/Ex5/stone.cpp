// stone.cpp -- user-defined conversions
// compile with stonewt.cpp
#include <iostream>
using std::cout;
using std::endl;
#include "stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
    Stonewt incognito = 275; // uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21);

    cout << "The celebrity weighed " << incognito << endl;
    cout << "The detective weighed " << wolfe << endl;
    cout << "The President weighed " << taft << endl;
    incognito = 276.8;      // uses constructor for conversion
    taft = 325;             // same as taft = Stonewt(325);
    cout << "After dinner, the celebrity weighed " << incognito << endl;
    cout << "After dinner, the President weighed " << taft << endl;
    display(taft, 2);
    cout << "The wrestler weighed even more.\n";
    display(422, 2);
    cout << "No stone left unearned\n";
    // std::cin.get();

    // req
    cout << "REQ" << endl;
    Stonewt req = incognito + wolfe;
    cout << "REQ+ -> " << req << endl;
    req = wolfe - taft;
    cout << "REQ- -> " << req << endl;
    req = taft * incognito;
    cout << "REQ* -> " << req << endl;
    req.setState(Stonewt::STONE);
    cout << "REQstone -> " << req << endl;

    return 0;
}

void display(const Stonewt & st, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Wow! " << endl;
        cout << st << endl;
    }
}
