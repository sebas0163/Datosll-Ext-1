#include "grafo.hpp"
#include "NodoG.hpp"
#include "Lista.hpp"

#include "Arista.hpp"
#include <iostream>

using namespace std;
Grafo::Grafo()
{
    nodos = new Lista<NodoG*>();
    aristas = new Lista<Arista*>();
    cantAristas =0;
    cantNodos =0;
}
void Grafo::addVertice(string _dato){
    if(verificar(_dato)){
        cout<<"Vertice ya existente"<<endl;
    }else{
        NodoG* n_Nodo= new NodoG(_dato);
        addNodo(n_Nodo);
    }
}
NodoG* Grafo::buscarNodo(string _dato){
    NodoG* temp2= new NodoG("h");
    for(int i =0; i<nodos->largo; i++){
        Nodo<NodoG*> temp = nodos->buscar(i);
        temp2 = static_cast<NodoG*>(temp.dato);
        if(temp2->dato == _dato){
            return temp2;
            break;
        }
    }
    return temp2;
}
void Grafo::addNodo(NodoG* n_Nodo){
    nodos->add(n_Nodo);
    cantNodos ++;
}
bool Grafo::verificar(string _dato){  // ver si funcion funciona
    bool estado = false;
    if(nodos->largo !=0){
        for(int i =0; i<nodos->largo; i++){
            Nodo<NodoG*> temp = nodos->buscar(i);
            NodoG* temp2 = static_cast<NodoG*>(temp.dato);
            if(temp2->dato == _dato){
                estado = true;
                return estado;
                break;
            }
        }
    }
    return estado;
}
void Grafo::addArista(string ini,string fin,int _peso){
    if(verificarArista(ini,fin)){
        distribuirA(ini,fin,_peso);
    }else{
        Arista* n_Arista = new Arista(buscarNodo(ini),buscarNodo(fin),_peso);
        NodoG* temp = buscarNodo(ini);
        temp->aristas->add(n_Arista);
        aristas ->add(n_Arista);
        cantAristas ++;
    }
}
bool Grafo::verificarArista(string ini,string fin){
    bool estado = false;
    for(int i = 0; i<aristas->largo ; i++){
        Nodo<Arista*> temp = aristas ->buscar(i);
        Arista* temp2 =  static_cast<Arista*>(temp.dato);
        if(temp2->startNode->dato == ini && temp2->endNode->dato == fin){
            estado = true;
            return estado;
            break;
        }
    }
    return estado;
}
Arista* Grafo::buscarArista(string ini, string fin){
    for(int i = 0; i<aristas->largo; i++){
        Nodo<Arista*> temp = aristas ->buscar(i);
        Arista* temp2 =  static_cast<Arista*>(temp.dato);
        if(temp2->startNode->dato == ini && temp2->endNode->dato == fin){
            return temp2;
            break;
        }
    }
    return 0;
}
void Grafo::distribuirA(string ini, string fin,int _peso){
    Arista* temp = buscarArista(ini,fin);
    temp -> addPeso(_peso);
}

