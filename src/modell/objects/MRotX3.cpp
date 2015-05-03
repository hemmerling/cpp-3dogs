#include "mrotx3.h"
#include "opengl2.h"

MRotX3::MRotX3(void) {}    

MRotX3::MRotX3(MRotation1 *command){
 this->command = command;
 setLock(false);
}

MRotX3::~MRotX3(void) {}

void MRotX3::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MRotX3::update2(void){
   command->setAngle(command->getAngle()+command->getStep());
   // cout << "Winkel ="  << command->getAngle() << endl;
}

