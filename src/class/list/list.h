#ifndef LIST_H
#define LIST_H

#include "../node/node.h"
#include "../../model/structs.h"

template<class T>
class List{
    private:
        Node<T> *head=NULL;
        int length = 0;
    public:
        void insert(T data);
        void insertFirst( Node<T> *node);
        bool isEmpty();
        void print();

        void insertBrothers(Persona persona[], Persona hermanos[], int num_person, int num_brother);
};

#endif