#include "lposition.h"

template<class TT> LPosition<TT>::~LPosition(){}
template<class TT> LPosition<TT>::LPosition(){}

template<class TT> LPosition<TT>::LPosition(TT x, TT y, TT z, TT w){
  init(x,y,z,w);
}

template<class TT> void LPosition<TT>::setX(TT x){  vektor[0] = x; }
template<class TT> TT &LPosition<TT>::getX(){ return vektor[0]; }
template<class TT> void LPosition<TT>::setY(TT y){  vektor[1] = y; }
template<class TT> TT &LPosition<TT>::getY(){ return vektor[1]; }
template<class TT> void LPosition<TT>::setZ(TT z){ vektor[2] = z; }
template<class TT> TT &LPosition<TT>::getZ(){ return  vektor[2]; }
template<class TT> void LPosition<TT>::setW(TT w){ vektor[3] = w; }
template<class TT> TT &LPosition<TT>::getW(){ return vektor[3]; }

