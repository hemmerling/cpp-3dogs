#ifndef MTRANSLATION2_H
#define MTRANSLATION2_H

/**
 *  @package   3dogs
 *  @file      MTranslation2.h
 *  @brief     Meine veraenderliche OpenGL Translation2, 
 *             die eine Drehung in der Bewegung berücksichtigt
 *             z.B. fuer die Bewegung von Fahrzeugteilen 
 *             oder Fahrzeugen
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MTranslation2.h - 
 *             Meine veraenderliche OpenGL Translation2, 
 *             die eine Drehung in der Bewegung berücksichtigt
 *             z.B. fuer die Bewegung von Fahrzeugteilen 
 *             oder Fahrzeugen
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

#include "mtranslation1.h"
#include "mrotation2.h"

/** 
  *  @class    MTranslation2
  *  @brief    Meine veraenderliche OpenGL Translation2, 
  *            die eine Drehung in der Bewegung berücksichtigt
  *            z.B. fuer die Bewegung von Fahrzeugteilen oder Fahrzeugen
  */
class MTranslation2: public MTranslation1 {

public:

    /**
      *   @fn       MTranslation2
      *   @brief    Konstruktur
      */
    MTranslation2(void);

    /**
      *   @fn       MTranslation2(MRotation1 *command)
      *   @brief    Konstruktur
      *   @param    command
      */
    MTranslation2(MRotation1 *command);
 
     /**
      *   @fn       ~MTranslation2
      *   @brief    Dekonstruktur
      */    
    ~MTranslation2(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    void display(OpenGL &aOpenGL);

    /**
      *   @fn       update
      *   @brief    Berechnungen in jedem GLUT-Zyklus durchfuehren
      */
    virtual void update(void);

    /**
      *   @fn       setDirection(GLfloat direction)
      *   @brief    Richtung der Bewegung setzen
      *   @param    direction Werte: VORWAERTS, RUECKWAERTS, STOP
      */
    virtual void setDirection(GLfloat direction);

    /**
      *   @fn       getDirection
      *   @brief    Richtung der Bewegung holen
      *   @return   GLfloat  direction, Werte: VORWAERTS, RUECKWAERTS, STOP
      */
    virtual GLfloat getDirection(void);

    /**
      *   @fn       setSpeed(GLfloat speed)
      *   @brief    Geschwindigkeit setzen
      *   @param    speed Geschwindikeit
      */
    virtual void setSpeed(GLfloat speed);

    /**
      *   @fn       getSpeed
      *   @brief    Geschwindigkeit holen
      *   @return   GLfloat speed Geschwindikeit
      */
    virtual GLfloat getSpeed(void);

    /**
      *   @fn       setRotation(MRotation1 *command)
      *   @brief    Rotation setzen
      *   @param    command
      */
    void setRotation(MRotation1 *command);

    /**
      *   @fn       getRotation
      *   @brief    Rotation holen
      *   @return   MRotation1*
      */
    MRotation1 *getRotation();

protected:

    /**
      *   @var      command
      *   @brief    Kommando, dessen Parameter 
      *             geaendert werden sollen
      */
   MRotation1 *command;

    /**
      *   @var      direction
      *   @brief    Richtung der Bewegung: 
      *             Werte: VORWAERTS, RUECKWAERTS, STOP
      */
    GLfloat direction;

    /**
      *   @var      speed
      *   @brief    Betrag der Geschwindigkeit der Bewegung: 
      */
    GLfloat speed;

    /**
      *   @var      update2
      *   @brief    Veraenderung durchfuehren
      */
    virtual void update2(void);

};
#endif // MTRANSLATION2_H
