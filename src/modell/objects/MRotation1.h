#ifndef MROTATION1_H
#define MROTATION1_H

/**
 *  @package   3dogs
 *  @file      MRotation1.h
 *  @brief     Meine veraenderliche OpenGL Rotation1
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MRotation1.h - 
 *             Meine veraenderliche OpenGL Rotation1
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
 
#include "zrotation.h"

/** 
  *  @class    MRotation1   
  *  @brief    Meine veraenderliche OpenGL Rotation1
  */
class MRotation1: public ZRotation {

public:

    /**
      *   @fn       MRotation1
      *   @brief    Konstruktur
      */
    MRotation1(void);
 
    /**
      *   @fn       ~MRotation1
      *   @brief    Dekonstruktur
      */    
    ~MRotation1(void);

    /**
      *   @fn       update
      *   @brief    Berechnungen bei jedem GLUT-Zyklus durchfuehren
      */
    virtual void update(void);

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
      *   @fn       setMaxAngle(GLfloat maxAngle)
      *   @brief    Maximalen Winkel setzen
      *             Wird noch nicht verwendet
      *   @param    maxAngle
      */
    virtual void setMaxAngle(GLfloat maxAngle);

    /**
      *   @fn       getMaxAngle
      *   @brief    Maximalen Winkel holen
      *             Wird noch nicht verwendet
      *   @return   GLfloat
      */
    virtual GLfloat getMaxAngle(void);

protected:

	/**
      *   @var      step
      *   @brief    Schrittgroesse
      */
	GLfloat step;		     

	/**
      *   @var      maxAngle
      *   @brief    Maximaler Winkel
      */
	GLfloat maxAngle;		     

};
#endif // MROTATION1_H
