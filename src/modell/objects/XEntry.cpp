#include "xentry.h"
#include "opengl2.h"

XEntry::XEntry(void) {}    
XEntry::~XEntry(void) {}

void XEntry::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

void XEntry::setState(GLint state)
{
  this->state = state;
}
						
GLint XEntry::getState(void)
{
  return state;
}

