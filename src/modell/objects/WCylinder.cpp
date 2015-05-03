#include "wcylinder.h"
#include "opengl2.h"

WCylinder::WCylinder(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
 	setTop(1.0);
    setQuadric(( WQuadric *)NULL);
}    

WCylinder::~WCylinder(void){}

void WCylinder::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}

GLfloat &WCylinder::getTop(void) {
   return top;
}	

void WCylinder::setTop(GLfloat top) {
   this->top = top;
}	

WQuadric *WCylinder::getQuadric(void) {
   return quadric;
}	

void WCylinder::setQuadric(WQuadric *quadric) {
   this->quadric = quadric;
}	

