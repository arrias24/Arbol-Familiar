#include "./tree.h"
#include "../node/nodeTree.cpp"
template<class T>
 bool Tree<T>::isEmpty(){
    return root==NULL;
 }
template<class T>
void Tree<T>::insert( T data){
    root=insert(root,data);
};
template<class T>
NodeTree<T>* Tree<T>::insert(NodeTree<T> * node, T data){
    if(node==NULL)
    {
        return new NodeTree<T>(data,NULL,NULL);
    }
    else if(node->getData().edad > data.edad)
    {
        NodeTree<T>* izq=insert(node->getChildren(0),data);
        node->setChildren(izq,NULL);
    }
    else if(node->getData().edad < data.edad)
    {
         NodeTree<T>* der=insert(node->getChildren(1),data);
        node->setChildren(NULL,der);
    }
    return node;
};
template<class T>
void Tree<T>::print(int orden){
    switch (orden)
    {
    case 0:
        postOrden(root);
        break;
    case 1:
        inOrden(root);
        break;
    default:
        preOrden(root);
        break;
    }
};
template<class T>
void Tree<T>::postOrden(NodeTree<T> *node){
    if(node==NULL) return;
   
    postOrden(node->getChildren(0));
    postOrden(node->getChildren(1));
    node->print();
}
template<class T>
void Tree<T>::inOrden(NodeTree<T> *node){
    if(node==NULL) return;
    inOrden(node->getChildren(0));
    node->print();
    inOrden(node->getChildren(1));
    
}
template<class T>
void Tree<T>::preOrden(NodeTree<T> *node){
    if(node==NULL) return;
    node->print();
    preOrden(node->getChildren(0));
    preOrden(node->getChildren(1));
}
