#ifndef GRAFO_HPP
#define GRAFO_HPP
#include "Arista.hpp"
#include "NodoG.hpp"


class Grafo
{
public:
    Lista<NodoG*>* nodos;
    Lista<Arista*>* aristas;
    int cantNodos;
    int cantAristas;
    void addVertice(string);
    bool verificar(string);
    void addNodo(NodoG*);
    bool verificarArista(string, string);
    void eliminarNodo(string);
    void eliminarArista(string,string);
    void addArista(string,string,int);
    Arista* buscarArista(string,string);
    NodoG* buscarNodo(string);
    Grafo();
private:
    void distribuirA(string,string,int);
};

#endif // GRAFO_HPP
