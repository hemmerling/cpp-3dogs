#include "mrotx4.h"
#include "opengl2.h"

MRotX4::MRotX4(void) {}    

MRotX4::MRotX4(MRotation1 *command){
 this->command = command;
 setLock(false);
}

MRotX4::~MRotX4(void) {}

void MRotX4::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MRotX4::update2(void){
   command->setAngle(command->getAngle()-command->getStep());
   // cout << "Winkel ="  << command->getAngle() << endl;
}

