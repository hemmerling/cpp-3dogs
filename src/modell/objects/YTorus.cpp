#include "ytorus.h"
#include "opengl2.h"

YTorus::YTorus(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
 	setOuterRadius(1.0);
}    

YTorus::~YTorus(void){}

void YTorus::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}

GLfloat &YTorus::getInnerRadius(void) {
   return innerRadius;
}	

void YTorus::setInnerRadius(GLfloat innerRadius) {
   this->innerRadius = innerRadius;
}	

