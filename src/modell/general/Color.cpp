#include "color.h"

Color::~Color(){}

Color::Color(){
  // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
}

Color::Color(GLfloat r, GLfloat g, GLfloat b){
  init(r, g, b, 0.5);
}

Color::Color(GLfloat r, GLfloat g, GLfloat b, GLfloat a){
  init(r, g, b, a);
}

void Color::setB(GLfloat b){ vektor[2] = b; }
GLfloat& Color::getB(){ return vektor[2]; }
void Color::setG(GLfloat g){ vektor[1] = g; }
GLfloat& Color::getG(){ return vektor[1]; }
void Color::setR(GLfloat r){ vektor[0] = r; }
GLfloat& Color::getR(){ return vektor[0]; }

