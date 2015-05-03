#include "mperspective.h"
#include "opengl2.h"

MPerspective::MPerspective(void) {}    

MPerspective::MPerspective(ZPerspective *command){
 this->command = command;
}

MPerspective::~MPerspective(void) {}

void MPerspective::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MPerspective::update(ZCmd *aCommand){
  // Action passiert nur in den abgeleiteten Klassen
}

