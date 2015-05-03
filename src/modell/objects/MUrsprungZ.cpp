#include "mursprungz.h"
#include "opengl2.h"

MUrsprungZ::MUrsprungZ(void) {} 

MUrsprungZ::MUrsprungZ(MTranslation1 *command){
 this->command = command;
}
  
MUrsprungZ::~MUrsprungZ(void) {}

void MUrsprungZ::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MUrsprungZ::update2(void){
   // cout << "ursprung key" << endl;  
   command->getCoordinates().setZ(0.0);
}

