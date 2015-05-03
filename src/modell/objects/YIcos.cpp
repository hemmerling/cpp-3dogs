#include "yicos.h"
#include "opengl2.h"

YIcos::YIcos(void) {}    

YIcos::~YIcos(void){}

void YIcos::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}

