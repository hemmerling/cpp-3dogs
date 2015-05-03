#include "coordinates.h"
Coordinates::~Coordinates(){}

Coordinates::Coordinates(){
  // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
}

Coordinates::Coordinates(GLfloat x, GLfloat y, GLfloat z){
  init(x, y, z);
}

