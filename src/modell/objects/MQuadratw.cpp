#include "mquadratw.h"

MQuadratW::MQuadratW(void) {
    // Basisklassen-Variablen werden vom Basisklassen-Konstruktor initialisiert
    getColor().setR(1.0);
    getColor().setG(1.0);
    getColor().setB(1.0);
}    

MQuadratW::~MQuadratW(void){}

void MQuadratW::display(OpenGL &aOpenGL){
    ZRectangle::display(aOpenGL);
}

