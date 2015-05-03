#include "mtransx4.h"
#include "opengl2.h"

MTransX4::MTransX4(void) {}    

MTransX4::MTransX4(MTranslation2 *command){
 this->command = command;
}

MTransX4::~MTransX4(void) {}

void MTransX4::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MTransX4::setStep(GLfloat step){
 this->step = step;
}

GLfloat MTransX4::getStep(void){
 return step;
}

void MTransX4::update2(void){
  command->setSpeed(command->getSpeed()+getStep());
  cout << "Speed erhoehen auf = " << command->getSpeed() << endl;

}

