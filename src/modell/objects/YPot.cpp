#include "ypot.h"
#include "opengl2.h"

YPot::YPot(void) {
 setSize(0.0);
}    

YPot::~YPot(void){}

void YPot::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}

GLfloat &YPot::getSize(void) {
   return size;
}	

void YPot::setSize(GLfloat size) {
   this->size = size;
} 
