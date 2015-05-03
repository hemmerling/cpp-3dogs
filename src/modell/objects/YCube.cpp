#include "ycube.h"
#include "opengl2.h"

YCube::YCube(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
	setHeight(1.0);
	setDefaultHeight(1.0);
}    

YCube::~YCube(void){}

void YCube::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}					

GLfloat &YCube::getHeight(void) 
{ 
  return height; 
}

void YCube::setHeight(GLfloat height) 
{ 
  this->height = height; 
}

GLfloat &YCube::getDefaultHeight(void) 
{ 
  return defaultHeight; 
}

void YCube::setDefaultHeight(GLfloat defaultHeight) 
{ 
  this->defaultHeight = defaultHeight; 
  this->height = defaultHeight; 
}

