#ifndef TREE_H
#define TREE_H

#include "../node/nodeTree.h"
template<class T>
class Tree{
    private:
        NodeTree<T>* root=NULL;
        int higth = 0;
        NodeTree<T>* insert(NodeTree<T>*, T);
    public:
        bool isEmpty();
        void insert(T);
        void insertData(T);
        void print(int);
        void postOrden(NodeTree<T>*);
        void inOrden(NodeTree<T>*);
        void preOrden(NodeTree<T>*);

        void printMalesHelper(NodeTree<T>* node);
        void printMales();
        void printFemale();
        void printFemaleHelper(NodeTree<T>* node);
};

#endif