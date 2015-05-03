#include "wlookat.h"
#include "opengl2.h"

WLookAt::WLookAt(void) {
  setPeriod(2 * PI); 
  setAngle(0.0);
  setBlickpunkt(0);
}    

WLookAt::~WLookAt(void) {}

void WLookAt::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

void WLookAt::setPeriod(GLfloat aPeriod)
{
  this->aPeriod = aPeriod;
}

GLfloat WLookAt::getPeriod(void)
{
  return aPeriod;
}

void WLookAt::setAngle(GLfloat aAngle)
{
  this->aAngle = aAngle;
}
						
GLfloat WLookAt::getAngle(void)
{
  return aAngle;
}

void WLookAt::setStep(GLfloat step){
 this->step = step;
}

GLfloat WLookAt::getStep(void){
 return step;
}

void WLookAt::setBlickpunkt(GLuint blickpunkt){
 this->blickpunkt = blickpunkt;
}

GLuint WLookAt::getBlickpunkt(void){
 return blickpunkt;
}

void WLookAt::update(void){

  setAngle(getAngle()+getStep());

  switch ( getBlickpunkt() )
   {
     case 0: calc0(); break;
     case 1: calc1(); break;
     case 2: calc2(); break;
     case 3: calc3(); break;
     default:; // ungueltiger Wert von "blickpunkt"
   };  
}

void WLookAt::calc0(void){
    
    getEye()->setX(-5.0);
	getEye()->setY(-5.0);
	getEye()->setZ(5.0);

    getCenter()->setX(0.0);
	getCenter()->setY(0.0);
	getCenter()->setZ(0.0);

    getUp()->setX(0.0);
	getUp()->setY(0.0);
	getUp()->setZ(1.0);
}

void WLookAt::calc1(void){

    getEye()->setX(10.0 * cos ( getAngle()/getPeriod() ));
	getEye()->setY(10.0 * sin ( getAngle()/getPeriod() ));
	getEye()->setZ(5.0 * ( 1 + sin ( getAngle()/getPeriod() )));

    getCenter()->setX(0.0);
	getCenter()->setY(0.0);
	getCenter()->setZ(0.0);

    getUp()->setX(0.0);
	getUp()->setY(0.0);
	getUp()->setZ(1.0);
  
}

void WLookAt::calc2(void){

    getEye()->setX(-5.0);
	getEye()->setY(-5.0);
	getEye()->setZ(5.0);

	getCenter()->setX(9.0 * cos ( getAngle()/getPeriod()) );
	getCenter()->setY(9.0 * sin ( getAngle()/getPeriod()) );
	getCenter()->setZ(3.0 * ( 0.7 + cos ( getAngle() / ( 1.25 * getPeriod() ) ) ) );

    getUp()->setX(0.0);
	getUp()->setY(0.0);
	getUp()->setZ(1.0);

}

void WLookAt::calc3(void){

    getEye()->setX(-5.0);
	getEye()->setY(-5.0);
	getEye()->setZ(5.0);

    getCenter()->setX(0.0);
	getCenter()->setY(0.0);
	getCenter()->setZ(0.0);

	getUp()->setX(cos ( getAngle()/getPeriod() ));
	getUp()->setY(sin ( getAngle()/getPeriod() ));
	getUp()->setZ(cos ( getAngle()/getPeriod() ));

}

