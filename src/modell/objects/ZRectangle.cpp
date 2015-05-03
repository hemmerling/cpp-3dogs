#include "zrectangle.h"
#include "opengl2.h"

ZRectangle::ZRectangle(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
    setLength(1.0);
    setDefaultLength(1.0);
}    

ZRectangle::~ZRectangle(void){}

void ZRectangle::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}					

GLfloat &ZRectangle::getLength(void) 
{ 
  return length; 
}

void ZRectangle::setLength(GLfloat length) 
{ 
  this->length = length; 
}

GLfloat &ZRectangle::getDefaultLength(void) 
{ 
  return defaultLength; 
}

void ZRectangle::setDefaultLength(GLfloat defaultLength) 
{ 
  this->defaultLength = defaultLength; 
  this->length = defaultLength; 
}

