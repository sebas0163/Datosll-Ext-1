#include "NodoG.hpp"
#include <iostream>
#include <string>
#include "Lista.hpp"

using namespace std;
NodoG::NodoG(string _dato){
    dato = _dato;
    inDegree =0;
    outDegree = 0;
    promedio = 0;
    aristas = new Lista<Arista<NodoG>>;
}
void NodoG::aumentarIn(){
    inDegree++;
}
void NodoG::aumentarOut(){
    outDegree++;
}
void NodoG::disminuirIn(){
    inDegree--;
}
void NodoG::disminuirOut(){
    outDegree--;
}
void NodoG::print(){
    cout<<dato<<endl;
}
