#include "yoct.h"
#include "opengl2.h"

YOct::YOct(void) {}    

YOct::~YOct(void){}

void YOct::display(OpenGL &aOpenGL){
  ZObject::update1(aOpenGL);
  aOpenGL.display(this);
  ZObject::update2(aOpenGL);
}
 
