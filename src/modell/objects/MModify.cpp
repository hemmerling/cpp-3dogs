#include "mmodify.h"
#include "opengl2.h"

MModify::MModify(void) {
    // Bei Beginn ist das Objekt nicht angehalten
    setLock(false);
}    

MModify::~MModify(void) {}

void MModify::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void MModify::update(void){
 update3();    
} 

void MModify::update(GLubyte aKey){
 update2();    
} 

void MModify::update(GLint aKey){
 update2();    
} 

void MModify::setLock(bool lock){
 this->lock = lock;
}

bool MModify::isLock(void){
 return lock;
}

void MModify::update2(void){
 setLock(!isLock());
}

void MModify::update3(void){
 if ( isLock() ) 
  {
    // Keine Veraenderung
  }
 else
  {
    // Veraenderung
    update4();
  };
}

void MModify::update4(void){
  // Es passiert nur was in den abgeleiteten Klassen
}

