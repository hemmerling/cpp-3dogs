#include "zevent.h"
ZEvent::ZEvent(void) {}    
ZEvent::~ZEvent(void) {}

void ZEvent::display(OpenGL &aOpenGL){
  
  // Ausfuehren der "eigenen" Queue
  ZExec aZExec;
  aZExec.setQueue(this);
  // Berechnungen durchfuehren
  aZExec.update();
}					

