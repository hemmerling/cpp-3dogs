#ifndef MMORPHX1_H
#define MMORPHX1_H

/**
 *  @package   3dogs
 *  @file      MMorphX1.h
 *  @brief     Morphen von Objekten
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MMorphX1.h - 
 *             Morphen von Objekten
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

#include "zcuboid.h"
#include "wsphere.h"

/** 
  *  @class    MMorphX1   
  *  @brief    Morphen von Objekten
  */
class MMorphX1: public ZCmd {

public:

    /**
      *   @fn       MMorphX1
      *   @brief    Konstruktur
      */
    MMorphX1(void);

    /**
      *   @fn       MMorphX1(ZCuboid *command)
      *   @brief    Konstruktur mit Uebergabe des zu registrierenden 
      *             Kommandos, das spaeter ausgefuehrt werden soll
      *   @param    command
      */
    MMorphX1(ZCuboid *command);

    /**
      *   @fn       MMorphX1(ZCuboid *command, WSphere *command2)
      *   @brief    Konstruktur mit Uebergabe des zu registrierenden 
      *             Kommandos, das spaeter ausgefuehrt werden soll
      *   @param    command
      *   @param    command2
      */
    MMorphX1(ZCuboid *command, WSphere *command2);
    
    /**
      *   @fn       ~MMorphX1
      *   @brief    Dekonstruktur
      */    
    ~MMorphX1(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       update
      *   @brief    Berechnungen bei jedem GLUT-Zyklus durchfuehren
      */
    virtual void update(void);

    /**
      *   @fn       update(GLubyte aKey)
      *   @brief    Als Reaktion auf Benutzereingabe ausfuehren
      *   @param    aKey
      */
    virtual void update(GLubyte aKey);

    /**
      *   @fn       update(GLint aKey)
      *   @brief    Als Reaktion auf Benutzereingabe ausfuehren
      *   @param    aKey
      */
    virtual void update(GLint aKey);

    /**
      *   @fn       setPeriod(GLfloat aPeriod)
      *   @brief    Periodenlaenge setzen
      *   @param    aPeriod
      */
    virtual void setPeriod(GLfloat aPeriod);

    /**
      *   @fn       getPeriod
      *   @brief    Periodenlaenge holen
      *   @return   GLfloat
      */
    virtual GLfloat getPeriod(void);

    /**
      *   @fn       setAngle(GLfloat aAngle)
      *   @brief    Drehwinkel setzen
      *   @param    aAngle
      */
    virtual void setAngle(GLfloat aAngle);

    /**
      *   @fn       getAngle
      *   @brief    Drehwinkel holen
      *   @return   GLfloat
      */
    virtual GLfloat getAngle(void);

    /**
      *   @fn       setStep(GLfloat step)
      *   @brief    Schrittgroesse setzen
      *   @param    step
      */
    virtual void setStep(GLfloat step);

    /**
      *   @fn       getStep
      *   @brief    Schrittgroesse holen
      *   @return   GLfloat
      */
    virtual GLfloat getStep(void);

 protected:

    /**
      *   @var      command
      *   @brief    Kommando, dessen Parameter 
      *             geaendert werden sollen
      */
   ZCuboid *command;

    /**
      *   @var      command2
      *   @brief    Zweites Kommando, dessen Parameter 
      *             geaendert werden sollen
      */
   WSphere *command2;

    /**
      *   @fn       update2
      *   @brief    Veraenderung durchfuehren
      */
   virtual void update2(void);

	/**
      *   @var      aAngle
      *   @brief    Drehwinkel
      */
	GLfloat aAngle;		     

	/**
      *   @var      aPeriod
      *   @brief    Periode T, in RAD (  2*PI (RAD) = 360 Grad (DEG) )
      */
	GLfloat aPeriod;		     

	/**
      *   @var      step
      *   @brief    Schrittgroesse
      */
	GLfloat step;		     

};
#endif // MMORPHX1_H

