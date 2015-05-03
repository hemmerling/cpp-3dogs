#include "zrotation.h"
#include "opengl2.h"

ZRotation::ZRotation() {
    setAngle(0.0);
}    

ZRotation::~ZRotation(void){}

GLfloat ZRotation::getAngle(void)
{
  return angle;
}

void ZRotation::setAngle(GLfloat angle)
{
  this->angle = angle;
}

void ZRotation::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

