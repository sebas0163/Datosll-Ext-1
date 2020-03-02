#ifndef ARISTA_HPP
#define ARISTA_HPP
#include "NodoG.hpp"
#include <iostream>

using namespace std;
template<typename T>class Arista
{
    public:
        T* startNode;
        T* endNode;
        int peso;
        Arista(NodoG* ini,NodoG* fin, int _peso){
            startNode= ini;
            endNode = fin;
            peso = _peso;
        }
        void addPeso(int i){
            peso = peso + i;
        }
    protected:

    private:
};

#endif // ARISTA_H
