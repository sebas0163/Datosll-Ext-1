#include "Arista.hpp"
#include "NodoG.hpp"
#include <iostream>

using namespace std;

Arista::Arista(NodoG* ini,NodoG* fin, int _peso){
    startNode= ini;
    endNode = fin;
    peso = _peso;
}
void Arista::addPeso(int i){
    peso = peso + i;
}
