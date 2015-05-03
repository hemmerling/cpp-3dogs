#include "vektor.h"

template<class TT, class ELEMENT> Vektor<TT,ELEMENT>::~Vektor(){}

template<class TT, class ELEMENT> Vektor<TT,ELEMENT>::Vektor(){}

template<class TT, class ELEMENT> 
         void Vektor<TT,ELEMENT>::push_back ( ELEMENT element, GLuint name )
{
   TT tt;
   tt.setObjekt(element);
   tt.setName(name);
   std::vector<TT>::push_back(tt);   
}

template<class TT, class ELEMENT> 
         void Vektor<TT,ELEMENT>::push_back ( TT tt )
{
   std::vector<TT>::push_back(tt);   
}

template<class TT, class ELEMENT> TT *Vektor<TT,ELEMENT>::find ( GLuint name ){

   if ( ! this->empty() )
    {
       // Vektor nicht leer
       try  
        {  
          for ( int aCounter = 0; aCounter < this->size(); aCounter++)
           {
             // Stimmt der numerische Name mit dem gesuchten Namen ueberein ?
             if ( this->at(aCounter).getName() == name )
               {  
                 // Gefunden !
                 // cout << "Gefunden" << endl;
                 return ( &(this->at(aCounter)) );
               }
             else
               {
                 // Nicht gefunden !
               }; // if
           }; // for

         cout << "Nicht gefunden" << endl;

         // Nur zu Testzwecken: Provouzieren einer Bereichsverletzung
         // this->at(1000).getName(); 
           
        }
       catch(char *str)
        {
          //cout << "Exception: " << str << endl;
          return ( ( TT * )NULL );
        };
        
    }
   else
    {
      // Vektor ist leer
    };
  return ( ( TT * )NULL );
}


