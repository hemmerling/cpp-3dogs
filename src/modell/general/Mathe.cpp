#include "mathe.h"

Mathe::~Mathe(){}

Mathe::Mathe() {}

GLfloat Mathe::modulo(GLfloat aOperator1, GLfloat aOperator2)
{ 
    GLfloat aReturnValue = 
     roundf ( ( ( aOperator1 / aOperator2 ) - truncf ( aOperator1 / aOperator2 ) ) * aOperator2 );

    // Korrektur des Ergebnisses, sofern der Wert des
    // Ergebnisses durch Rundung gleich dem Wert von aOperator2 ist
    
    if ( abs( aReturnValue ) == aOperator2 )
     { 
      // Wert lag bei - aOperator2
      aReturnValue = 0;
     }   
     else
     { 
       // Wert liegt zwischen 0 und +/- aOperator2
     }  ;        

    return ( aReturnValue );
    
}

