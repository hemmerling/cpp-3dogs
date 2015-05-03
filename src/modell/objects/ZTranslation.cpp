#include "ztranslation.h"
#include "opengl2.h"

void ZTranslation::setCoordinates(Coordinates aCoordinates)
{ 
  this->aCoordinates = aCoordinates; 
}
Coordinates& ZTranslation::getCoordinates()
{ 
  return aCoordinates; 
}

ZTranslation::ZTranslation(void) {
 setCoordinates(*(new Coordinates( 0.0, 0.0, 0.0 )));
}    

ZTranslation::~ZTranslation(void){}

void ZTranslation::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}
  
