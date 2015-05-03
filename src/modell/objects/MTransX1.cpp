#include "mtransx1.h"
#include "opengl2.h"

MTransX1::MTransX1(void) {}    

MTransX1::MTransX1(MTranslation2 *command){
 this->command = command;
}

MTransX1::~MTransX1(void) {}

void MTransX1::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MTransX1::update(GLubyte aKey){
  update2();
}

void MTransX1::update(GLint aKey){
  update2();
}

void MTransX1::update2(void){
  command->setDirection(STOP);
  command->setSpeed(0.0);
}

