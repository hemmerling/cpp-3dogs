#include "mtransx3.h"
#include "opengl2.h"

MTransX3::MTransX3(void) {}    

MTransX3::MTransX3(MTranslation2 *command){
 this->command = command;
}

MTransX3::~MTransX3(void) {}

void MTransX3::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MTransX3::update2(void){
  command->setDirection(RUECKWAERTS);
}

