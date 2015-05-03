#ifndef OPENGL_H
#define OPENGL_H

/**
 *  @package   3dogs
 *  @file      opengl.h
 *  @brief     Methoden, die OpenGL, GLU und 
 *             Callback Funktionen aufrufen
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  framework/opengl/opengl.h - 
 *             Methoden, die OpenGL, GLU und 
 *             Callback Funktionen aufrufen
 *
 *  Copyright 2004-2015 Rolf Hemmerling
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an
 *  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 *  either express or implied.
 *  See the License for the specific language governing permissions
 *  and limitations under the License.
 *
 *  Haupt-Entwicklungszeit: 2004-03-01 - 2004-06-17
 */

#include "../../3dogs.h"

// notwendige Forwaertsdeklarationen
class CallbackDrawScene;

class ZAction;
class ZModification;
class ZInput;
class ZCmd;
class ZQueue;
class ZEvent;
class ZObject;
class ZPop;
class ZPush;
class ZRotation;
class ZTranslation;
class ZRectangle;
class ZCuboid;
class ZExec;
class ZDisplayList;
class ZClipPlane;
class ZLighting;
class ZGraticule;

class WLookAt;
class WQuadric;
class WCylinder;
class WPerspective;
class WTexture;
class WSphere;

class YTorus;
class YSphere;
class YCube;
class YCone;
class YDodec;
class YOct;
class YTetr;
class YIcos;
class YPot;

class XInit;
class XKeyboard;
class XMouse;
class XMotion;
class XPMotion;
class XEntry;
class XVisibility;
class XIdle;
class XTimer;
class XMState;
class XSpecial;
class XMStatus;
class XOverlay;
class XWStatus;
class XKeyboardUp;
class XSpecialUp;
class XJoystick;
class XDisplay;
class XReshape;

class MLookX0;
class MLookX1;
class MLookX2;
class MLookX3;
class MRotation1;
class MRotation2;
class MModify;
class MRotX1;
class MRotX2;
class MRotX3;
class MRotX4;
class MTranslation1;
class MTranslation2;
class MTransX1;
class MTransX2;
class MTransX3;
class MTransX4;
class MTransX5;
class MMorphX1;
class MSzeneKippen;
class MPosition;
class MHoeherZ;
class MTieferZ;
class MUrsprungZ;
class MFarbe;
class MFarbe1;
class MPerspective;
class Static;

/**
  *  @class    OpenGL    
  *  @brief    Methoden, die OpenGL, GLU und 
  *            Callback Funktionen aufrufen
  *  @author   Rolf Hemmerling
  */
