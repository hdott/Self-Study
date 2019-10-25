#include <iostream>
#include "list.h"


template class List<int>;

template<class C>
int List<C>::index = 0;

template<class C>
List<C>::~List(){
    item<C> *_toDelete,
            *_tracer = this->node;

    while(_tracer != NULL){
        _toDelete = _tracer;
        _tracer = _tracer->next;

        delete _toDelete;
    }
}

template<class C>
void List<C>::add(item<C> *node){
    if(isEmpty()){
        this->node = node;
    } else{
        item<C> *_tmp = this->node;

        while(_tmp->next != NULL){
            _tmp = _tmp->next;
        }

        _tmp->next = node;
    }

    ++this->index;
}

template<class C>
bool List<C>::isEmpty(){
    if(this->node == NULL){
        return true;
    } else{
        return false;
    }
} 

template<class C>
bool List<C>::isFull(){
    if(this->index == MAX){
        return true;
    } else{
        return false;
    }
}

template<class C>
void List<C>::visit(void (*pf)(const item<C> &it)){
    item<C> *_tmp = this->node;

    while(_tmp != NULL){
        pf(*_tmp);

        _tmp = _tmp->next;
    }
}

template<class C>
void List<C>::printNode(const item<C> &it){
    using namespace std;

    cout << it.it << endl;
}