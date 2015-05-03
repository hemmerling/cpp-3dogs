#include "zobject.h"
#include "opengl2.h"

bool ZObject::smoothShading;

ZObject::ZObject(void) {
    getColor().setR(0.0);
    getColor().setG(0.0);
    getColor().setB(0.0);
    setLighting(true);
    setTransparenz(false);
    setTextureDisplay(false);
    setTexture(NULL);
    setTextureName(0);
}    

ZObject::~ZObject(void){}

Color &ZObject::getColor(void)
{
  return color;
}

void ZObject::setColor(Color color)
{
  this->color = color;
}

bool ZObject::isLighting(void)					
{
  return lighting;
}

void ZObject::setLighting(bool vLighting)					
{
  lighting = vLighting;
}

void ZObject::update1(OpenGL &aOpenGL){
  aOpenGL.display1(this);
}

void ZObject::update2(OpenGL &aOpenGL){
  aOpenGL.display2(this);
}

bool ZObject::isSmoothShading(void)					
{
  return smoothShading;
}

void ZObject::setSmoothShading(bool vSmoothShading)					
{
  smoothShading = vSmoothShading;
}

bool ZObject::isTransparenz(void)					
{
  return transparenz;
}

void ZObject::setTransparenz(bool transparenz)					
{
  this->transparenz = transparenz;
}

bool ZObject::isTextureDisplay(void){
  return textureDisplay;
}    

void ZObject::setTextureDisplay(bool textureDisplay){
  this->textureDisplay = textureDisplay;
}    

WTexture *ZObject::getTexture(void){
  return texture;
}    

void ZObject::setTexture(WTexture *texture){
  this->texture = texture;
}    

GLuint ZObject::getTextureName(void){
  return textureName;
}    

void ZObject::setTextureName(GLuint textureName){
  this->textureName = textureName;
}    	

