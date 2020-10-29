#include <iostream>
#include "arreglo.h"
#include "computadora.h"
int main(int argc, char const *argv[])
{
ArregloDinamico <computadora> Computadoras;
computadora c1("Uwuntu", "Jorge", 64, "Ryzen");
computadora c2("Windowos", "Salvador", 32, "Intel");
computadora c3("Pop_OS!", "Aphediox", 8, "Intel");
computadora c4("Pop_OS!", "Aphediox", 8, "Intel");
computadora c5("Pop_OS!", "Aphediox", 8, "Intel");
Computadoras << c1 << c2 << c3 << c4 << c5;

computadora c7("Arch Linux", "Juan", 8, "Ryzen");

computadora *pc = Computadoras.buscar(c3);
std::cout << "Busqueda lineal 1: " << pc << " " << &pc << " " << *pc;
pc = Computadoras.buscar(c7);
std::cout << "Busqueda lineal 2: " << pc << std::endl;


ArregloDinamico <computadora*> lab = Computadoras.buscar_todos(c3);

if (lab.size() > 0)
{
  for (size_t i = 0; i < lab.size(); i++)
  {
    computadora *pcs = lab[i];
    std::cout << *pcs << std::endl;
  }
}else
{
  std::cout << "No hay coincidencias" << std::endl;
}








  /*
  ArregloDinamico<std::string> arreglo;
  arreglo.agregarFinal("TEXTO 1");
  arreglo.agregarFinal("TEXTO 2");
  arreglo.agregarFinal("TEXTO 3");
  arreglo.agregarFinal("The game");
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
  std::string *b = arreglo.buscar("The game");
std::cout << std::endl << b << " " << *b << std::endl;*/
}
 