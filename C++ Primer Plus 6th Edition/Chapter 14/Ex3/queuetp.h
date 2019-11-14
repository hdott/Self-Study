#pragma once
#include <fstream>


template <class T>
class QueueTp{
    private:
        template <typename T>
        struct Node{
            T elem;
            struct Node *next;
        };
        
        Node<T> *head = nullptr;
        Node<T> *tail = nullptr;

    public:
        QueueTp(T elem);
        QueueTp(){};
        ~QueueTp();

        void add(T elem);
        bool isEmpty(void) const;

        friend std::ostream & operator<<(std::ostream & os, const QueueTp<T> qt);
};
