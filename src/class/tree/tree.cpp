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

template <class T>
void Tree<T>::insertData(T data) 
{
    NodeTree<T>* node = new NodeTree<T>(data, NULL, NULL);

    if (root == NULL) {
        root = node;
    } else {
        NodeTree<T>* current = root;

        while (current != NULL) {

            if (data.hijo_de[0] == current->getData().id) {
                // El padre es el hijo izquierdo
                if (current->getChildren(0) == NULL) {
                    current->setChildren(node, NULL);
                } else {
                    current = current->getChildren(0);
                }
            } else if (data.hijo_de[1] == current->getData().id) {
                // La madre es el hijo derecho
                if (current->getChildren(1) == NULL) {
                    current->setChildren(NULL, node);
                } else {
                    current = current->getChildren(1);
                }
            } else {
                // Buscar el padre o madre en el árbol
                if (current->getChildren(0) != NULL) {
                    current = current->getChildren(0);
                } else if (current->getChildren(1) != NULL) {
                    current = current->getChildren(1);
                } else {
                    // No se encontró el padre o madre, agregar como hijo izquierdo
                    current->setChildren(node, NULL);
                    break;
                }
            }
        }
    }
}


