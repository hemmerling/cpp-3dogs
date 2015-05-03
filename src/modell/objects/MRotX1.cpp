#include "mrotx1.h"
#include "opengl2.h"

MRotX1::MRotX1(void) {}    

MRotX1::MRotX1(MRotation1 *command){
 this->command = command;
 setLock(false);
}

MRotX1::~MRotX1(void) {}

void MRotX1::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MRotX1::update4(void){
  // Veraenderung
  command->setAngle(command->getAngle()-command->getStep());
  // cout << "Winkel ="  << command->getAngle() << endl;
}

