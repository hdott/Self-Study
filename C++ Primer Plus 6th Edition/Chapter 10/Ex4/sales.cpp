#include <iostream>
#include "sales.h"


namespace SALES{
    Sales::Sales(const double ar[], int n){
        this->sales[0] = this->max = this->min = ar[0];
        this->average = 0;

        for(int i=1; i<4 && i<n; ++i){
            this->sales[i] = ar[i];

            if(ar[i] > this->max){
                this->max = ar[i];
            } 
            if(ar[i] < this->min){
                this->min = ar[i];
            }
            
            this->average += ar[i];
        }

        this->average /= n;
    }

    void Sales::setSales(){
        using namespace std;

        double arr[QUARTERS];
        for(int i=0; i<QUARTERS; ++i){
            cout << "Enter your sale for QUARTER[" << i+1 << "]: ";
            (cin >> arr[i]).get();
        }

        *this = Sales(arr, 4);
    }

    void Sales::showSales() const{
        using namespace std;

        cout << "Sales per Quarter:" << endl;
        for(int i=0; i<QUARTERS; ++i){
            cout << "QUARTER " << i+1 << " " << this->sales[i] << endl;
        }
        cout << "Average: " << this->average << endl;
        cout << "Max: " << this->max << endl;
        cout << "Min: " << this->min << endl;
    }
}
