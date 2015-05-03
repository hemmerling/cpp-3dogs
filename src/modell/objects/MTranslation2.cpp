#include "mtranslation2.h"
#include "opengl2.h"

MTranslation2::MTranslation2() {
 setDirection(STOP);
}    

MTranslation2::MTranslation2(MRotation1 *command){
 this->command = command;
 setDirection(STOP);
}

MTranslation2::~MTranslation2(void){}

void MTranslation2::update(){
  update2();
}

void MTranslation2::update2(){
    
   GLfloat aSummandX = 0.0, aSummandY = 0.0;

   /* 
      Nur gueltig unter der Annahme "Drehung um die Z-Achse"
      command->getCoordinates().getX() = 0
      command->getCoordinates().getY() = 0
      command->getCoordinates().getZ() = 1
    */
                    
   // TODO: Automatische Winkel-Reduktion in MRotation1 ???!??                 
   
   GLfloat aAngle = Mathe::modulo( command->getAngle(), 360.0);

   GLfloat aAngleRAD = ( aAngle * 2 * PI / 360.0 );
   
  // cout << "orig. Winkel =" << command->getAngle() << 
  //         ", reduz. Winkel =" << aAngle << ", Richtung =" << getDirection() << endl;

   
   aSummandX = getStep()*cos(aAngleRAD) * getDirection() * getSpeed();
   aSummandY = getStep()*sin(aAngleRAD) * getDirection() * getSpeed();
   
   // Vorzeichen-richtige Bewegung
   getCoordinates().setX(getCoordinates().getX() + aSummandX );
   getCoordinates().setY(getCoordinates().getY() + aSummandY );
}

void MTranslation2::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

void MTranslation2::setDirection(GLfloat direction){
 this->direction = direction;
 cout << "********** Richtung wird gesetzt ***** =" << direction << endl;
}
    
GLfloat MTranslation2::getDirection(void){
 return direction;
}

void MTranslation2::setSpeed(GLfloat speed){
 this->speed = speed;
}

GLfloat MTranslation2::getSpeed(void){
 return speed;
}

void MTranslation2::setRotation(MRotation1 *command)
{ 
  this->command = command; 
}

MRotation1 *MTranslation2::getRotation()
{ 
  return command; 
}

