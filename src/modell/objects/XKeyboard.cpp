#include "xkeyboard.h"
#include "opengl2.h"

XKeyboard::XKeyboard(void) {
  setKey(' ');
}    

XKeyboard::~XKeyboard(void) {}

void XKeyboard::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

GLubyte XKeyboard::getKey(void) 
{ 
  return key; 
}

void XKeyboard::setKey(GLubyte key) 
{ 
  this->key = key; 
}

