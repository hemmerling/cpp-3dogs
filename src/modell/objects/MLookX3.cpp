#include "mlookx3.h"
#include "opengl2.h"

MLookX3::MLookX3(void) {}    

MLookX3::MLookX3(WLookAt *command){
 this->command = command;
}

MLookX3::~MLookX3(void) {}

void MLookX3::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MLookX3::update2(void){
  command->setBlickpunkt(3);
}

