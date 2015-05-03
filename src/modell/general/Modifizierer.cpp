#include "modifizierer.h"

template<class TT> Modifizierer<TT>::~Modifizierer(){}

template<class TT> Modifizierer<TT>::Modifizierer(){
   objekt = (TT )NULL;
}

template<class TT> Modifizierer<TT>::Modifizierer( TT objekt ) {
   this->objekt = objekt;
}

template<class TT> void Modifizierer<TT>::setObjekt ( TT objekt ){
   this->objekt = objekt;
}

template<class TT> TT Modifizierer<TT>::getObjekt ( void ){
   return objekt;
}


