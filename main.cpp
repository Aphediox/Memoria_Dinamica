#include <iostream>
#include "arreglo.h"
void modificar(int *);
int main(int argc, char const *argv[])
{
  ArregloDinamico<std::string> arreglo;
  arreglo.agregarFinal("TEXTO 1");
  arreglo.agregarFinal("TEXTO 2");
  arreglo.agregarFinal("TEXTO 3");
  arreglo.agregarFinal("TEXTO 4");
  arreglo.agregarInicio("TEXTO 5");
  arreglo.agregarInicio("TEXTO 6");
  arreglo.agregarInicio("TEXTO 7");
  arreglo.agregarInicio("TEXTO 8");
  
  arreglo.mostrar();

  arreglo.insertar("Texto reemplazado", 2);
  std::cout << std::endl;
  arreglo.mostrar();
 
 arreglo.eliminarInicio(); 
 arreglo.eliminarFinal(); 
 arreglo.eliminar(1);
 std::cout << std::endl;
  arreglo.mostrar();

}
