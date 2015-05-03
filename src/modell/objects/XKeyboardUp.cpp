#include "xkeyboardup.h"
#include "opengl2.h"

XKeyboardUp::XKeyboardUp(void) {
  setKey(' ');
}    

XKeyboardUp::~XKeyboardUp(void) {}

void XKeyboardUp::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

