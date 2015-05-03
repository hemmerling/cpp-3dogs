#include "xtimer.h"
#include "opengl2.h"

XTimer::XTimer(void) {}    
XTimer::~XTimer(void) {}

void XTimer::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

void XTimer::setTimePeriod(GLint *aTimePeriod)
{
  this->aTimePeriod = aTimePeriod;
}
						
GLint XTimer::getTimePeriod(void)
{
  return *aTimePeriod;
}

