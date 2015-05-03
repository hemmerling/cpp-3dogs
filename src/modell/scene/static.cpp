#include "static.h"

Static::Static(void){};
Static::~Static(void){};

GLint Static::aTimePeriod;

// Vektor< VektorElement<ZCmd *>, ZCmd *>Static::aQueue2;
// Vektor< VektorElement<ZCmd *>, ZCmd *>Static::aDisplayListQueue2;
ZQueue Static::aQueue;
ZQueue Static::aDisplayListQueue;

ZInput Static::aZInput;

Coordinates Static::aEye;
Coordinates Static::aCenter;
Coordinates Static::aUp;

OpenGL Static::aOpenGL;    

GLint Static::getTimePeriod(void){
  return aTimePeriod;
}

GLint *Static::getPtrTimePeriod(void){
  return &aTimePeriod;
}

void Static::setTimePeriod(GLint vTimePeriod) {
  aTimePeriod = vTimePeriod;
}

ZInput *Static::getZInput(void){
  return &aZInput;
}

void Static::setEye(Coordinates vEye) {
  aEye = vEye;
}

Coordinates *Static::getEye(void) {
  return &aEye;
}

void Static::setCenter(Coordinates vCenter) {
  aCenter = vCenter;
}

Coordinates *Static::getCenter(void) {
  return &aCenter;
}

void Static::setUp(Coordinates vUp) {
  aUp = vUp;
}

Coordinates *Static::getUp(void) {
  return &aUp;
}

Vektor< VektorElement<ZCmd *>, ZCmd *> *Static::getQueue2(void) {
  return aQueue.getQueue();
}

Vektor< VektorElement<ZCmd *>, ZCmd *> *Static::getDisplayListQueue2(void) {
  return aDisplayListQueue.getQueue();
}

ZQueue *Static::getQueue(void) {
  return &aQueue;
}

ZQueue *Static::getDisplayListQueue(void) {
  return &aDisplayListQueue;
}

