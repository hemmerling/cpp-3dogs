#include "zclipplane.h"
#include "opengl2.h"

ZClipPlane::ZClipPlane(void) {}    
ZClipPlane::~ZClipPlane(void) {}

void ZClipPlane::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

void ZClipPlane::setPlane(GLenum aPlane)
{
  this->aPlane = aPlane;
}
						
GLenum ZClipPlane::getPlane(void)
{
  return aPlane;
}

void ZClipPlane::setEquation(Equation<GLdouble> *aEquation)
{
  this->aEquation = aEquation;
}
						
GLdouble *ZClipPlane::getEquation(void)
{
  return aEquation->getV();
}

