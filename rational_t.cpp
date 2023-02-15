// AUTOR: Jose Angel Portillo Garcia
// FECHA: 14/02/2023
// EMAIL: alu0101568232@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 1
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

// pauta de estilo [92]: comentarios multilínea usando solo "//"

#include "rational_t.hpp"

rational_t::rational_t(const int n, const int d) {
  assert(d != 0);
  num_ = n, den_ = d;
}

// pauta de estilo [87]: 3 líneas de separación entre métodos

// pauta de estilo [83]: tipo retornado en línea anterior al método
int
rational_t::get_num() const {
  return num_;
}



int
rational_t::get_den() const {
  return den_;
}


  
void
rational_t::set_num(const int n) {
  num_ = n;
}


  
void
rational_t::set_den(const int d) {
  assert(d != 0);
  den_ = d;
}



double
rational_t::value() const {
  return double(get_num()) / get_den();
}


// comparaciones
bool
rational_t::IsEqual(const rational_t& rational, const double precision) const {
  return fabs( (num_ / den_) - rational.value()) < precision ? true : false;
}



bool
rational_t::IsGreater(const rational_t& rational, const double precision) const {
  return (num_ / den_) - rational.value() > precision ? true : false;
}



bool
rational_t::IsLess(const rational_t& rational, const double precision) const {
  return rational.value() - (num_ / den_) > precision ? true : false;
}



bool
rational_t::IsZero(const double precision) const {
  return fabs((num_ / den_)) < precision ? true : false;
}


// operaciones
rational_t
rational_t::Add(const rational_t& rational) {
  return rational_t ((num_ * rational.get_den()) + (den_ * rational.get_num()), den_ * rational.get_den());
}



rational_t
rational_t::Substract(const rational_t& rational) {
  return rational_t ((num_ * rational.get_den()) + (den_ * -rational.get_num()), den_ * rational.get_den());
}



rational_t
rational_t::Multiply(const rational_t& rational) {
  return rational_t (num_ * rational.get_num(), den_ * rational.get_den());
}



rational_t
rational_t::Divide(const rational_t& rational) {
  return rational_t (num_ * rational.get_den(), den_ * rational.get_num());
}



// E/S
void
rational_t::Write(ostream& os) const
{
  os << get_num() << "/" << get_den() << "=" << value() << endl;
}



void 
rational_t::Read(istream& is)
{
  cout << "Numerador? ";
  is >> num_;
  cout << "Denominador? ";
  is >> den_;
  assert(den_ != 0);
}
