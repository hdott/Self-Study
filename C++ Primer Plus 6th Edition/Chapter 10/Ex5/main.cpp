#include <iostream>
#include <cctype>
#include "stack.h"


int main(void){
    using namespace std;
    
    Stack st;
    Item item;
    char ch;

    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    while(cin >> ch && toupper(ch) != 'Q'){
        while (cin.get() != '\n'){
            continue;
        }
        if(!isalpha(ch)){
            cout << '\a';
            continue;
        }

        switch(ch){
            case 'A':
            case 'a':
                cout << "Enter name: ";
                cin.getline(item.fullname, 35);
                cout << "Enter payment: ";
                cin >> item.payment;

                if(st.isfull()){
                    cout << "stack is already full" << endl;
                } else{
                    st.push(item);
                }
                break;
            case 'P':
            case 'p':
                if(st.isempty()){
                    cout << "stack is already empty" << endl;
                } else{
                    st.pop(item);
                    cout << "Name: " << item.fullname << " - "
                        << "Payment: " << item.payment << endl;
                }
                break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Total payments: " << st.getTotal() << endl;


    return 0;
}