#include "xreshape.h"
#include "opengl2.h"

XReshape::XReshape(void) {}    
XReshape::~XReshape(void) {}

void XReshape::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

void XReshape::setHeight(GLint height)
{
  this->height = height;
}

GLint XReshape::getHeight(void) {
   return height;
}	

void XReshape::setWidth(GLint width)
{
  this->width = width;
}

GLint XReshape::getWidth(void) {
   return width;
}	

