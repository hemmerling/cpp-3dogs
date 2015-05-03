#include "xspecialup.h"
#include "opengl2.h"

XSpecialUp::XSpecialUp(void) {
  setKey(' ');
}    

XSpecialUp::~XSpecialUp(void) {}

void XSpecialUp::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

