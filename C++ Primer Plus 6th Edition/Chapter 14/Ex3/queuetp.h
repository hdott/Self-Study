#pragma once
#include <fstream>


template <class T>
class QueueTp{
    private:
        struct Node{
            T elem;
            struct Node *next;
        };
        
        Node *head = nullptr;
        Node *tail = nullptr;

    public:
        QueueTp(T elem){
            head = tail = new Node{elem, nullptr};
        };
        QueueTp(){};
        ~QueueTp(){
            Node *tracer = head;
            while(tracer){
                Node *_toRemove = tracer;
                tracer = tracer->next;
                delete[] _toRemove;
            }
        };

        void add(T elem){
            if(isEmpty()){
                head = tail = new Node{elem, nullptr};
            } else{
                tail = tail->next = new Node{elem, nullptr};
            }
        };
        bool isEmpty(void) const{
            if(!head){
                return true;
            }

            return false;
        };
        void printQueueTp(void) const{
            Node *tracer = head;
            while(tracer){
                std::cout << tracer->elem << std::endl;
                tracer = tracer->next;
            }
        };

        T operator[](int n){
            Node* tracer = head;
            for(int i = 0; i <= n && tracer; ++i){
                if(i == n){
                    return tracer->elem;
                }
                tracer =  tracer->next;
            }
            return nullptr;
        };
};