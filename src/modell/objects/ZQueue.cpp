#include "zqueue.h"
#include "zexec.h"
ZQueue::ZQueue(void) {}    
ZQueue::~ZQueue(void) {}

void ZQueue::display(OpenGL &aOpenGL){
  
  // Ausfuehren der "eigenen" Queue
  ZExec aZExec;
  aZExec.setQueue(this);
  aZExec.display(aOpenGL);
}					

Vektor< VektorElement<ZCmd *>, ZCmd *> *ZQueue::getQueue(void)
{
  return &aQueue;
}

void ZQueue::push_back ( VektorElement<ZCmd *> element)    
{
    getQueue()->push_back(element);
}

void ZQueue::push_back ( ZCmd *command, GLuint name)    
{
    getQueue()->push_back(command, name);
}

