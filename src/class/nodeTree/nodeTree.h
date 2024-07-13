#ifndef NODE_TREE_H
#define NODE_TREE_H

template<class T>
class NodeTree{
    private:
        T data;
        NodeTree<T> *left=NULL;
        NodeTree<T> *right=NULL;
    public:
        NodeTree(T,NodeTree<T>*,NodeTree<T>*);
        ~NodeTree();
        NodeTree<T>* getChildren(int);
        void setData(T);
        T getData();
        void setChildren(NodeTree<T>*,NodeTree<T>*);
        void print();
};

#endif