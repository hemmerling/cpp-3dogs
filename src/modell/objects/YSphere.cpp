#include "ysphere.h"
#include "opengl2.h"

YSphere::YSphere(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
  	setOuterRadius(1.0);
  	setDefaultOuterRadius(1.0);
  	setSides(10);
    setRings(10);
}    

YSphere::~YSphere(void){}

void YSphere::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}

void YSphere::update(GLubyte aKey){
}

GLfloat &YSphere::getOuterRadius(void)
{
  return outerRadius;
}

void YSphere::setOuterRadius(GLfloat outerRadius)
{
  this->outerRadius = outerRadius;
}

GLfloat &YSphere::getDefaultOuterRadius(void)
{
  return defaultOuterRadius;
}

void YSphere::setDefaultOuterRadius(GLfloat defaultOuterRadius)
{
  this->defaultOuterRadius = defaultOuterRadius;
  this->outerRadius = defaultOuterRadius;
}
    
GLint &YSphere::getSides(void)
{
  return sides;
}

void YSphere::setSides(GLint sides)
{
  this->sides = sides;
}

GLint &YSphere::getRings(void)
{
  return rings;
}

void YSphere::setRings(GLint rings)
{
  this->rings = rings;
}

GLfloat YSphere::getRelationOfFrequencies( YSphere aYSphere )
{
    return  aYSphere.getOuterRadius() / this->getOuterRadius();
}

