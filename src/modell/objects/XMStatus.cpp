#include "xmstatus.h"
#include "opengl2.h"

XMStatus::XMStatus(void) {}    
XMStatus::~XMStatus(void) {}

void XMStatus::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

void XMStatus::setStatus(GLint status)
{
  this->status = status;
}
						
GLint XMStatus::getStatus(void)
{
  return status;
}

