#include "mposition.h"
#include "opengl2.h"

MPosition::MPosition(void) {}    

MPosition::MPosition(MTranslation1 *command){
 this->command = command;
}

MPosition::~MPosition(void) {}

void MPosition::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MPosition::update(ZCmd *aCommand){
  // Action passiert nur in den abgeleiteten Klassen
}

