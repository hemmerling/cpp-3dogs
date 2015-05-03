#include "equation.h"

template<class TT> Equation<TT>::~Equation(){}
template<class TT> Equation<TT>::Equation(){}

template<class TT> Equation<TT>::Equation(TT a, TT b, TT c, TT d){
  init(a,b,c,d);
}

template<class TT> void Equation<TT>::setA(TT a){ vektor[0] = a; }
template<class TT> TT& Equation<TT>::getA(){ return vektor[0]; }
template<class TT> void Equation<TT>::setB(TT b){ vektor[1] = b; }
template<class TT> TT& Equation<TT>::getB(){ return  vektor[1]; }
template<class TT> void Equation<TT>::setC(TT c){  vektor[2] = c; }
template<class TT> TT& Equation<TT>::getC(){ return vektor[2]; }
template<class TT> void Equation<TT>::setD(TT d){  vektor[3] = d; }
template<class TT> TT& Equation<TT>::getD(){ return vektor[3]; }

