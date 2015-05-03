#include "xjoystick.h"
#include "opengl2.h"

XJoystick::XJoystick(void) {
 setButtonMask(0);
}    

XJoystick::~XJoystick(void) {}

void XJoystick::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

GLint &XJoystick::getZ(void) 
{ 
  return z; 
}

void XJoystick::setZ(GLint z) 
{ 
  this->z = z; 
}

GLint XJoystick::getButtonMask(void) 
{ 
  return buttonMask; 
}

void XJoystick::setButtonMask(GLint buttonMask) 
{ 
  this->buttonMask = buttonMask; 
}

