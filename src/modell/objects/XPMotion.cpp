#include "xmotion.h"
#include "opengl2.h"

XPMotion::~XPMotion(void) {}
XPMotion::XPMotion(void) {}

void XPMotion::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

