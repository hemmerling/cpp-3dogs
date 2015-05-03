#include "wquadric.h"
#include "opengl2.h"

WQuadric::WQuadric(void) {
  setDrawStyle(GLU_FILL);
  setNormals(GLU_SMOOTH);
  setOrientation(GLU_OUTSIDE);
  setTexture(GL_TRUE);
  setQuadric(NULL);
}    

WQuadric::~WQuadric(void) {}

void WQuadric::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

GLenum &WQuadric::getDrawStyle(void){
    return drawStyle;
}    

void WQuadric::setDrawStyle(GLenum drawStyle){
     this->drawStyle = drawStyle;
}	

GLenum &WQuadric::getNormals(void){
    return normals;
}

void WQuadric::setNormals(GLenum normals){
     this->normals = normals;
}

GLenum &WQuadric::getOrientation(void){
    return orientation;
}    

void WQuadric::setOrientation(GLenum orientation){
    this->orientation = orientation;
}    

GLboolean &WQuadric::getTexture(void){
    return texture;
}    

void WQuadric::setTexture(GLboolean texture){
    this->texture = texture;
}    

GLUquadric *WQuadric::getQuadric(void){
    return quadric;
}    	

void WQuadric::setQuadric(GLUquadric *quadric){
    this->quadric = quadric;
}

