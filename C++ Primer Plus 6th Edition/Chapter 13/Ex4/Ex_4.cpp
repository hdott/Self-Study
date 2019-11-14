/*
    The Benevolent Order of Programmers maintains a collection of bottled port.To
        describe it, the BOP Portmaster has devised a Port class, as declared here:
    #include <iostream>
    using namespace std;
    class Port
    {
        private:
        char * brand;
        char style[20]; // i.e., tawny, ruby, vintage
        int bottles;
        public:
        Port(const char * br = "none", const char * st = "none", int b = 0);
        Port(const Port & p);
        // copy constructor
        virtual ~Port() { delete [] brand; }
        Port & operator=(const Port & p);
        Port & operator+=(int b);
        // adds b to bottles
        Port & operator-=(int b);
        // subtracts b from bottles, if
        available
        int BottleCount() const { return bottles; }
        virtual void Show() const;
        friend ostream & operator<<(ostream & os, const Port & p);
    };
        The Show() method presents information in the following format:
    Brand: Gallo
    Kind: tawny
    Bottles: 20
        The operator<<() function presents information in the following format (with no
        newline character at the end):
    Gallo, tawny, 20
        The Portmaster completed the method definitions for the Port class and then
        derived the VintagePort class as follows before being relieved of his position for
        accidentally routing a bottle of ’45 Cockburn to someone preparing an experimen-
        tal barbecue sauce:
    class VintagePort : public Port // style necessarily = "vintage"
    {
        private:
        char * nickname;
        // i.e., "The Noble" or "Old Velvet", etc.
        int year;
        // vintage year
        public:
        VintagePort();
        VintagePort(const char * br, int b, const char * nn, int y);
        VintagePort(const VintagePort & vp);
        ~VintagePort() { delete [] nickname; }
        VintagePort & operator=(const VintagePort & vp);
        void Show() const;
        friend ostream & operator<<(ostream & os, const VintagePort & vp);
    };
        You get the job of completing the VintagePort work.
        a. Your first task is to re-create the Port method definitions because the former
        Portmaster immolated his upon being relieved.
        b. Your second task is to explain why certain methods are redefined and others
        are not.
        c. Your third task is to explain why operator=() and operator<<() are not
        virtual.
        d. Your fourth task is to provide definitions for the VintagePort methods.
*/

#include <iostream>
#include "port.h"
#include "vintageport.h"


int main(void){
    using namespace std;

    Port port1("Gallo", "tawny", 20);
    VintagePort vPort1("brVPort1", 10, "nnVPort1", 2000);

    // port1.Show();
    // cout << port1 << endl;
    // vPort1.Show();
    // cout << vPort1 << endl;

    Port port2 = port1;
    VintagePort vPort2 = vPort1;

    // port1.Show();
    // cout << port2 << endl;
    // vPort1.Show();
    // cout << vPort2 << endl;

    Port port3;
    VintagePort vPort3;
    port3 = port2;
    vPort3 = vPort2;

    // port1.Show();
    // cout << port3 << endl;
    // vPort1.Show();
    // cout << vPort3 << endl;

    Port *p1, *p2;
    p1 = &port1;
    p2 = &vPort1;
    // p1->Show();
    // p2->Show();
    cout << *p1 << endl;
    cout << *p2 << endl;

    return 0;
}