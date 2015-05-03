#include "mtransx5.h"
#include "opengl2.h"

MTransX5::MTransX5(void) {}    

MTransX5::MTransX5(MTranslation2 *command){
 this->command = command;
}

MTransX5::~MTransX5(void) {}

void MTransX5::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MTransX5::update2(void){
  GLfloat aNewSpeed = 0.0;
  if ( command->getSpeed() > getStep() )
   {
     aNewSpeed = command->getSpeed()- getStep(); 
   }
  else
   { 
      aNewSpeed = 0.0;
   };
  command->setSpeed(aNewSpeed);
  cout << "Speed verringern auf = " << command->getSpeed() << endl;
}

