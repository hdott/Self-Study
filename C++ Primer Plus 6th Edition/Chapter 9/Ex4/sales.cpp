#include <iostream>
#include "sales.h"


namespace SALES{
    void setSales(Sales & s, const double ar[], int n){
        s.sales[0] = s.max = s.min = ar[0];
        s.average = 0;

        for(int i=1; i<4 && i<n; ++i){
            s.sales[i] = ar[i];

            if(ar[i] > s.max){
                s.max = ar[i];
            } 
            if(ar[i] < s.min){
                s.min = ar[i];
            }
            
            s.average += ar[i];
        }

        s.average /= n;
    }

    void setSales(Sales & s){
        using namespace std;

        s.average = 0;
        for(int i=0; i<4; ++i){
            cout << "Enter your sale for QUARTER[" << i+1 << "]: ";
            (cin >> s.sales[i]).get();
        }

        setSales(s, s.sales, 4);
    }

        void showSales(const Sales & s){
            using namespace std;

            cout << "Sales per Quarter:" << endl;
            for(int i=0; i<4; ++i){
                cout << "QUARTER " << i+1 << " " << s.sales[i] << endl;
            }
            cout << "Average: " << s.average << endl;
            cout << "Max: " << s.max << endl;
            cout << "Min: " << s.min << endl;
        }
}