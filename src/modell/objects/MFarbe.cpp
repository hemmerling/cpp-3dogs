#include "mfarbe.h"
#include "opengl2.h"

MFarbe::MFarbe(void) {}    

MFarbe::MFarbe(ZObject *command){
 this->command = command;
}

MFarbe::~MFarbe(void) {}

void MFarbe::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}
 

