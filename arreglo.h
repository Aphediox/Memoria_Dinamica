#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>

class ArregloDinamico{
    private:
    std::string *arreglo;
    size_t tam;
    size_t ultimi;
    const static size_t MAX = 5;
    void expandir();

    public:
    ArregloDinamico();
    ~ArregloDinamico();
    void agregarFinal(std::string );
    void agregarInicio(std::string );
    size_t size();
    std::string operator[](size_t o){
        return arreglo[o];
    }
};

#endif