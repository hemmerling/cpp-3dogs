#include "wsphere.h"
#include "opengl2.h"

WSphere::WSphere(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
    setQuadric(( WQuadric *)NULL);
}    

WSphere::~WSphere(void){}

void WSphere::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}

WQuadric *WSphere::getQuadric(void) {
   return quadric;
}	

void WSphere::setQuadric(WQuadric *quadric) {
   this->quadric = quadric;
}	

