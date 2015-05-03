#include "mtransx2.h"
#include "opengl2.h"

MTransX2::MTransX2(void) {}    

MTransX2::MTransX2(MTranslation2 *command){
 this->command = command;
}

MTransX2::~MTransX2(void) {}

void MTransX2::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MTransX2::update2(void){
  command->setDirection(VORWAERTS);
}

