#include "quatro.h"

template<class TT> Quatro<TT>::~Quatro(){}

template<class TT> Quatro<TT>::Quatro(){
   init(0.0, 0.0, 0.0, 0.0);
}

template<class TT>  TT *Quatro<TT>::getV() {
 return vektor;
}

template<class TT> void Quatro<TT>::init(TT a, TT b, TT c, TT d){
  vektor[0] = a;
  vektor[1] = b;
  vektor[2] = c;
  vektor[3] = d;
}