class OpenGL {

public:

OpenGL(void);    

~OpenGL(void);

/** 
  *   @fn      OpenGLErrorCallback ( GLenum error_code )
  *   @brief   OpenGL Callback-Fehlerroutine fuer Quadrics
  *   @param   error_code 
  */
void OpenGLErrorCallback ( GLenum error_code );

/** 
  *   @fn      display(XInit *x)
  *   @brief   OpenGL Kommandos fuer Callback-Init ausfuehren
  *   @param   x 
  */
void display(XInit *x);

/** 
  *   @fn      display1(XDisplay *x)
  *   @brief   OpenGL Kommandos fuer Callback-Draw 
  *            ausfuehren, vor dem Aufruf von "myDrawScene()"
  *   @param   x
  */
void display1(XDisplay *x);

/** 
  *   @fn      display2(XDisplay *x)
  *   @brief   OpenGL Kommandos fuer Callback-Draw 
  *            ausfuehren, nach dem Aufruf von "myDrawScene()"
  *   @param   x
  */
void display2(XDisplay *x);

/** 
  *   @fn      OpenGL::display(XReshape *x)
  *   @brief   OpenGL Kommandos fuer Callback-Resize 
  *            ausfuehren
  *   @param   x
  */
void OpenGL::display(XReshape *x);

/** 
  *   @fn      display(XKeyboard *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-Keyboard-Handler ausfuehren
  *   @param   x
  */
void display(XKeyboard *x);

/** 
  *   @fn      display(XMouse *x)
  *   @brief   OpenGL Kommandos fuer Callback-Mouse-Handler 
  *            ausfuehren
  *   @param   x
  */
void display(XMouse *x);

/** 
  *   @fn      display(XMotion *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-Motion-Handler ausfuehren
  *   @param   x
  */
void display(XMotion *x);

/** 
  *   @fn      display(XPMotion *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-PassiveMotion-Handler ausfuehren
  *   @param   x
  */
void display(XPMotion *x);

/** 
  *   @fn      display(XEntry *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-Entry-Handler ausfuehren
  *   @param   x
  */
void display(XEntry *x);

/** 
  *   @fn      display(XVisibility *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-Visibility-Handler ausfuehren
  *   @param   x
  */
void display(XVisibility *x);

/** 
  *   @fn      display(XIdle *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-Idle-Handler ausfuehren
  *   @param   x
  */
void display(XIdle *x);

/** 
  *   @fn      display(XTimer *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-HandleTimer ausfuehren
  *   @param   x
  */
void display(XTimer *x);

/** 
  *   @fn      display(XMState *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-MState-Handler ausfuehren
  *   @param   x
  */
void display(XMState *x);

/** 
  *   @fn      display(XSpecial *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-Special-Handler ausfuehren
  *   @param   x
  */
void display(XSpecial *x);

/** 
  *   @fn      display(XMStatus *x)
  *   @brief   OpenGL Kommandos fuer Callback-MStatus-Handler ausfuehren
  *   @param   x
  */
void display(XMStatus *x);

/** 
  *   @fn      display(XOverlay *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-OverlayDisplay-Handler ausfuehren
  *   @param   x
  */
void display(XOverlay *x);

/** 
  *   @fn      display(XWStatus *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-WStatus-Handler ausfuehren
  *   @param   x
  */
void display(XWStatus *x);

/** 
  *   @fn      display(XKeyboardUp *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-KeyboardUp-Handler ausfuehren
  *   @param   x
  */
void display(XKeyboardUp *x);

/** 
  *   @fn      display(XSpecialUp *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-SpecialUp-Handler ausfuehren
  *   @param   x
  */
void display(XSpecialUp *x);

/** 
  *   @fn      display(XJoystick *x)
  *   @brief   OpenGL Kommandos fuer 
  *            Callback-Joystick-Handler ausfuehren
  *   @param   x
  */
void display(XJoystick *x);

/** 
  *   @fn      display(ZCmd *x)
  *   @brief   OpenGL Kommandos aufrufen.
  *            Es macht keinen Sinn, dass diese Methode aufgerufen wird !!
  *   @param   x
  */
void display(ZCmd *x);

/** 
  *   @fn      display(ZObject *x)
  *   @brief   OpenGL Objekt aufrufen.
  *            Es macht keinen Sinn, dass diese Methode aufgerufen wird !!
  *   @param   x
  */
void display(ZObject *x);

/** 
  *   @fn      display1(ZObject *x)
  *   @brief   OpenGL Objekt "vorher" aufrufen.
  *   @param   x
  */
void display1(ZObject *x);

/** 
  *   @fn      display2(ZObject *x)
  *   @brief   OpenGL Objekt "nachher" aufrufen.
  *   @param   x
  */
void display2(ZObject *x);

/** 
  *   @fn      display(YTorus *x)
  *   @brief   OpenGL Kommandos fuer Torus ausfuehren
  *   @param   x
  */
void display(YTorus *x);

/** 
  *   @fn      display(YSphere *x)
  *   @brief   OpenGL Kommandos fuer GLUT Sphere ausfuehren
  *   @param   x
  */
void display(YSphere *x);

/** 
  *   @fn      display(YCube *x)
  *   @brief   OpenGL Kommandos fuer einen Wuerfel ausfuehren
  *   @param   x
  */
void display(YCube *x);

/** 
  *   @fn      display(YCone *x)
  *   @brief   OpenGL Kommandos fuer Cone ausfuehren
  *   @param   x
  */
void display(YCone *x);

/** 
  *   @fn      display(WQuadric *x)
  *   @brief   OpenGL Kommandos fuer GLU Quadric ausfuehren
  *   @param   x
  */
void display(WQuadric *x);

/** 
  *   @fn      display(WCylinder *x)
  *   @brief   OpenGL Kommandos fuer GLU Zylinder ausfuehren
  *   @param   x
  */
void display(WCylinder *x);

/** 
  *   @fn      OpenGL::display(YDodec *x)
  *   @brief   OpenGL Kommandos fuer Dodec ausfuehren
  *   @param   x
  */
void OpenGL::display(YDodec *x);

/** 
  *   @fn      OpenGL::display(YOct *x)
  *   @brief   OpenGL Kommandos fuer Oct ausfuehren
  *   @param   x
  */
void OpenGL::display(YOct *x);

/** 
  *   @fn      OpenGL::display(YTetr *x)
  *   @brief   OpenGL Kommandos fuer Tetr ausfuehren
  *   @param   x
  */
void OpenGL::display(YTetr *x);

/** 
  *   @fn      OpenGL::display(YIcos *x)
  *   @brief   OpenGL Kommandos fuer Icos ausfuehren
  *   @param   x
  */
void OpenGL::display(YIcos *x);

/** 
  *   @fn      OpenGL::display(YPot *x)
  *   @brief   OpenGL Kommandos fuer Pot ausfuehren
  *   @param   x
  */
void OpenGL::display(YPot *x);

/** 
  *   @fn      display(ZPop *x)
  *   @brief   OpenGL Kommandos fuer Pop ausfuehren
  *   @param   x
  */
void display(ZPop *x);

/** 
  *   @fn      display(ZPush *x)
  *   @brief   OpenGL Kommandos fuer Push ausfuehren
  *   @param   x
  */
void display(ZPush *x);

/** 
  *   @fn      display(ZRotation *x)
  *   @brief   OpenGL Kommandos fuer Rotation ausfuehren
  *   @param   x
  */
void display(ZRotation *x);

/** 
  *   @fn      display(ZTranslation *x)
  *   @brief   OpenGL Kommandos fuer Translation ausfuehren
  *   @param   x
  */
void display(ZTranslation *x);

/** 
  *   @fn      display(WLookAt *x)
  *   @brief   OpenGL Kommandos fuer GLU LookAt ausfuehren
  *   @param   x
  */
void display(WLookAt *x);

/** 
  *   @fn      display(ZRectangle *x)
  *   @brief   OpenGL Kommandos fuer ein Rechteck ausfuehren
  *   @param   x
  */
void display(ZRectangle *x);

/**
  *   @fn      display(ZCuboid *x)
  *   @brief   OpenGL Kommandos fuer einen Quader ausfuehren
  *   @param   x
  */
void display(ZCuboid *x);

/**
  *   @fn      store(ZDisplayList *x)
  *   @brief   Speichern einer OpenGL DisplayListe
  *   @param   x
  */
void store(ZDisplayList *x);

/**
  *   @fn      display(ZDisplayList *x)
  *   @brief   Ausfuehren einer OpenGL DisplayListe
  *   @param   x
  */
void display(ZDisplayList *x);

/**
  *   @fn      display(ZClipPlane *x)
  *   @brief   Ausfuehren einer OpenGL ClipPlane
  *   @param   x
  */
void display(ZClipPlane *x);

/** 
  *   @fn      display(ZLighting *x)
  *   @brief   OpenGL Kommandos fuer Lichtquellen ausfuehren
  *   @param   x
  */
void display(ZLighting *x);

/** 
  *   @fn      display(WPerspective *x)
  *   @brief   OpenGL Kommandos fuer GLU Perspective ausfuehren
  *   @param   x
  */
void display(WPerspective *x);

/** 
  *   @fn      display(ZGraticule *x)
  *   @brief   OpenGL Kommandos fuer Fadenkreuz ausfuehren
  *   @param   x
  */
void display(ZGraticule *x);

/** 
  *   @fn      display(MSzeneKippen *x)
  *   @brief   OpenGL Kommandos fuer "Szene Kippen" ausfuehren
  *   @param   x
  */
void display(MSzeneKippen *x);

/** 
  *   @fn      displayHelp
  *   @brief   "Hilfe" anzeigen
  *            Zur Zeit wird der Hilfebildschirm auf der 
  '            Text-Konsole ausgegeben
  */
void displayHelp(void); 

/** 
  *   @fn      OpenGLLoadTextureImage( const char *filename )
  *   @brief   BMP-Datei für Textur einlesen und MipMaps erstellen.
  *            Die Datei MUSS eine Größe von 2^m x 2^n haben!!!
  *   @param   filename
  */
void OpenGLLoadTextureImage( const char *filename );

/**
  *   @fn      display(WTexture *x)
  *   @brief   Mehrere Texturen laden
  *   @param   x
  */
void display(WTexture *x);

/** 
  *   @fn      display(WSphere *x)
  *   @brief   OpenGL Kommandos fuer GLU Sphere ausfuehren
  *   @param   x
  */
void display(WSphere *x);

};
// notwendige Include-Dateien erst nach den Definitionen lesen
#include "opengl3.h"

#endif // OPENGL_H

