#include "zgraticule.h"
#include "opengl2.h"

ZGraticule::ZGraticule(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
    length = 1;
    lineWidth = 1;
    getColor().getR() = 1.0;
    getColor().getG() = 0.0;
    getColor().getB() = 0.0;
    // immer Beleuchtung abschalten
    setLighting(false); 
}    

ZGraticule::~ZGraticule(void){}

void ZGraticule::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}
 
void ZGraticule::setLength ( GLfloat length ) {
  this->length = length;
}

GLfloat ZGraticule::getLength ( void ) {
  return length;
}

void ZGraticule::setLineWidth ( GLfloat lineWidth ) {
  this->lineWidth = lineWidth;
}

GLfloat ZGraticule::getLineWidth ( void ) {
  return lineWidth;
}

