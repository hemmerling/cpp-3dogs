#include "ytetr.h"
#include "opengl2.h"

YTetr::YTetr(void) {}    

YTetr::~YTetr(void){}

void YTetr::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}
 
