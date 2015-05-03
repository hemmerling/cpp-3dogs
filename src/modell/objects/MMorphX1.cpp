#include "mmorphx1.h"
#include "opengl2.h"

MMorphX1::MMorphX1(void) {}    

MMorphX1::MMorphX1(ZCuboid *command){
 this->command = command;
}

MMorphX1::MMorphX1(ZCuboid *command, WSphere *command2){
 this->command = command;
 this->command2 = command2;
}

MMorphX1::~MMorphX1(void) {}

void MMorphX1::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MMorphX1::update(GLubyte aKey){
  update2();
}

void MMorphX1::update(GLint aKey){
  update2();
}

void MMorphX1::setPeriod(GLfloat aPeriod)
{
  this->aPeriod = aPeriod;
}

GLfloat MMorphX1::getPeriod(void)
{
  return aPeriod;
}

void MMorphX1::setAngle(GLfloat aAngle)
{
  this->aAngle = aAngle;
}
						
GLfloat MMorphX1::getAngle(void)
{
  return aAngle;
}

void MMorphX1::setStep(GLfloat step){
 this->step = step;
}

GLfloat MMorphX1::getStep(void){
 return step;
}

void MMorphX1::update(void){

     setAngle(getAngle()+getStep());

     command->setWidth(command->getDefaultWidth()
                 + command->getDefaultWidth() * cos ( getAngle()/getPeriod() ));
     command->setLength(command->getDefaultLength()
                + command->getDefaultLength() * cos ( getAngle()/getPeriod() ));
     command->setHeight(command->getDefaultHeight()
                + command->getDefaultHeight() * cos ( getAngle()/getPeriod() ));
     command2->setOuterRadius(command2->getDefaultOuterRadius()
           + command2->getDefaultOuterRadius() * sin ( getAngle()/getPeriod() ));
}

void MMorphX1::update2(void){
}

