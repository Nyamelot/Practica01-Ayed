
/** AUTOR: Jose Angel Portillo Garcia
 * FECHA: 14/02/2023
 * EMAIL: alu0101568232@ull.edu.es
 * VERSION: 1.0
 * ASIGNATURA: Algoritmos y Estructuras de Datos
 * PRÁCTICA Nº: 1
 * COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
 *              "C++ Programming Style Guidelines"
 *              https://geosoft.no/development/cppstyle.html
 * COMPILACIÓN: g++ -g rational_t.cpp main_rational_t.cpp -o main_rational_t
 */
// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include <iostream>
#include <cmath>

// pauta de estilo [41]: ficheros de cabecera agrupados y separados
#include "rational_t.hpp"

using namespace std;

int main() {
  rational_t a(1, 2), b(3), c;

  cout << "a.value()= " << a.Value() << endl;
  cout << "b.value()= " << b.Value() << endl;
  cout << "c.value()= " << c.Value() << endl;

  cout << "a: ";
  a.Write();
  cout << "b: ";
  b.Write();

  c.Read();
  cout << "c: ";
  c.Write();

  // FASE II
  rational_t rational01(1, 3), rational02(2, 3);
  rational01.Write();
  rational02.Write();
  cout << "rational 1 == rational 2? " << (rational01.IsEqual(rational02) ? "true" : "false") << endl;
  cout << "rational 1 > rational 2? " << (rational01.IsGreater(rational02) ? "true" : "false") << endl;
  cout << "rational 1 < rational 2? " << (rational01.IsLess(rational02) ? "true" : "false") << endl;
  cout << "rational 1 == 0 " << (rational01.IsZero() ? "true" : "false") << endl;

  // FASE III
  cout << "a + b: ";
  a.Add(b).Write();
  
  cout << "b - a: ";
  b.Substract(a).Write();

  cout << "a * b: ";
  a.Multiply(b).Write();
  
  cout << "a / b: ";
  a.Divide(b).Write();
  
  return 0;
}
