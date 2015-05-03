#include "xvisibility.h"
#include "opengl2.h"

XVisibility::XVisibility(void) {}    
XVisibility::~XVisibility(void) {}

void XVisibility::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

