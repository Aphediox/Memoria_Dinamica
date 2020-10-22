#include "arreglo.h"

ArregloDinamico::ArregloDinamico(){
    arreglo = new std::string[MAX];
    ultimi = 0;
    tam = MAX;
}

ArregloDinamico::~ArregloDinamico(){
    delete[] arreglo;
}

void ArregloDinamico::agregarInicio(std::string a){
    if (ultimi == tam)
    {
        expandir();
    }
    for (size_t i = ultimi; i > 0; i--)
    {
        arreglo[i] = arreglo[i-1];
    }
    arreglo[0] = a;
    ultimi ++;
}

void ArregloDinamico::expandir(){
    std::string *nuevo = new std::string[tam+MAX];
    
    for (size_t i = 0; i < ultimi; i++)
    {
        nuevo[i] = arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}
void ArregloDinamico::agregarFinal(std::string a){
    if (ultimi == tam)
    {
        expandir();
    }
    arreglo[ultimi] = a;
    ultimi ++;
}

size_t ArregloDinamico::size(){
    return ultimi;
}