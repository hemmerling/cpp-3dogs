#include "mlookx0.h"
#include "opengl2.h"

MLookX0::MLookX0(void) {}    

MLookX0::MLookX0(WLookAt *command){
 this->command = command;
}

MLookX0::~MLookX0(void) {}

void MLookX0::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MLookX0::update(GLubyte aKey){
  update2();
}

void MLookX0::update(GLint aKey){
  update2();
}

void MLookX0::update2(void){
  command->setBlickpunkt(0);
}

