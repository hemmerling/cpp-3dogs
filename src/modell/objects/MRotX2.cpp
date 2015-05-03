#include "mrotx2.h"
#include "opengl2.h"

MRotX2::MRotX2(void) {}    

MRotX2::MRotX2(MRotation2 *command){
 this->command = command;
 setLock(false);
}

MRotX2::~MRotX2(void) {}

void MRotX2::update3(void){
  // Veraenderung
  command->setAngle(command->getAngle()+command->getStep()* ( command->getFactor()) );
  // cout << "Winkel ="  << command->getAngle() << endl;
}

