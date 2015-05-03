#include "xspecial.h"
#include "opengl2.h"

XSpecial::XSpecial(void) {
  setKey(' ');
}    

XSpecial::~XSpecial(void) {}

void XSpecial::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

GLuint XSpecial::getKey(void) 
{ 
  return key; 
}

void XSpecial::setKey(GLuint key) 
{ 
  this->key = key; 
}

