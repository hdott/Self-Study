#pragma once
#ifndef LIST_H
#define LIST_H
#include <iostream>


template <typename C>
struct item{
    C it;
    struct item *next;
};

template<class C>
class List{
    private:
        enum {MAX=10};
        item<C> *node;
        static int index;
        
    public:
        List(item<C> *node = NULL): node(node){};
        ~List();

        void add(item<C> *node);
        bool isEmpty();
        bool isFull();
        void visit(void (*pf)(const item<C> &it));
        static void printNode(const item<C> &it);
};
#endif