/*
    Redo Listing 7.7, modifying the three array-handling functions to each use two
        pointer parameters to represent a range.The fill_array() function, instead of
        returning the actual number of items read, should return a pointer to the location
        after the last location filled; the other functions can use this pointer as the second
        argument to identify the end of the data.
*/

#include <iostream>
const int Max = 5;

// function prototypes
double* fill_array(double ar[], int limit);
void show_array(const double ar[], const double *pEnd);  // don't change data
void revalue(double r, double ar[], double *pEnd);

int main()
{
    using namespace std;
    double properties[Max];

    double *pEnd = fill_array(properties, Max);
    show_array(properties, pEnd);
    if (pEnd-properties > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, pEnd);
        show_array(properties, pEnd);
    }
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}

double* fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)     // signal to terminate
            break;
        ar[i] = temp;
    }
    return ar+i;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double ar[], const double *pEnd)
{
    using namespace std;
    for (int i = 0; ar+i < pEnd; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double ar[], double *pEnd)
{
    for (int i = 0; ar+i < pEnd; i++)
        ar[i] *= r;
}