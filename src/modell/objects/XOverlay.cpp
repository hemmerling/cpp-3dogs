#include "xoverlay.h"
#include "opengl2.h"

XOverlay::XOverlay(void) {}    
XOverlay::~XOverlay(void) {}

void XOverlay::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

