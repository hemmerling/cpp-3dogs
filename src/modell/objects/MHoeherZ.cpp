#include "mhoeherz.h"
#include "opengl2.h"

MHoeherZ::MHoeherZ(void) {}    

MHoeherZ::MHoeherZ(MTranslation1 *command){
 this->command = command;
}

MHoeherZ::~MHoeherZ(void) {}

void MHoeherZ::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MHoeherZ::update(GLubyte aKey){
  update2();
}

void MHoeherZ::update(GLint aKey){
  update2();
}

void MHoeherZ::update2(void){
   // cout << "hoeher key" << endl;
   command->getCoordinates().setZ(
   command->getCoordinates().getZ() +
   command->getStep());
}

