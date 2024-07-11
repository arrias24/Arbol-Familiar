#include<iostream>
#include "./node.h"
using namespace std;

template <class T>
Node<T>::Node(T data, Node<T>* right, Node<T>* left){
    this->data=data;
    if(right!=NULL){
        this->right=right;
    }
     if(left!=NULL){
        this->left=left;
    }
}
template <class T>
Node<T>* Node<T>::getChildren(int child){
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
void Node<T>::setChildren(Node<T>* right, Node<T>* left){
    if(right != NULL){
        this->right=right;
    }else if(left!=NULL){
    this->left=left;
    }
}

template <class T>
void Node<T>::setData(T data){
    this->data=data;
}


template <class T>
T Node<T>::getData(){
   return this->data;
}



template<class T>
void Node<T>::print(){
    cout<<"Cedula: "<<this->data.id<<"."<<endl;
    cout<<"Nombre: "<<this->data.nombre<<"."<<endl;
    cout<<"Apellido: "<<this->data.apellido<<"."<<endl;
    cout<<"Genero: "<<this->data.genero<<"."<<endl;
    cout<<"Edad: "<<this->data.edad<<"."<<endl;
    cout<<"Fecha de nacimiento: "<<this->data.fecha_nacimiento<<"."<<endl;
    cout<<"Fecha de muerte: "<<this->data.fecha_muerte<<"."<<endl;
    cout<<"Hijo de: "<<this->data.hijo_de<<"."<<endl<<endl;
}
template <class T>
Node<T>::~Node(){
    this->right=NULL;
    this->left=NULL;
}



