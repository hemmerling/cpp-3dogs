#include "zperspective.h"
#include "opengl2.h"

ZPerspective::ZPerspective(void) {}    
ZPerspective::~ZPerspective(void) {}

void ZPerspective::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

void ZPerspective::setEye(Coordinates *aEye)
{
  this->aEye = aEye;
}
						
Coordinates *ZPerspective::getEye(void)
{
  return aEye;
}

void ZPerspective::setCenter(Coordinates *aCenter)
{
  this->aCenter = aCenter;
}
						
Coordinates *ZPerspective::getCenter(void)
{
  return aCenter;
}

void ZPerspective::setUp(Coordinates *aUp)
{
  this->aUp = aUp;
}
						
Coordinates *ZPerspective::getUp(void)
{
  return aUp;
}

