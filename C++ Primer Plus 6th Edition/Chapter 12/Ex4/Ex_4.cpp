/*
    Consider the following variation of the Stack class defined in Listing 10.10:
    // stack.h -- class declaration for the stack ADT
    typedef unsigned long Item;
    class Stack
    {
        private:
            enum {MAX = 10};
            // constant specific to class
            Item * pitems;
            // holds stack items
            int size;
            // number of elements in stack
            int top;
            // index for top stack item
        public:
            Stack(int n = MAX);
            // creates stack with n elements
            Stack(const Stack & st);
            ~Stack();
            bool isempty() const;
            bool isfull() const;
            // push() returns false if stack already is full, true otherwise
            bool push(const Item & item); // add item to stack
            // pop() returns false if stack already is empty, true otherwise
            bool pop(Item & item); // pop top into item
            Stack & operator=(const Stack & st);
    };
        As the private members suggest, this class uses a dynamically allocated array to hold
        the stack items. Rewrite the methods to fit this new representation and write a
        program that demonstrates all the methods, including the copy constructor and
        assignment operator.
*/

#include <iostream>
#include "stack.h"


int main(void){
    Stack st(11),
            sta;
    
    Item i = 1;
    while(!st.isfull()){
        st.push(i += i);
    }
    
    sta = st;
    Stack stk(sta);
    Item _tmp;
    while(!sta.isempty()){
        sta.pop(_tmp);
        std::cout << _tmp << std::endl;
    }

    while(!stk.isempty()){
        stk.pop(_tmp);
        std::cout << _tmp << std::endl;
    }


    return 0;
}