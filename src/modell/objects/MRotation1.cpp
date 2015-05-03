#include "mrotation1.h"
#include "opengl2.h"

MRotation1::MRotation1() {
    setStep(0.0);
    setMaxAngle(0.0);
}    

MRotation1::~MRotation1(void){}

void MRotation1::update(void){}

void MRotation1::setStep(GLfloat step){
 this->step = step;
}

GLfloat MRotation1::getStep(void){
 return step;
}

void MRotation1::setMaxAngle(GLfloat step){
 this->maxAngle = maxAngle;
}

GLfloat MRotation1::getMaxAngle(void){
 return maxAngle;
}

