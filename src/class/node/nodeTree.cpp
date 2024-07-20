#include<iostream>
#include "./nodeTree.h"
using namespace std;

template <class T>
NodeTree<T>::NodeTree(T data, NodeTree<T>* right, NodeTree<T>* left){
    this->data=data;
    if(right!=NULL){
        this->right=right;
    }
     if(left!=NULL){
        this->left=left;
    }
}
template <class T>
NodeTree<T>* NodeTree<T>::getChildren(int child){
    switch (child)
    {
    case 0:
        return this->right;
    case 1:
        return this->left;
    }
    return NULL;
}

template <class T>
void NodeTree<T>::setChildren(NodeTree<T>* right, NodeTree<T>* left){
    if(right != NULL){
        this->right=right;
    }else if(left!=NULL){
    this->left=left;
    }
}

template <class T>
void NodeTree<T>::setData(T data){
    this->data=data;
}


template <class T>
T NodeTree<T>::getData(){
   return this->data;
}



template<class T>
void NodeTree<T>::print(){
    cout<<"Cedula: "<<this->data.id<<"."<<endl;
    cout<<"Nombre: "<<this->data.nombre<<"."<<endl;
    cout<<"Apellido: "<<this->data.apellido<<"."<<endl;
    cout<<"Genero: "<<this->data.genero<<"."<<endl;
    cout<<"Edad: "<<this->data.edad<<"."<<endl;
    cout<<"Fecha de nacimiento: "<<this->data.fecha_nacimiento<<"."<<endl;
    cout<<"Fecha de muerte: "<<this->data.fecha_muerte<<"."<<endl;
    cout<<"Padre: "<<this->data.hijo_de[0]<<"."<<endl;
    cout<<"Madre: "<<this->data.hijo_de[1]<<"."<<endl;
    cout<<"Cantidad de hermanos: "<<this->data.numero_de_hermanos<<"."<<endl<<endl;
}
template <class T>
NodeTree<T>::~NodeTree(){
    this->right=NULL;
    this->left=NULL;
}




