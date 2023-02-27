
/** AUTOR: Jose Angel Portillo Garcia
 *  FECHA: 14/02/2023
 *  EMAIL: alu0101568232@ull.edu.es
 *  VERSION: 1.0
 *  ASIGNATURA: Algoritmos y Estructuras de Datos
 *  PRÁCTICA Nº: 1
 *  COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
 *              "C++ Programming Style Guidelines"
 *              https://geosoft.no/development/cppstyle.html
 */

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#pragma once
#ifndef RATIONAL_T_
#define RATIONAL_T_

#include <iostream>
#include <cassert>
#include <cmath>

// pauta de estilo [5]
# define EPSILON 1e-6

using namespace std;

class rational_t
{
  // pautas de estilos [44] y [73]: primero "public" y después "private"
public:
  rational_t(const int = 0, const int = 1);
  ~rational_t() {}
  
  // pauta de estilo [71]: indentación a 2 espacios
  // getters
  int GetNum() const;
  int GetDen() const;
  
  // setters
  void set_num(const int);
  void set_den(const int);

  double Value(void) const;

  // FASE II
  bool IsEqual(const rational_t& rational, const double precision = EPSILON) const;
  bool IsGreater(const rational_t& rational, const double precision = EPSILON) const;
  bool IsLess(const rational_t& rational, const double precision = EPSILON) const;
  bool IsZero(const double precision = EPSILON) const;
  
  // FASE III
  rational_t Add(const rational_t& rational);
  rational_t Substract(const rational_t& rational);
  rational_t Multiply(const rational_t& rational);
  rational_t Divide(const rational_t& rational);
  
  void Write(ostream& = cout) const;
  void Read(istream& = cin);
  
private:
  // pauta de estilo [11]: nombre de los atributos seguido de "_"
  int num_;
  int den_;
};

#endif
