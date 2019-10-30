#include "stack.h"


Stack::Stack(int n = MAX): pitems(nullptr), size(n), top(0){};

Stack::Stack(const Stack & st){
    
}
        ~Stack();
        bool isempty() const;
        bool isfull() const;
        // push() returns false if stack already is full, true otherwise
        bool push(const Item & item); // add item to stack
        // pop() returns false if stack already is empty, true otherwise
        bool pop(Item & item); // pop top into item
        Stack & operator=(const Stack & st);