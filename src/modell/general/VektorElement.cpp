#include "vektorelement.h"

template<class TT> VektorElement<TT>::~VektorElement(){}

template<class TT> VektorElement<TT>::VektorElement(){
   // "objekt" wird hier NICHT initialisiert !
   name = 0;
}

template<class TT> VektorElement<TT>::VektorElement( TT objekt, GLuint name ) {
   this->objekt = objekt;
   this->name = name;
}

template<class TT> void VektorElement<TT>::setName ( GLuint name ){
   this->name = name;
}
template<class TT> GLuint VektorElement<TT>::getName ( void ){
   return name;
}


