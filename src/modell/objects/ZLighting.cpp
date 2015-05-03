#include "zlighting.h"
#include "opengl2.h"

ZLighting::ZLighting(void) { 

  setNumber(0);
  // setLightPosition(*(new LPosition<GLfloat>( 0.0, 0.0, 1.0, 0.0 ) ) );    
  setLightPosition( new Coordinates( 0.0, 0.0, 0.0), 1.0);    
  setSpotlightDirection(*(new Coordinates( 0.0, 0.0, -1.0)));
  setSpotlightExponent(1.0);
  setSpotlightCutoffAngle(45.0);

  setViewDirectionZ(false);

  setLightRGBA(*(new Light<GLfloat>( 0.2, 0.2, 0.2, 1.0 )));
  setAmbientRGBA(*(new Light<GLfloat>( 0.0, 0.0, 0.0, 1.0 )));
  setDiffuseRGBA(*(new Light<GLfloat>( 1.0, 1.0, 1.0, 1.0 )));
  setSpecularRGBA(*(new Light<GLfloat>( 1.0, 1.0, 1.0, 1.0 )));

} 
   
ZLighting::~ZLighting(void) {}    

void ZLighting::display(OpenGL &aOpenGL){
    aOpenGL.display(this);
}

void ZLighting::setLightPosition(LPosition<GLfloat> lightPosition) 
{ 
  this->lightPosition = lightPosition; 
}

void ZLighting::setLightPosition(Coordinates *coordinates, GLfloat w)
{ 
  lightPosition.setX(coordinates->getX());  
  lightPosition.setY(coordinates->getY());  
  lightPosition.setZ(coordinates->getZ());  
  lightPosition.setW(w);  
}

Coordinates *ZLighting::getSpotlightDirection(void){
  return &spotlightDirection; 
}    

void ZLighting::setSpotlightDirection(Coordinates spotlightDirection){
  this->spotlightDirection = spotlightDirection; 
}    

GLfloat *ZLighting::getSpotlightExponent(void){
  return &spotlightExponent; 
}    

void ZLighting::setSpotlightExponent(GLfloat spotlightExponent){
  this->spotlightExponent = spotlightExponent; 
}    

GLfloat *ZLighting::getSpotlightCutoffAngle(void){
  return &spotlightCutoffAngle; 
}    
  
void ZLighting::setSpotlightCutoffAngle(GLfloat spotlightCutoffAngle){
  this->spotlightCutoffAngle = spotlightCutoffAngle; 
}

GLfloat *ZLighting::getLightPosition(void) 
{ 
  return lightPosition.getV(); 
}

GLfloat *ZLighting::getLightRGBA(void) 
{ 
  return lightRGBA.getV(); 
}

void ZLighting::setLightRGBA(Light<GLfloat> lightRGBA) 
{ 
  this->lightRGBA = lightRGBA; 
}

GLfloat *ZLighting::getAmbientRGBA(void) 
{ 
  return ambientRGBA.getV(); 
}

void ZLighting::setAmbientRGBA(Light<GLfloat> ambientRGBA) 
{ 
  this->ambientRGBA = ambientRGBA; 
}

GLfloat *ZLighting::getDiffuseRGBA(void) 
{ 
  return diffuseRGBA.getV(); 
}

void ZLighting::setDiffuseRGBA(Light<GLfloat> diffuseRGBA) 
{ 
  this->diffuseRGBA = diffuseRGBA; 
}

GLfloat *ZLighting::getSpecularRGBA(void) 
{ 
  return specularRGBA.getV(); 
}

void ZLighting::setSpecularRGBA(Light<GLfloat> specularRGBA) 
{ 
  this->specularRGBA = specularRGBA; 
}

bool ZLighting::isViewDirectionZ(void)					
{
  return viewDirectionZ;
}

void ZLighting::setViewDirectionZ(bool aViewDirectionZ)					
{
  this->viewDirectionZ = aViewDirectionZ;
}

GLuint &ZLighting::getNumber(void) {
   return number;
}	

void ZLighting::setNumber(GLuint number) {
   this->number = number;
}
  
