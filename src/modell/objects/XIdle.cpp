#include "xidle.h"
#include "opengl2.h"

XIdle::XIdle(void) {}    
XIdle::~XIdle(void) {}

void XIdle::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

