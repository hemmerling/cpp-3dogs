#include "mlookx2.h"
#include "opengl2.h"

MLookX2::MLookX2(void) {}    

MLookX2::MLookX2(WLookAt *command){
 this->command = command;
}

MLookX2::~MLookX2(void) {}

void MLookX2::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MLookX2::update2(void){
  command->setBlickpunkt(2);
}

