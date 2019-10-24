#pragma once
#include <iostream>

template <typename T>
struct item{
    T it;
    struct item *next;
};

template<class C>
class List{
    private:
        item<C> *node;
        void printNode(item<C> &it) const;
        
    public:
        List(item *node = NULL): node(node){};

        void add(item *node);
        bool isEmpty();
        bool isFull();
        void visit(void (*pf)(item<C> &it));
};