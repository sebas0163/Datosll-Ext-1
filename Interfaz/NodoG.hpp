#ifndef NODOG_HPP
#define NODOG_HPP
#include <string>
#include "Lista.hpp"
//#include "Arista.hpp"

using namespace std;

class NodoG
{
    public:
        int inDegree;
        int outDegree;
        int promedio;
        string dato;
        //Lista<Arista<NodoG>*>* aristas;
        NodoG(string);
        void aumentarIn();
        void aumentarOut();
        void disminuirIn();
        void disminuirOut();
        void print();

    protected:

    private:
};

#endif // NODOG_H
