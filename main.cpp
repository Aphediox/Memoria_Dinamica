#include <iostream>
#include "arreglo.cpp"
void modificar(int *);
int main(int argc, char const *argv[])
{
  ArregloDinamico arreglo;
  arreglo.agregarFinal("Arreglo 2");
  arreglo.agregarFinal("Arreglo 3");
  arreglo.agregarFinal("Arreglo 4");
  arreglo.agregarFinal("Arreglo 5");
  arreglo.agregarFinal("Arreglo 6");
  arreglo.agregarFinal("Arreglo 7");
  arreglo.agregarFinal("Arreglo 8");
  arreglo.agregarFinal("Arreglo 9");
    
  for (int i = 0; i < arreglo.size(); i++)
  {
      std::cout << arreglo[i] << std::endl;
  }
  std::cout << std::endl;
  arreglo.agregarInicio("Arreglo 1");
  arreglo.agregarInicio("Arreglo 0");

   for (int i = 0; i < arreglo.size(); i++)
  {
      std::cout << arreglo[i] << std::endl;
  }
  std::cout << std::endl;
}
