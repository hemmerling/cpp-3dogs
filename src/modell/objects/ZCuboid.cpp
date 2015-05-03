#include "zcuboid.h"
#include "opengl2.h"

ZCuboid::ZCuboid(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
    setWidth(1.0);
    setDefaultWidth(1.0);
}    

ZCuboid::~ZCuboid(void){}

void ZCuboid::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}					

GLfloat &ZCuboid::getWidth(void) 
{ 
  return width; 
}

void ZCuboid::setWidth(GLfloat width) 
{ 
  this->width = width; 
}

GLfloat &ZCuboid::getDefaultWidth(void) 
{ 
  return defaultWidth; 
}

void ZCuboid::setDefaultWidth(GLfloat defaultWidth) 
{ 
  this->defaultWidth = defaultWidth;
  this->width = defaultWidth; 
}

