#include "xwstatus.h"
#include "opengl2.h"

XWStatus::XWStatus(void) {}    
XWStatus::~XWStatus(void) {}

void XWStatus::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

