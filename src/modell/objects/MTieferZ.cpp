#include "mtieferz.h"
#include "opengl2.h"

MTieferZ::MTieferZ(void) {}   

MTieferZ::MTieferZ(MTranslation1 *command){
 this->command = command;
}
 
MTieferZ::~MTieferZ(void) {}

void MTieferZ::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MTieferZ::update2(void){
   // cout << "tiefer key" << endl;
   command->getCoordinates().setZ(
   command->getCoordinates().getZ() -
   command->getStep());
}

