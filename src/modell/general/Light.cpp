#include "light.h"

template<class TT> Light<TT>::~Light(){}
template<class TT> Light<TT>::Light(){}

template<class TT> Light<TT>::Light(TT r, TT g, TT b, TT a){
  init(r,g,b,a);
}

template<class TT> void Light<TT>::setR(TT r){  vektor[0] = r; }
template<class TT> TT &Light<TT>::getR(){ return vektor[0]; }
template<class TT> void Light<TT>::setG(TT g){  vektor[1] = g; }
template<class TT> TT &Light<TT>::getG(){ return vektor[1]; }
template<class TT> void Light<TT>::setB(TT b){ vektor[2] = b; }
template<class TT> TT &Light<TT>::getB(){ return  vektor[2]; }
template<class TT> void Light<TT>::setA(TT a){ vektor[3] = a; }
template<class TT> TT &Light<TT>::getA(){ return vektor[3]; }

