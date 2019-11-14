/*
    Define a QueueTp template.Test it by creating a queue of pointers-to-Worker (as
        defined in Listing 14.10) and using the queue in a program similar to that in
        Listing 14.12.
*/

#include <iostream>
#include <cstring>
#include "queuetp.h"
#include "workermi.h"
const int SIZE = 5;


int main(void){
    using namespace std;
    
    QueueTp<Worker*> q;

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter  s: singer  "
            << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'w':   q.add(new Waiter());
                        // lolas[ct] = new Waiter;
                        cout << "wt\n";
                        break;
            case 's':   q.add(new Singer);
                        // lolas[ct] = new Singer;
                        break;
            case 't':   q.add(new SingingWaiter);
                        // lolas[ct] = new SingingWaiter;
                        break;
        }
        cin.get();
        q[ct]->Set();
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        q[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete q[i];
    cout << "Bye.\n";

    return 0;
}