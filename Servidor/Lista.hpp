/**
  @file Lista.hpp
  @author Sebastian Moaya
  @title Lista
  @date 25/02/20
  @version 1.0
  */
#ifndef LISTA_HPP
#define LISTA_HPP
#include "Nodo.hpp"
#include<iostream>
/**
 * @brief clase encargada de guradar los datos y manejar las funciones de una lista
 */
using namespace std;
template<typename T>class Lista
{
    public:
        Nodo<T> *head;
        int largo;
        /**
         * @brief Lista constructor
         */
        Lista(){
            head = nullptr;
            largo = 0;
        }
        /**
         * @brief add annade un dato a la lista
         * @param dato nodo que se desea annadir
         */
        void add(T dato){
            if(head == nullptr){
                Nodo<T>* n_Nodo = new Nodo<T>(dato);
                head = n_Nodo;
            }else{
                Nodo<T> *temp = head;
                while(temp->next != nullptr){
                    temp = temp ->next;
                }
                temp->next = new Nodo<T>(dato);
            }
            largo ++;
        }
        /**
         * @brief print metodo que muestra en consola todos los elementos de la lista
         */
        void print(){
            if(head != nullptr){
                Nodo<T> *temp = head;
                while (temp != nullptr){
                    cout<<temp->dato<<endl;
                    temp = temp ->next;
                }
            }else{
                cout<< "lista vacia"<<endl;
            }

        }
        /**
         * @brief modificarNodo metodo que cambia el valor de un nodo
         * @param pos posicion del nodo al que se desea editar
         * @param dato nuevo dato
         */
        void modificarNodo(int pos, T dato){
            Nodo<T> *temp = head;
            for(int i = 0; i<pos; i++ ){
                temp = temp->next;
            }
            temp->dato = dato;

        }
        /**
         * @brief verificar compureba si un dato se encuentra en la lista
         * @param valor dato a verificar
         * @return valor booleano
         */
        bool verificar(T valor){
            Nodo<T> *temp = head;
            bool estado = false;
            while(temp != nullptr){
                if(temp->dato == valor){
                    estado = true;
                    break;
                }else{
                    temp = temp ->next;
                }
            }
            return estado;
        }
        /**
         * @brief getPos obtiene la posicion de un nodo en particular
         * @param dato valor del nodo
         * @return posicion
         */
        int getPos(T dato){
            if(verificar(dato)){
                int pos = 0;
                Nodo<T> *temp = head;
                while(temp->dato != dato){
                    pos++;
                    temp = temp->next;
                }
                return pos;
            }else{
                cout<<"No se encuentra el valor en la lista"<<endl;
            }
            return 0;
        }
        /**
         * @brief buscar busca un nodo en un posicion x
         * @param pos posicion cualquiera
         * @return nodo
         */
        Nodo<T> buscar(int pos){
            if(pos > largo -1){
                //return nullptr;
            }else{
                return buscar_Aux(pos);
            }
        }
        /**
         * @brief reset elimina todos los datos de la lista.
         */
        void reset(){
            Nodo<T> *temp = head;
            for(int i =0; i<largo; i++){
              head = temp->next;
              delete temp;
              temp = head;
            }
            largo =0;
        }
        /**
         * @brief eliminar elimina un nodo de la lista
         * @param pos posicion del nodo
         */
        void eliminar(int pos){
            if(pos > largo){
                cout<<"no exite la posicion"<< endl;
            }else if (pos ==0){
                head = head->next;
            }else{
                Nodo<T>* temp = head ->next;
                Nodo<T>* prev= head;
                int indice = 1;
                while(indice != pos){
                    prev = prev->next;
                    temp = temp->next;
                    indice ++;
                }
                prev->next = temp ->next;
                delete temp;
                largo --;
            }
        }

    protected:

    private:
        Nodo<T> buscar_Aux(int pos){
            int indice = 0;
            Nodo<T> *temp = head;
            while(pos != indice){
                temp = temp ->next;
                indice ++;
            }
            return *temp;
        }

};

#endif // LISTA_H
