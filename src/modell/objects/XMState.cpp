#include "xmstate.h"
#include "opengl2.h"

XMState::XMState(void) {}    
XMState::~XMState(void) {}

void XMState::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

