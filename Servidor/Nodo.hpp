#ifndef NODO_HPP
#define NODO_HPP

template<typename T>class Nodo
{
    public:
        T dato;
        Nodo<T> *next;
        Nodo(T _dato){
            this -> dato = _dato;
            next = nullptr;
        }
        void setNext(Nodo<T> nodo){
            *next = nodo;
        }

    protected:

    private:

};

#endif // NODO_H
