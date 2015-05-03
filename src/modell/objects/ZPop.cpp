#include "zpop.h"
#include "opengl2.h"

ZPop::ZPop(void) {}    

ZPop::~ZPop(void){}

void ZPop::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}
 
