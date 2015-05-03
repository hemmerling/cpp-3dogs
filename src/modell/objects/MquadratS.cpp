#include "mquadrats.h"

MQuadratS::MQuadratS(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
    setLength(0.6);
    setHeight(0.6);
}    

MQuadratS::~MQuadratS(void){}

void MQuadratS::display(OpenGL &aOpenGL){
    ZRectangle::display(aOpenGL);
}
 
