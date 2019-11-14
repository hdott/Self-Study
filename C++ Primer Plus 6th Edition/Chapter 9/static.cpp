/*
    Redo Listing 9.9, replacing the character array with a string object.The program
        should no longer have to check whether the input string fits, and it can compare
        the input string to "" to check for an empty line.
*/

// static.cpp -- using a static local variable
#include <iostream>
// constants
const int ArSize = 10;

// function prototype
void strcount(const char * str);

int main()
{
    using namespace std;
    string input;
    char next;

    cout << "Enter a line:\n";
    getline(cin, input);
    // cin.get(input, ArSize);
    while (cin)
    {
        // cin.get(next);
        // while (next != '\n')    // string didn't fit!
        //     cin.get(next);      // dispose of remainder
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
        // cin.get(input, ArSize);
    }
    cout << "Bye\n";
// code to keep window open for MSVC++
/*
cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}

void strcount(const std::string str)
{
    using namespace std;
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    cout << "\"" << str <<"\" contains ";
    // while (*str++)               // go to end of string
    //     count++;
    total += str.size();
    cout << str.size() << " characters\n";
    cout << total << " characters total\n";
}