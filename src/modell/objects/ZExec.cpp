#include "zexec.h"
ZExec::ZExec(void) {}    
ZExec::~ZExec(void) {}

void ZExec::display(OpenGL &aOpenGL){
  
  // Hier wird OpenGL nicht aufgerufen
  //aOpenGL.display(this);
  
  // Alle OpenGL Kommandos ausfuehren    
  Vektor< VektorElement<ZCmd *>, ZCmd *>::iterator aIterator;
  aIterator = getQueue2()->begin();    
  while ( aIterator != getQueue2()->end() )
   {
       // OpenGL Kommando ausfuehren    
       (*aIterator).getObjekt()->display(aOpenGL); 
       ++aIterator; 

       // Ausplanung eines Kommandos, sofern es ein einmalig eingeplantes
       // Kommando ist
       /*       
       if ( (*aIterator).getObjekt()->getSingleExecution() )
        {  
          // Loeschen aus dem Vektor = Loeschung der Einplanung
          // Der Iterator zeigt damit bereits auf das dem geloeschten
          // Element folgende Element, daher kein Inkrement 
          aIterator = getQueue2()->erase(aIterator);
        }
       else
        {
           // Iterator zeigt jetzt auf das Folgelement 
           ++aIterator; 
        };
        */
   };
}					

void ZExec::update(void){
  
  // Alle Berechnungen durchfuehren
  Vektor< VektorElement<ZCmd *>, ZCmd *>::iterator aIterator;
  aIterator = getQueue2()->begin();    
  while ( aIterator != getQueue2()->end() )
   {
       // Berechnung durchfuehren
       (*aIterator).getObjekt()->update(); 
       // Iterator zeigt jetzt auf das Folgelement 
       ++aIterator; 
   };
}					

ZQueue *ZExec::getQueue(void)
{
  return aQueue;
}

void ZExec::setQueue(ZQueue *aQueue)
{
  this->aQueue = aQueue;
}

Vektor< VektorElement<ZCmd *>, ZCmd *> *ZExec::getQueue2(void)
{
  return aQueue->getQueue();
}


