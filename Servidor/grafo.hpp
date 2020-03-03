/**
  @file grafo.hpp
  @title grafo
  @author GGLsoftware
  @version 1.2
  @brief creacion del grafo y del algoritmo de dijkstra, modificado y adaptado por Sebastian Moya
  @date 27/02/20
  */
#ifndef GRAFO_HPP
#define GRAFO_HPP
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define Node struct nodo
#define Arista struct arista
#define Liste struct pila

using namespace std;
/**
 * @brief The nodo struct crea el nodo del grafo
 */
Node{
    char dato;
    Node* siguiente;
    Arista* adyacencia;
    int visitado,terminado;
    int monto;
    char anterior;
};
/**
 * @brief The arista struct crea la arista del grafo, que une dos nodos
 */
Arista{
    Node*vrt;
    Arista*siguiente;
    int peso;
};
/**
 * @brief The pila struct permite usar la lista para una pila y una cola
 */
Liste{
    Node* dato;
    Liste*siguiente;
};
/**
 * @brief The Grafo class clase encargada de guardar los datos del grafo y manejar el algoritmo de Dijsktra
 */
class Grafo
{
public:
    Node*inicio=NULL;
    Liste*ini=NULL;
    Liste*final=NULL;
    /**
     * @brief insertarNodo metodo que inserta un nodo al grafo
     * @param _dato dato que se desea agregar al grafo
     */
    void insertarNodo(char _dato){
        Node* aux;
        Node* nuevo= new Node();
        nuevo ->dato = _dato;
        nuevo->siguiente=NULL;
        nuevo->adyacencia=NULL;
        nuevo->visitado=nuevo->terminado=0;
        nuevo->monto=-1;
        nuevo->anterior=0;
        if(inicio==NULL){
            inicio=nuevo;
        }else{
            aux=inicio;
            while(aux->siguiente!=NULL){
                aux=aux->siguiente;
            }
            aux->siguiente=nuevo;
          }

     }
    /**
     * @brief insertarArista metodo que crea una arista
     * @param ini vertice de donde sale
     * @param final vertice al cual llega
     * @param peso peso de la arista
     */
    void insertarArista(char ini,char final, int peso){
        Arista* nuevo= new arista;
        nuevo->siguiente=NULL;
        Node* aux;
        Node* aux2;
        if(inicio==NULL){
             printf("Error: El grafo está vacio\n");
             return;
        }
        nuevo->peso = peso;
        aux=inicio;
        aux2=inicio;
        while(aux2!=NULL){
            if(aux2->dato==final){
                break;
            }
            aux2=aux2->siguiente;
        }
        if(aux2==NULL){
            printf("Error:Vertice no encontrado\n");
            return;
        }
        while(aux!=NULL){
            if(aux->dato==ini){
                agregarArista(aux,aux2,nuevo);
                return;
            }
            aux = aux->siguiente;
        }
        if(aux==NULL)
            printf("Error:Vertice no encontrado\n");
    }
    /**
     * @brief agregarArista metodo que incluye la arista al grafo
     * @param aux nodo de inicio
     * @param aux2 nodo del fin
     * @param nuevo nueva arista
     */
    void agregarArista(Node* aux,Node* aux2,Arista* nuevo){
        Arista* a;
        if(aux->adyacencia==NULL){
            aux->adyacencia=nuevo;
            nuevo->vrt=aux2;
        }else{
            a=aux->adyacencia;
            while(a->siguiente!=NULL)
                a=a->siguiente;
            nuevo->vrt=aux2;
            a->siguiente=nuevo;
        }
    }
    /**
     * @brief insertarPila agrega un nodo a la pila
     * @param aux nuevo nodo
     */
    void insertarPila(Node* aux){
        Liste*nuevo= new Liste();
        nuevo->dato=aux;
        nuevo->siguiente=NULL;
        if(ini==NULL){
            ini=nuevo;
            final=nuevo;
        }else{
           nuevo->siguiente=ini;
           ini=nuevo;
        }
    }
    /**
     * @brief insertarCola agrega un nodo a la cola
     * @param aux nuevo nodo
     */
    void insertarCola(Node*aux){
        Liste*nuevo=new Liste();
        nuevo->dato=aux;
        nuevo->siguiente=NULL;
        if(ini==NULL){
            ini=nuevo;
            final=nuevo;
        }else{
            final->siguiente=nuevo;
            final=nuevo;
        }
    }
    /**
     * @brief desencolar saca al nodo correspondiente de la cola
     * @return nodo
     */
    Node*desencolar(){
        Liste*aux;
        if(ini==NULL){
            return NULL;
        }else{
            aux=ini;
            ini=ini->siguiente;
            aux->siguiente=NULL;
            if(ini==NULL)
            final=NULL;
        }
        Node*resultado=aux->dato;
        free(aux);
        return resultado;
    }
    /**
     * @brief reiniciar reincia la cola
     */
    void reiniciar(){
        if(inicio!=NULL){
            Node*aux=inicio;
            while(aux!=NULL){
                aux->visitado=aux->terminado=0;
                aux=aux->siguiente;
            }
        }
    }
    /**
     * @brief dijkstra algoritmo encargado de determinar la ruta mas corta dados dos nodos
     * @param a nodo de donde parte
     * @param b nodo a donde llega
     * @return ruta
     */
    string dijkstra(char a, char b){
        Node*aux=inicio;
        fflush(stdin);
        while(aux!=NULL){
            if(aux->dato==a){
                aux->terminado=1;
                aux->monto=0;
                break;
            }
            aux=aux->siguiente;
        }
        if(aux==NULL){
            printf("Vertice no encontrado\n");
            return "";
        }
        while(aux!=NULL){
            Arista*a=aux->adyacencia;
            while(a!=NULL){
                if(a->vrt->monto==-1 || (aux->monto+a->peso)<a->vrt->monto){
                    a->vrt->monto=aux->monto+a->peso;
                    a->vrt->anterior=aux->dato;
                }
                a=a->siguiente;
            }
            aux=inicio;
            Node*min=inicio;
            while(min->anterior==0 || min->terminado ==1)
            min=min->siguiente;
            while(aux!=NULL){
                if(aux->monto<min->monto && aux->terminado==0 && aux->anterior!=0)
                min=aux;
                aux=aux->siguiente;
            }
            aux=min;
            aux->terminado=1;
            if(aux->dato==b)
            break;
        }
        while(aux->anterior!=0){
            insertarPila(aux);
            char temp=aux->anterior;
            aux=inicio;
            while(aux->dato!=temp){
               aux=aux->siguiente;
            }
        }
        insertarPila(aux);
        string camino;
        while(ini!=NULL){
            camino =camino+ "   " + desencolar()->dato;
        }

        reiniciar();
        return camino;
    }


private:

};

#endif // GRAFO_HPP
