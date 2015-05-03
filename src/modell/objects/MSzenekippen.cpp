#include "mszenekippen.h"
#include "opengl2.h"

MSzeneKippen::MSzeneKippen(void) {}     

MSzeneKippen::~MSzeneKippen(void){}

void MSzeneKippen::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

void MSzeneKippen::update(GLubyte aKey){
  setAngle(getAngle()+ getStep());
} 

