#include "wperspective.h"
#include "opengl2.h"

GLfloat WPerspective::getFieldOfViewAngle(void)
{
  return fieldOfViewAngle;
}

void WPerspective::setFieldOfViewAngle(GLfloat fieldOfViewAngle)
{
  this->fieldOfViewAngle = fieldOfViewAngle;
}
						
GLfloat WPerspective::getAspectRatio(void)
{
  return aspectRatio;
}

void WPerspective::setAspectRatio(GLfloat aspectRatio)
{
  this->aspectRatio = aspectRatio;
}

GLfloat WPerspective::getNearDistance(void)
{
  return nearDistance;
}

void WPerspective::setNearDistance(GLfloat nearDistance)
{
  this->nearDistance = nearDistance;
}

GLfloat WPerspective::getFarDistance(void)
{
  return farDistance;
}

void WPerspective::setFarDistance(GLfloat farDistance)
{
  this->farDistance = farDistance;
}				

void WPerspective::setPeriod(GLfloat aPeriod)
{
  this->aPeriod = aPeriod;
}

void WPerspective::setAngle(GLfloat aAngle)
{
  this->aAngle = aAngle;
}
						
GLfloat WPerspective::getAngle(void)
{
  return aAngle;
}

GLfloat WPerspective::getPeriod(void)
{
  return aPeriod;
}
		
WPerspective::WPerspective(void) {
    setAngle(0.0);
    setPeriod(0.0); 
    setFieldOfViewAngle(65.0); // 65.0
    setAspectRatio(1.0);
    setFarDistance(50.0); // 50.0
    setNearDistance(14.0);
}    

WPerspective::~WPerspective(void){}

void WPerspective::update(void){
    if ( getPeriod() != 0.0 ) {
      setNearDistance( 4 + 10 * ( 1 + sin ( getAngle()/getPeriod() ) ) ); }
    else { 
      // nearDistance wird nicht automatisch geaendert
    };
}

void WPerspective::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}


