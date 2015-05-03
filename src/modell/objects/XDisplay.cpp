#include "xdisplay.h"
#include "opengl2.h"

XDisplay::XDisplay(void) {}    
XDisplay::~XDisplay(void) {}

void XDisplay::display1(OpenGL &aOpenGL){
  aOpenGL.display1(this);
}

void XDisplay::display2(OpenGL &aOpenGL){
  aOpenGL.display2(this);
}

