#include "wtexture.h"
#include "opengl2.h"

WTexture::WTexture() {
 setLoaded(false);
 for (  GLuint aLaufVariable = 0; aLaufVariable < MAXTEXTURES; aLaufVariable++) 
  {
      vektor[aLaufVariable] = 0;
  };
}

WTexture::~WTexture(){}

void WTexture::display(OpenGL &aOpenGL){
  aOpenGL.display(this);
}

GLuint WTexture::getTextureName(GLuint name){ 
  if ( name < MAXTEXTURES )  
   { 
       return vektor[name];
   }
  else
   {
      cout << "WTexture: Invalid Texture Name" << endl;
      exit(0);
   };    
  return (0);
}

GLuint *WTexture::getV() {
 return vektor;
}

bool WTexture::isLoaded(void){ 
  return loaded;
}    

void WTexture::setLoaded(bool loaded) {
  this->loaded = loaded;
}    

