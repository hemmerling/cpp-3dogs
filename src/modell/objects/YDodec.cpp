#include "ydodec.h"
#include "opengl2.h"

YDodec::YDodec(void) {}    

YDodec::~YDodec(void){}

void YDodec::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}

