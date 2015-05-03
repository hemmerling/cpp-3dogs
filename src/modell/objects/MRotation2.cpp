#include "mrotation2.h"
#include "opengl2.h"

MRotation2::MRotation2() {
    setFactor(1.0);
}    

MRotation2::~MRotation2(void){}

void MRotation2::update(void){}

void MRotation2::setFactor(GLfloat factor){
 this->factor = factor;
}

GLfloat MRotation2::getFactor(void){
 return factor;
}

