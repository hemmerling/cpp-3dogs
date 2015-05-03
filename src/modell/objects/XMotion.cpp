#include "xmotion.h"
#include "opengl2.h"

XMotion::~XMotion(void) {}

void XMotion::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

GLint &XMotion::getX(void) 
{ 
  return x; 
}

void XMotion::setX(GLint x) 
{ 
  this->x = x; 
}

GLint &XMotion::getY(void) 
{ 
  return y; 
}

void XMotion::setY(GLint y) 
{ 
  this->y = y; 
}
XMotion::XMotion(void) {
 setX(0);
 setY(0);
}
