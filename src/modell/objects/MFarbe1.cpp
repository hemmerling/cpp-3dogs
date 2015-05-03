#include "mfarbe1.h"
#include "opengl2.h"

MFarbe1::MFarbe1(void) {}    

MFarbe1::MFarbe1(ZObject *command){
 this->command = command;
 setStatus(false);

}

MFarbe1::~MFarbe1(void) {}

bool MFarbe1::isStatus(void){
 return aStatus;
}    

void MFarbe1::setStatus(bool aStatus){
    this->aStatus = aStatus;
}     					

void MFarbe1::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MFarbe1::update(void){
    update2();
}

void MFarbe1::update(GLubyte aKey){
  setStatus(! isStatus() );
}

void MFarbe1::update2(void){
  if (isStatus())
   {
     command->getColor().setG(1.0);
   }
  else
   {
     command->getColor().setG(0.0);
   };
}    

