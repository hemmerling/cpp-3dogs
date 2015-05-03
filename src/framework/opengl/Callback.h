#ifndef CALLBACK_H
#define CALLBACK_H

/**
 *  @package   3dogs
 *  @file      Callback.h
 *  @brief     Statische Callback-Methoden 
 *             fuer GLUT
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  framework/opengl/Callback.h - 
 *             Statische Callback-Methoden für GLUT
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
#include "openGL.h"
#include "opengl3.h"

#include "../../modell/scene/static.h"
#include "../../modell/scene/scene.h"

//void DrawObjects (void); // forward declaration, Funktions-Prototyp

/**
  *  @class    Callback    
  *  @brief    Statische Callback-Methoden fuer GLUT
  */
class Callback {

public:

/**
  *  @var      aStatic
  *  @brief    Statische Daten
  */
static Static aStatic;

/**
  *  @var      aScene
  *  @brief    Dynamische Methoden der OpenGL Szene
  */
static Scene *aScene;

/**
  *  @fn        Callback
  *  @brief     Konstruktor
  *  @author Rolf Hemmerling
  */
Callback(void);    

/**
  *  @fn        ~Callback
  *  @brief     Dekonstruktor
  *  @author Rolf Hemmerling
  */
~Callback(void);

/**
  *  @fn        myInit
  *  @brief     Initialisierung der globalen OpenGL-Einstellungen (s.u.):
  *             - z-Buffer
  *             - Licht Nr. 0
  *	            - Materialfarben
  *  @author Rolf Hemmerling
  */
static void myInit ( void );

/**
  *  @fn         myDisplayFunc
  *  @brief      Eventhandler fuer Windows 'draw'-Event:
  *              Bildschirm loeschen und alles neu zeichnen  
  *  @author     Rolf Hemmerling
  */
static void myDisplayFunc ( void );

/**
  *  @fn         myReshapeFunc ( int b, int h )
  *	 @brief      Eventhandler fuer Windows 'resize'-Event:
  *	             OpenGL-Abbildungstransformation anpassen
  *              Viewport setzen (ggf. mit Verzerrung)
  *  @param      b Window-Breite
  *  @param      h Window-Hoehe
  */
static void myReshapeFunc ( int b, int h );	


/**
  *  @fn         myKeyboardFunc (unsigned char key, int x, int y)
  *	 @brief      Eventhandler fuer 'Keyboard'-Events:
  *	             Verarbeiten von Tastatureingaben
  *  @param      key von der Tastatur eingegebenes Zeichen
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  */
static void myKeyboardFunc (unsigned char key, int x, int y);

/**
  *  @fn         myMouseFunc (int button, int state, int x, int y)
  *	 @brief      Eventhandler fuer 'Maus-Tasten'-Events:
  *	             Verarbeiten von Mausklicks
  *  @param      button Ausloesende Maus-Taste
  *  @param      state Status ob Maus-Taste gedrueckt oder geloest wurde
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  */
static void myMouseFunc (int button, int state, int x, int y);

/**
  *  @fn         myMotionFunc (int x, int y)
  *	 @brief      Eventhandler fuer 'Maus-Bewegungs'-Events:
  *	             Verarbeiten von Mausbewegungen, 
  *              waehrend eine Maus-Taste gedrueckt ist
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  */
static void myMotionFunc (int x, int y);

/**
  *  @fn         myPassiveMotionFunc(int x, int y)
  *	 @brief      Eventhandler fuer 'Maus-Passiv-Bewegungs'-Events:
  *	             Verarbeiten von Mausbewegungen, 
  *              waehrend keine Maus-Taste gedrueckt ist
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  */
static void myPassiveMotionFunc(int x, int y);

/**
  *  @fn         myEntryFunc(int state)
  *	 @brief      Eventhandler fuer 'Aktivieren des OpenGL 
  *              Anzeige-Fensters'-Events
  *  @param      state Zustand des Fensters
  */
static void myEntryFunc(int state);

/**
  *  @fn         myVisibilityFunc(int state)
  *	 @brief      Eventhandler fuer 'Sichtbarkeits'-Events 
  *  @param      state Zustand der Sichtbarkeit
  */
static void myVisibilityFunc(int state);

/**
  *  @fn         myIdleFunc
  *	 @brief      Eventhandler fuer 'Idle'-Events 
  */
static void myIdleFunc(void);

/**
  *  @fn         myTimerFunc (int t)
  *	 @brief      Eventhandler fuer 'Timer'-Event:
  *	             Varaiablen der Animation neu berechnen
  *  @param      t ( Parameter wird zur Zeit nicht ausgewertet  )
  */
static void myTimerFunc (int t);

/**
  *  @fn         myMenuStateFunc(int state)
  *	 @brief      Eventhandler fuer 'M-Zustands'-Event:
  *  @param      state Me-Zustand
  */
static void myMenuStateFunc(int state);

/**
  *  @fn         mySpecialFunc(int key, int x, int y)
  *	 @brief      Eventhandler fuer spezielle 'Keyboard'-Events:
  *	             Verarbeiten von Eingaben von 
  *              "Sondertasten" des IBM-PC, Mac,..
  *  @param      key von der Tastatur eingegebenes Zeichen
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  */
static void mySpecialFunc(int key, int x, int y);

/**
  *  @fn         mySpaceballMotionFunc(int x, int y, int z)
  *	 @brief      Eventhandler fuer spezielle 'Spaceball'-Events:
  *	             Verarbeiten von Bewegungen
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  *  @param      z Z-Koordinate
  */
static void mySpaceballMotionFunc(int x, int y, int z);

/**
  *  @fn         mySpaceballRotateFunc(int x, int y, int z)
  *	 @brief      Eventhandler fuer spezielle 'Spaceball'-Events:
  *	             Verarbeiten von Drehungen
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  *  @param      z Z-Koordinate
  */
static void mySpaceballRotateFunc(int x, int y, int z);

/**
  *  @fn         mySpaceballButtonFunc(int button, int state)
  *	 @brief      Eventhandler fuer spezielle 'Spaceball'-Events:
  *	             Verarbeiten von Tastendruecken
  *  @param      button Ausloesende Spaceball-Taste
  *  @param      state Status ob Spaceball-Taste gedrueckt oder geloest wurde
  */
static void mySpaceballButtonFunc(int button, int state);

/**
  *  @fn         myButtonBoxFunc(int button, int state)
  *	 @brief      Eventhandler fuer 'Maus-Tasten'-Events:
  *	             Verarbeiten von Mausklicks
  *  @param      button Ausloesende Maus-Taste
  *  @param      state Status ob Maus-Taste gedrueckt oder geloest wurde
  */
static void myButtonBoxFunc(int button, int state);

/**
  *  @fn         myDialsFunc(int dial, int value)
  *	 @brief      Eventhandler fuer 'Dialer'-Events:
  *	             Verarbeiten von ??
  *  @param      dial Dial
  *  @param      value gewaehlter Wert
  */
static void myDialsFunc(int dial, int value);

/**
  *  @fn         myTabletMotionFunc(int x, int y)
  *	 @brief      Eventhandler fuer "Graphik-Tablet"-Events 
  *	             Verarbeiten von Maus / Stift Bewegungen 
  *              des Graphik Tablets 
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  */
static void myTabletMotionFunc(int x, int y);

/**
  *  @fn         myTabletButtonFunc(int button, int state, int x, int y)
  *	 @brief      Eventhandler fuer "Graphik-Tablet"-Events 
  *	             Verarbeiten von Maus / Stift Bewegungen des Graphik Tablets 
  *  @param      button Ausloesende Maus / Stift -Taste
  *  @param      state Status ob Maus / Stift-Taste gedrueckt oder geloest wurde
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  */
static void myTabletButtonFunc(int button, int state, int x, int y);

/**
  *  @fn         myMenuStatusFunc(int status, int x, int y)
  *	 @brief      Eventhandler fuer 'M-Status'-Event:
  *  @param      status Me-Status
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  */
static void myMenuStatusFunc(int status, int x, int y);

/**
  *  @fn         myOverlayDisplayFunc
  *	 @brief      Eventhandler fuer 'Overlay'-Event:
  */
static void myOverlayDisplayFunc(void);

/**
  *  @fn         myWindowStatusFunc(int state)
  *	 @brief      Eventhandler fuer 'Windows-Status'-Event:
  *  @param      state Status des Fensters
  */
static void myWindowStatusFunc(int state);

/**
  *  @fn         myKeyboardUpFunc(unsigned char key, int x, int y)
  *	 @brief      Eventhandler fuer 'Keyboard'-Events:
  *	             Verarbeiten von Tastatureingaben 
  *              beim "Loslassen" einer Taste ?
  *  @param      key von der Tastatur eingegebenes Zeichen
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  */
static void myKeyboardUpFunc(unsigned char key, int x, int y);

/**
  *  @fn         mySpecialUpFunc(int key, int x, int y)
  *	 @brief      Eventhandler fuer spezielle 'Keyboard'-Events:
  *	             Verarbeiten von Eingaben von 
  *              "Sondertasten" beim "Loslassen" einer Taste?
  *  @param      key von der Tastatur eingegebenes Zeichen
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  */
static void mySpecialUpFunc(int key, int x, int y);

/**
  *  @fn         myJoystickFunc(unsigned int buttonMask, int x, int y, int z)
  *	 @brief      Eventhandler fuer spezielle 'Joystick'-Events:
  *	             Verarbeiten von Eingaben vom Joystick
  *  @param      buttonMask Maske, welche Buttons abgefragt werden sollen
  *  @param      x X-Koordinate
  *  @param      y Y-Koordinate
  *  @param      z Z-Koordinate
  */
static void myJoystickFunc(unsigned int buttonMask, int x, int y, int z);

/**
  *  @fn         myDrawScene
  *  @brief      Zeichnen aller Objekte
  */
static void myDrawScene ( void );

/**
  *  @fn         myQuadricError ( GLenum error_code )
  *	 @brief      Eventhandler fuer 'Quadrics' Fehler
  *  @param      error_code Fehler-Code, der im Klartext ausgegeben werden soll
  *
  *  Es wird erwartet, dass ein Zeichen von der Tastatur und dann "ENTER"
  *  eingegeben wird.
  *
  *  WENN diese Callback-Routine eingeplant wird, MUSS
  *  hier das Programm bei ihrem Aufruf mit exit() beendet werden. 
  *  SONST Laufzeitfehler nach dem Ruecksprung in die aufrufende GLU-Bibliothek :-(
  * 
  *  Erzwingen des Funktionsaufrufs z.B. durch unrichtigen negativen Parameter
  *  beim Aufruf von OpenGL GLU-Funktionen, die Quadrics verwenden:
  *  B = -1;   
  *  gluCylinder ( Q, B, T, H,SL, ST );
  */
static void myQuadricError ( GLenum error_code );
  
};
#endif // CALLBACK_H

