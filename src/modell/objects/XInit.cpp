#include "xinit.h"
#include "opengl2.h"

XInit::XInit(void) {}    
XInit::~XInit(void) {}

void XInit::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

