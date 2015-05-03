#include "zpush.h"
#include "opengl2.h"

ZPush::ZPush(void) {}    

ZPush::~ZPush(void){}

void ZPush::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}
 
