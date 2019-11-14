// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vect.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0,
                highest = 0,
                lowest = 0,
                average = 0;
    double target;
    double dstep;
    int n;
    cout << "Enter the number of trials: ";
    cin >> n;
    cout << "Enter target distance: ";
    for (int i=0; i < n && cin >> target; ++i)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        
        // req
        if(i == 0){
            highest = lowest = steps;
        }
        if(highest < steps){
            highest = steps;
        }
        if(lowest > steps){
            lowest = steps;
        }
        average += steps;
        
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance: ";
    }
    cout << "\nHighest -> " << highest << endl;
    cout << "Lowest -> " << lowest << endl;
    cout << "Average -> " << average/n << endl;
    cout << "Bye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
