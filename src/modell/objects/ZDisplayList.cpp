#include "zdisplaylist.h"
#include "opengl2.h"
ZDisplayList::ZDisplayList(void) {}    
ZDisplayList::~ZDisplayList(void) {}

void ZDisplayList::store(OpenGL &aOpenGL){
  aOpenGL.store(this);  
}					

void ZDisplayList::display(OpenGL &aOpenGL){
  aOpenGL.display(this);  
}					

void ZDisplayList::setListIndex(GLuint listIndex) {
  this->listIndex = listIndex;
}

GLuint ZDisplayList::getListIndex(void) {
  return listIndex;
}


