
/** AUTOR: Jose Angel Portillo Garcia
 * FECHA: 14/02/2023
 * EMAIL: alu0101568232@ull.edu.es
 * VERSION: 1.0
 * ASIGNATURA: Algoritmos y Estructuras de Datos
 * PRÁCTICA Nº: 1
 * COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
 *              "C++ Programming Style Guidelines"
 *             https://google.github.io/styleguide/cppguide.html
 */

// pauta de estilo [92]: comentarios multilínea usando solo "/*/"

#include "rational_t.hpp"

rational_t::rational_t(const int n, const int d) {
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo [87]: 3 líneas de separación entre métodos

// pauta de estilo [83]: tipo retornado en en la misma línea del metodo
int rational_t::GetNum() const {
  return num_;
}



int rational_t::GetDen() const {
  return den_;
}


  
void rational_t::SetNum(const int n) {
  num_ = n;
}


  
void rational_t::SetDen(const int d) {
  assert(d != 0);
  den_ = d;// pauta de estilo [92]: comentarios multilínea usando solo "//"
}



double rational_t::Value() const {
  return double(GetNum()) / GetDen();
}


// comparaciones
bool rational_t::IsEqual(const rational_t& rational, const double precision) const {
  return fabs( (num_ / den_) - rational.Value()) < precision;
}



bool rational_t::IsGreater(const rational_t& rational, const double precision) const {
  return (num_ / den_) - rational.Value() > precision;
}



bool rational_t::IsLess(const rational_t& rational, const double precision) const {
  return rational.Value() - (num_ / den_) > precision;
}
// pauta de estilo [92]: comentarios multilínea usando solo "//"

bool rational_t::IsZero(const double precision) const {
  return fabs((num_ / den_)) < precision;
}


// operaciones
rational_t rational_t::Add(const rational_t& rational) {
  return rational_t ((num_ * rational.GetDen()) + (den_ * rational.GetNum()), den_ * rational.GetDen());
}



rational_t rational_t::Substract(const rational_t& rational) {
  return rational_t ((num_ * rational.GetDen()) + (den_ * -rational.GetNum()), den_ * rational.GetDen());
}



rational_t rational_t::Multiply(const rational_t& rational) {
  return rational_t (num_ * rational.GetNum(), den_ * rational.GetDen());
}



rational_t rational_t::Divide(const rational_t& rational) {
  return rational_t (num_ * rational.GetDen(), den_ * rational.GetNum());
}



// E/S
void rational_t::Write(ostream& os) const
{
  os << GetNum() << "/" << GetDen() << "=" << Value() << endl;
}

// pauta de estilo [92]: comentarios multilínea usando solo "//"

void rational_t::Read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}


//Modificacion
rational_t rational_t::SubstractOne(double numerador, double denominador) {
  return rational_t (numerador - denominador, denominador);
}
