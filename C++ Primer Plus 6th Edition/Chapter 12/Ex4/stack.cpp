#include <iostream>
#include "stack.h"


Stack::Stack(int n): size(n), top(0){
    pitems = new Item[size];
}

Stack::Stack(const Stack & st){
    this->size = st.size;
    this->top = st.top;

    pitems = new Item[size];
    for(int i = 0; i < top; ++i){
        pitems[i] = st.pitems[i];
    }
}
        
Stack::~Stack(){
    delete[] pitems;
}
       
bool Stack::isempty() const{
    if(top == 0){
        return true;
    }

    return false;
}

bool Stack::isfull() const{
    if(top == size){
        return true;
    }

    return false;
}

// push() returns false if stack already is full, true otherwise
bool Stack::push(const Item & item){
    if(!isfull()){
        pitems[top++] = item;
        
        return true;
    }

    return false;
} // add item to stack
        
// pop() returns false if stack already is empty, true otherwise
bool Stack::pop(Item & item){
    if(!isempty()){
        item = pitems[--top];

        return true;
    }

    return false;
} // pop top into item
        
Stack & Stack::operator=(const Stack & st){
    if(this == &st){
        return *this;
    }
    delete[] pitems;

    this->size = st.size;
    this->top = st.top;

    pitems = new Item[size];
    for(int i = 0; i < top; ++i){
        pitems[i] = st.pitems[i];
    }

    return *this;
}