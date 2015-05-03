#include "ycone.h"
#include "opengl2.h"

YCone::YCone(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
  	base = 1.0;
  	height = 2.0;
    setSlices(10);
    setStacks(10);
}    

YCone::~YCone(void){}

void YCone::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}					

GLfloat &YCone::getBase(void) 
{ 
  return base; 
}

void YCone::setBase(GLfloat base) 
{ 
  this->base = base; 
}

GLint &YCone::getSlices(void)
{
  return slices;
}

void YCone::setSlices(GLint slices)
{
  this->slices = slices;
}

GLint &YCone::getStacks(void)
{
  return stacks;
}

void YCone::setStacks(GLint stacks)
{
  this->stacks = stacks;
}

