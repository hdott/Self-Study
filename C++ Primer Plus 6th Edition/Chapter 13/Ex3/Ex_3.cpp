/*
    Revise the baseDMA - lacksDMA - hasDMA class hierarchy so that all three classes are
        derived from an ABC.Test the result with a program similar to the one in Listing
        13.10.That is, it should feature an array of pointers to the ABC and allow the user
        to make runtime decisions as to what types of objects are created.Add virtual
        View() methods to the class definitions to handle displaying the data.
*/

// usedma.cpp -- inheritance, friends, and DMA
// compile with dma.cpp
#include <iostream>
#include "dma.h"
int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    // baseDMA shirt("Portabelly", 8);
    // lacksDMA balloon("red", "Blimpo", 4);
    // hasDMA map("Mercator", "Buffalo Keys", 5);
    // cout << "Displaying baseDMA object:\n";
    // // cout << shirt << endl;
    // shirt.View();
    // cout << "Displaying lacksDMA object:\n";
    // // cout << balloon << endl;
    // balloon.View();
    // cout << "Displaying hasDMA object:\n";
    // // cout << map << endl;
    // map.View();
    // lacksDMA balloon2(balloon);
    // cout << "Result of lacksDMA copy:\n";
    // // cout << balloon2 << endl;
    // balloon2.View();
    // hasDMA map2;
    // map2 = map;
    // cout << "Result of hasDMA assignment:\n";
    // // cout << map2 << endl;
    // map2.View();

    
    // DMAabc *pabc = &shirt;
    // pabc->View();
    // pabc = &balloon;
    // pabc->View();
    // pabc = &map;
    // pabc->View();

    DMAabc **arr = new DMAabc*[10];
    int i = 0;
    do{
        cout << "1. baseDMA" << endl;
        cout << "2. lacksDMA" << endl;
        cout << "3. hasDMA\n" << endl;
        cout << "Pick Option: ";
        int opt;
        (cin >> opt).get();
        if(opt < 1 || opt > 3)  break;

        char str[100];
        int rating;
        char color[100];
        char style[100];
        switch(opt){
            case 1:
                cout << "Enter label: ";
                cin.getline(str, 100);
                cout << "Enter rating: ";
                (cin >> rating).get();
                arr[i] = new baseDMA[1];
                *arr[i++] = baseDMA(str, rating);
                break;
            case 2:
                cout << "Enter label: ";
                cin.getline(str, 100);
                cout << "Enter rating: ";
                (cin >> rating).get();
                cout << "Enter color: ";
                cin.getline(color, 100);
                arr[i] = new lacksDMA[1];
                *arr[i++] = lacksDMA(color, str, rating);
                break;
            case 3:
                cout << "Enter label: ";
                cin.getline(str, 100);
                cout << "Enter rating: ";
                (cin >> rating).get();
                cout << "Enter style: ";
                cin.getline(style, 100);
                arr[i] = new hasDMA[1];
                *arr[i++] = hasDMA(style, str, rating);
                break;
        }

        if(i >= 10) break;
    } while(true);

    for(int j = 0; j < i; ++j){
        arr[j]->View();
    }

    for(int j = 0; j < i; ++j){
        delete[] arr[j];
    }
    delete[] arr;
    // std::cin.get();
    return 0; 
}