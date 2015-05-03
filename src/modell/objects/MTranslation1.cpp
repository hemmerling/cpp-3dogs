#include "mtranslation1.h"
#include "opengl2.h"

MTranslation1::MTranslation1() {
    setStep(0.0);
}    

MTranslation1::~MTranslation1(void){}

void MTranslation1::setStep(GLfloat step){
 this->step = step;
}

GLfloat MTranslation1::getStep(void){
 return step;
}

