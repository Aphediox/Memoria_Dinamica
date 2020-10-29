#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>

template<class T>

class ArregloDinamico{
    T *arreglo;
    size_t tam;
    size_t ultimi;
    const static size_t MAX = 5;

    public:
    ArregloDinamico();
    ~ArregloDinamico();

    void agregarInicio(const T& v);
    void insertar(const T& v, size_t p);
    void agregarFinal(const T& v);

    void eliminarFinal();
    void eliminarInicio();
    void eliminar(size_t p);

    T* buscar(const T& v);
    ArregloDinamico<T*> buscar_todos(const T& v);
    void mostrar();

    size_t size();
    T operator[](size_t p){
        return arreglo[p];
    }

    friend ArregloDinamico<T>& operator<<(ArregloDinamico<T> &a, const T& v){
        a.agregarFinal(v);
        return a;
    } 

    private:
    void expandir();
    };

    template<class T>
    ArregloDinamico<T>::ArregloDinamico(){
        arreglo = new T[MAX];
        ultimi = 0;
        tam = MAX;
    }

    template<class T>
    ArregloDinamico<T>::~ArregloDinamico(){
        delete[] arreglo;
    }

    template<class T>
    void ArregloDinamico<T>::agregarInicio(const T& v){
        if (ultimi == tam)
        {
            expandir();
        }
        for (size_t i = ultimi; i > 0; i--)
        {
            arreglo[i] = arreglo[i-1];
        }
        arreglo[0] = v;
        ultimi ++;
    }

    template<class T>
    void ArregloDinamico<T>::insertar(const T& v, size_t p){
        if(p >= ultimi){
            std::cout << "Posicion no valida" << std::endl;
            return;
        }
        if (ultimi == tam)
        {
            expandir();
        }
        for (size_t i = ultimi; i > p; i--)
        {
            arreglo[i] = arreglo[i-1];
        }
        arreglo[p] = v;
        ultimi++;

    }

    template<class T>
    void ArregloDinamico<T>::expandir(){
        T *nuevo = new T[tam+MAX];
        
        for (size_t i = 0; i < ultimi; i++)
        {
            nuevo[i] = arreglo[i];
        }
        delete[] arreglo;
        arreglo = nuevo;
        tam = tam + MAX;
    }

    template<class T>
    void ArregloDinamico<T>::agregarFinal(const T& v){
        if (ultimi == tam)
        {
            expandir();
        }
        arreglo[ultimi] = v;
        ultimi ++;
    }

    template<class T>
    void ArregloDinamico<T>::eliminarFinal(){
        if(ultimi == 0){
            std::cout << "Arreglo vacio" << std::endl;
            return;
        }
        ultimi--;
    }

    template<class T>
    void ArregloDinamico<T>::eliminarInicio(){
        if(ultimi == 0){
            std::cout << "Arreglo vacio" << std::endl;
            return;
        }
        for (size_t i = 0; i < ultimi-1; i++)
        {
            arreglo[i] = arreglo[i+1];
        }
        ultimi--;
    }
    template<class T>
    void ArregloDinamico<T>::eliminar(size_t p){
        if(ultimi == 0){
            std::cout << "Arreglo vacio" << std::endl;
            return;
        }
        for (size_t i = p; i < ultimi-1; i++)
        {
            arreglo[i] = arreglo[i+1];
        }
        ultimi--;
    }

    template<class T>
    size_t ArregloDinamico<T>::size(){
        return ultimi;
    }

    template<class T>
    T* ArregloDinamico<T>::buscar(const T& v){
        for(size_t i = 0; i < ultimi; i++){
            if(v == arreglo[i]){
                return &arreglo[i];
            }
        }
        
        return nullptr;
    }

    template<class T>
    ArregloDinamico<T*> ArregloDinamico<T>::buscar_todos(const T& v){
        ArregloDinamico<T*> ptrs;
        for(size_t i = 0; i < ultimi; i++){
            if(v == arreglo[i]){
                ptrs.agregarFinal(&arreglo[i]);
            }
        }
        return ptrs;
    }

    template<class T>
    void ArregloDinamico<T>::mostrar(){
        for (size_t i = 0; i < ultimi; i++)
        {
            std::cout << arreglo[i] << " ";
        }
    }
    


#endif