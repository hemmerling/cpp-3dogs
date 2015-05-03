#ifndef MROTATION2_H
#define MROTATION2_H

/**
 *  @package   3dogs
 *  @file      MRotation2.h
 *  @brief     Meine veraenderliche OpenGL Rotation2
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MRotation2.h - 
 *             Meine veraenderliche OpenGL Rotation2
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
 
#include "mrotation1.h"

/** 
  *  @class    MRotation2
  *  @brief    Meine veraenderliche OpenGL Rotation2
  */
class MRotation2: public MRotation1 {

public:

    /**
      *   @fn       MRotation2
      *   @brief    Konstruktur
      */
    MRotation2(void);
 
     /**
      *   @fn       ~MRotation2
      *   @brief    Dekonstruktur
      */    
   ~MRotation2(void);

    /**
      *   @fn       update
      *   @brief    Berechnungen bei jedem GLUT-Zyklus durchfuehren
      */
    virtual void update(void);

    /**
      *   @fn       setFactor(GLfloat factor)
      *   @brief    Faktor setzen
      *   @param    factor
      */
    virtual void setFactor(GLfloat factor);

    /**
      *   @fn       getFactor
      *   @brief    Faktor holen
      *   @return   GLfloat
      */
    virtual GLfloat getFactor(void);

protected:

	/**
      *   @var      factor
      *   @brief    Faktor
      */
	GLfloat factor;		     

};
#endif // MYROTATION2_H
 
