#include "mlookx1.h"
#include "opengl2.h"

MLookX1::MLookX1(void) {}    

MLookX1::MLookX1(WLookAt *command){
 this->command = command;
}

MLookX1::~MLookX1(void) {}

void MLookX1::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MLookX1::update2(void){
  command->setBlickpunkt(1);
}

