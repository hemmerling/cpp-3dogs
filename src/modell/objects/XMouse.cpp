#include "xmouse.h"
#include "opengl2.h"

XMouse::XMouse(void) {
 setButton(0);
 setState(0);
}    

XMouse::~XMouse(void) {}

void XMouse::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

GLint XMouse::getButton(void) 
{ 
  return button; 
}

void XMouse::setButton(GLint button) 
{ 
  this->button = button; 
}

GLint XMouse::getState(void) 
{ 
  return state; 
}

void XMouse::setState(GLint state) 
{ 
  this->state = state; 
}

