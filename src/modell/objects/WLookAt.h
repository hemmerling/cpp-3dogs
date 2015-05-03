#ifndef WLOOKAT_H
#define WLOOKAT_H

/**
 *  @package   3dogs
 *  @file      WLookAt.h
 *  @brief     GLU LookAt
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/WLookAt.h - 
 *             GLU LookAt
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

#include "zperspective.h"

/** 
  *  @class    WLookAt
  *  @brief    GLU LookAt
  */
class WLookAt: public ZPerspective {

public:

    /**
      *   @fn       WLookAt
      *   @brief    Konstruktur
      */
    WLookAt(void);

    /**
      *   @fn       ~WLookAt
      *   @brief    Dekonstruktur
      */    
    ~WLookAt(void);

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

    /**
      *   @fn       setBlickpunkt(GLuint blickpunkt)
      *   @brief    Blickpunkt setzen
      *   @param    blickpunkt Nummer der Blickpunkt-Funktion
      */
    virtual void setBlickpunkt(GLuint blickpunkt);

    /**
      *   @fn       getBlickpunkt
      *   @brief    Blickpunkt holen
      *   @return   GLuint Nummer der Blickpunkt-Funktion
      */
    virtual GLuint getBlickpunkt(void);

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

protected:

    /**
      *   @fn       calc0
      *   @brief    Berechnen der neuen Perspektive #0
      */
    void calc0();

    /**
      *   @fn       calc1
      *   @brief    Berechnen der neuen Perspektive #1
      */
    void calc1();

    /**
      *   @fn       calc2
      *   @brief    Berechnen der neuen Perspektive #2
      */
    void calc2();

    /**
      *   @fn       calc3
      *   @brief    Berechnen der neuen Perspektive #3
      */
    void calc3();

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

	/**
      *   @var      blickpunkt
      *   @brief    Blickpunkt 
      *             Nummer der Blickpunkt-Funktion
      */
	GLuint blickpunkt;		     
   
};
#endif // WLOOKAT_H

