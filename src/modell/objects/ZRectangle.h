#ifndef ZRECTANGLE_H
#define ZRECTANGLE_H

/**
 *  @package   3dogs
 *  @file      ZRectangle.h
 *  @brief     Unbeleuchtetes Rechteck
 *             D.h. Licht wird fuer das Objekt 
 *             nicht berechnet !
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZRectangle.h - 
 *             Unbeleuchtetes Rechteck
 *             D.h. Licht wird fuer das Objekt 
 *             nicht berechnet !
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

#include "ycube.h"

/** 
  *  @class    ZRectangle
  *  @brief    Unbeleuchtetes Rechteck.
  *            D.h. Licht wird fuer das Objekt nicht berechnet !
  */
class ZRectangle: public YCube
{
  public:

    /**
      *   @fn       ZRectangle
      *   @brief    Konstruktur
      */
    ZRectangle(void);

    /**
      *   @fn       ~ZRectangle
      *   @brief    Dekonstruktur
      */    
    ~ZRectangle(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getLength
      *   @brief    Laenge holen
      *   @return   GLfloat&
      */
 	virtual GLfloat &getLength(void);					

    /**
      *   @fn       setLength(GLfloat length)
      *   @brief    Laenge setzen
      *   @param    length
      */
 	virtual void setLength(GLfloat length);					

    /**
      *   @fn       getDefaultLength
      *   @brief    Default-Laenge holen
      *   @return   GLfloat&
      */
 	virtual GLfloat &getDefaultLength(void);					

    /**
      *   @fn       setDefaultLength(GLfloat defaultLength)
      *   @brief    Default-Laenge setzen
      *   @param    defaultLength
      */
 	virtual void setDefaultLength(GLfloat defaultLength);					
  
  protected:
  
    /**
      *   @var      length
      *   @brief    Laenge
      */
	GLfloat 	length; 		

    /**
      *   @var      defaultLength
      *   @brief    Default-Laenge
      */
	GLfloat 	defaultLength; 		
  	
};

#endif // ZRECTANGLE_H

