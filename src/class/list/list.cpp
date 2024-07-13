#include<iostream>
#include "./list.h"
#include "list.h"

template<class T>
bool List<T>::isEmpty()
{
   return this->head==NULL;
}

template<class T>
void List<T>::insertFirst(Node<T> *node)
{
   Node <T> *temp = head;
   head=node;
   head->setNextNode(temp);
}

template<class T>
void List<T>::insert(T data)
{
   Node <T> *actual = head;
   Node<T> *last = NULL;
   Node<T> *newNode = new Node<T>(data,NULL);
   
   // Si la lista está vacía, insertar al principio:
   if(isEmpty())
   {
      insertFirst(newNode);
   }
   else {
      // Buscar el nodo anterior al primer nodo con un dato mayor qur 'dat'
      while(actual!=NULL && actual->getData() < data)
      {
         last = actual;
         actual = actual->getNextNode();
      }
      // Si no hay anterior, insertar al principio,
      // nuestro valor es el menor de la lista:
      if(last==NULL)
      {
         insertFirst(newNode);
      }
      else
      { // Insertar:
        newNode->setNextNode(last->getNextNode());
        last->setNextNode(newNode);
      }
   }
}

template<class T>
void List<T>::print()
{
   Node <T> *actual = head;
  
   while(actual!=NULL)
   {
      actual->print();
      actual = actual->getNextNode();
   }
}

template <class T>
void List<T>::insertBrothers(Persona persona[], Persona hermanos[], int num_person, int num_brother)
{
   for (int i = 0; i < num_person; i++)
   {
      if (persona[i].numero_de_hermanos>0)
      {
         for (int j = 0; j < num_brother; j++)
         {
            if (persona[i].hijo_de[0]==hermanos[j].hijo_de[0] || persona[i].hijo_de[1]==hermanos[j].hijo_de[1])
            {
               persona[i].hermanos.insert(hermanos[j]);
            }
         }
      }
   }
}