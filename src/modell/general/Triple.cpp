#include "triple.h"

void Triple::init(GLfloat x, GLfloat y, GLfloat z){
  setX(x);
  setY(y);
  setZ(z);
  setA(0.8);
}

void Triple::init(GLfloat x, GLfloat y, GLfloat z, GLfloat a){
  setX(x);
  setY(y);
  setZ(z);
  setA(a);
}

Triple::~Triple(){}

Triple::Triple()
{
  init(0.0, 0.0, 0.0, 0.8);
}
Triple::Triple(GLfloat x, GLfloat y, GLfloat z){
  init(x,y,z);
}

void Triple::setZ(GLfloat z){ vektor[2] = z; }
GLfloat& Triple::getZ(){ return vektor[2]; }
void Triple::setY(GLfloat y){ vektor[1] = y; }
GLfloat& Triple::getY(){ return  vektor[1]; }
void Triple::setX(GLfloat x){  vektor[0] = x; }
GLfloat& Triple::getX(){ return vektor[0]; }
void Triple::setA(GLfloat a){  vektor[3] = a; }
GLfloat& Triple::getA(){ return vektor[3]; }

GLfloat *Triple::getV() {
 return vektor;
}

