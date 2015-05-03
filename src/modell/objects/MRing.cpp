#include "mring.h"

MRing::MRing(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
  	setInnerRadius(0.2);
  	setOuterRadius(1.0);
  	setSides(17);
    setRings(17);
    getColor().setR(1.0);
    getColor().setG(120.0/255.0);
    getColor().setB(0.0);
}    

void MRing::display(OpenGL &aOpenGL){
    YTorus::display(aOpenGL);
}
 
