/**
  @file Nodo.hpp
  @author Sebastian Moya
  @date 25/02/20
  @title Nodo
  */
#ifndef NODO_HPP
#define NODO_HPP
/**
 *Clase encargada de almacenar los datos de del nodo.
 */
template<typename T>class Nodo
{
    public:
        T dato;
        Nodo<T> *next;
        /**
         * @brief Nodo metodo constructor
         * @param _dato dato que se desea guardar en el nodo
         */
        Nodo(T _dato){
            this -> dato = _dato;
            next = nullptr;
        }
        /**
         * @brief setNext metodo que permite setear el nodo seguiente
         * @param nodo nodo al que se apuntara
         */
        void setNext(Nodo<T> nodo){
            *next = nodo;
        }

    protected:

    private:

};

#endif // NODO_H
