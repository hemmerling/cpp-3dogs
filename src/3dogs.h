#ifndef TDOGS_H
#define TDOGS_H

/**
 *  @package   3dogs
 *  @file      3dogs.h
 *  @brief     Header-Datei fuer das Programm 3DOGS
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  3dogs.h - Header-Datei fuer das Programm 3DOGS
 *            Projekt-globale Header-Datei
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

#include <iostream>
#include <cmath>
#include <ctype.h>
#ifdef  __GNUC__
#include <stdexcept>
#endif

#include <vector>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <gl/glext.h>
#include <gl/glut.h>
#include <gl/glaux.h>

using namespace std;

/** 
 *  @var      MAX_NAMEN_LAENGE
 *  @brief    Konstante MAX_NAMEN_LAENGE
 */
const unsigned int MAX_NAMEN_LAENGE = 80;

// Namen von OpenGL-Objekten

/**
 *  @def      NAME_KEGEL
 *  @brief    Kegel
 *            Name eines OpenGL-Objekts
 */
#define NAME_KEGEL "Kegel"
/**
 *  @def      NAME_GROSSEKUGEL
 *  @brief    GrosseKugel
 *            Name eines OpenGL-Objekts
 */
#define NAME_GROSSEKUGEL "GrosseKugel"
/**
 *  @def      NAME_KLEINEKUGEL
 *  @brief    KleineKugel
 *            Name eines OpenGL-Objekts
 */
#define NAME_KLEINEKUGEL "KleineKugel"
/**
 *  @def      NAME_RING
 *  @brief    Ring
 *            Name eines OpenGL-Objekts
 */
#define NAME_RING "Ring"
/**
 *  @def      NAME_SZENE_KIPPEN
 *  @brief    SzeneKippen
 *            Name eines OpenGL-Objekts
 */
#define NAME_SZENE_KIPPEN "SzeneKippen"

// Konstanten

/** 
 *  @var      ID_NOID
 *  @brief    Konstante ID_NOID
 */
const GLuint ID_NOID = 0;
/** 
 *  @var      ID_KEGEL
 *  @brief    Konstante ID_KEGEL
 */
const GLuint ID_KEGEL = 1;

/** 
 *  @var      ID_GROSSEKUGEL
 *  @brief    Konstante ID_GROSSEKUGEL
 */
const GLuint ID_GROSSEKUGEL = 2;

/** 
 *  @var      ID_KLEINEKUGEL
 *  @brief    Konstante ID_KLEINEKUGEL
 */
const GLuint ID_KLEINEKUGEL = 3;

/** 
 *  @var      ID_RING
 *  @brief    Konstante ID_RING
 */
const GLuint ID_RING = 4;

/** 
 *  @var      ID_SZENE_KIPPEN
 *  @brief    Konstante ID_SZENE_KIPPEN
 */
const GLuint ID_SZENE_KIPPEN = 5;

/** 
 *  @var      ID_MYSCHWARZESQUADRAT
 *  @brief    Konstante ID_MYSCHWARZESQUADRAT
 */
const GLuint ID_MYSCHWARZESQUADRAT = 6;

/** 
 *  @var      ID_KUGELIMURSPRUNG
 *  @brief    Konstante ID_KUGELIMURSPRUNG
 */
const GLuint ID_KUGELIMURSPRUNG = 7;

/** 
 *  @var      ID_TRANSLATION_KUGELIMURSPRUNG
 *  @brief    Konstante ID_TRANSLATION_KUGELIMURSPRUNG
 */
const GLuint ID_TRANSLATION_KUGELIMURSPRUNG = 8;

/** 
 *  @var      ID_VERAENDERUNG1
 *  @brief    Konstante ID_VERAENDERUNG1
 */
const GLuint ID_VERAENDERUNG1 = 9;

/** 
 *  @var      ID_VERAENDERUNG2
 *  @brief    Konstante ID_VERAENDERUNG2
 */
const GLuint ID_VERAENDERUNG2 = 10;

/** 
 *  @var      ID_ROTATION1
 *  @brief    Konstante ID_ROTATION1
 */
const GLuint ID_ROTATION1 = 11;

/** 
 *  @var      ID_ROTATION2
 *  @brief    Konstante ID_ROTATION2
 */
const GLuint ID_ROTATION2 = 12;

/** 
 *  @var      ID_ROTATION3
 *  @brief    Konstante ID_ROTATION3
 */
const GLuint ID_ROTATION3 = 13;

/** 
 *  @var      PI
 *  @brief    Kreiszahl PI
 */
const GLfloat PI = 3.141592654;

/** 
 *  @var      TIME_PERIOD
 *  @brief    Periodendauer in Millisekunden
 */
const GLuint TIME_PERIOD = 20;

/** 
 *  @var      POLL_INTERVAL
 *  @brief    Abfrage-Intervall fuer Joysticks
 */
const GLuint POLL_INTERVAL = 200;

/** 
 *  @var      WIDTH
 *  @brief    Breite des Fensters
 */
const GLuint WIDTH = 640;

/** 
 *  @var      HEIGHT
 *  @brief    Hoehe des Fensters
 */
const GLuint HEIGHT = 480;

/** 
 *  @var      VORWAERTS
 *  @brief    Zustand einer Bewegung: Vorwaertsbewegung
 */
const GLint VORWAERTS = -1;

/** 
 *  @var      RUECKWAERTS
 *  @brief    Zustand einer Bewegung: Ruckwaertsbewegung
 */
const GLint RUECKWAERTS = +1;

/** 
 *  @var      STOP
 *  @brief    Zustand einer Bewegung: Anhalten
 */
const GLint STOP = 0;

/** 
 *  @var      MAXTEXTURES
 *  @brief    Maximale Zahl der Elemente einer Textur
 */
const GLuint MAXTEXTURES = 3;

#include "modell/general/color.h"
#include "modell/general/coordinates.h"

// Template-Klassen ( .h + .cpp )
#include "modell/general/quatro.h"
#include "modell/general/quatro.cpp"
#include "modell/general/light.h"
#include "modell/general/light.cpp"
#include "modell/general/lposition.h"
#include "modell/general/lposition.cpp"
#include "modell/general/equation.h"
#include "modell/general/equation.cpp"
#include "modell/general/modifizierer.h"
#include "modell/general/modifizierer.cpp"
#include "modell/general/vektorelement.h"
#include "modell/general/vektorelement.cpp"
#include "modell/general/vektor.h"
#include "modell/general/vektor.cpp"
#include "modell/general/mapcontainer.h"
#include "modell/general/mapcontainer.cpp"

#endif // TDOGS_H

