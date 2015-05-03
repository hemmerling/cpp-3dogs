#ifndef YCUBE_H
#define YCUBE_H

/**
 *  @package   3dogs
 *  @file      YCube.h
 *  @brief     Wuerfel
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/YCube.h - 
 *             Wuerfel
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

#include "zobject.h"

/** 
  *  @class    YCube
  *  @brief    Wuerfel
  */
class YCube: public ZObject
{
  public:

    /**
      *   @fn       YCube
      *   @brief    Konstruktur
      */
    YCube(void);

    /**
      *   @fn       ~YCube
      *   @brief    Dekonstruktur
      */    
    ~YCube(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);
  
    /**
      *   @fn       getHeight
      *   @brief    Hoehe holen
      *   @return   GLfloat&
      */
	virtual GLfloat &getHeight(void);						

    /**
      *   @fn       setHeight(GLfloat height)
      *   @brief    Hoehe setzen
      *   @param    height
      */
 	virtual void setHeight(GLfloat height);					

    /**
      *   @fn       getDefaultHeight
      *   @brief    Default-Hoehe holen
      *   @return   GLfloat&
      */
	virtual GLfloat &getDefaultHeight(void);						

    /**
      *   @fn       setDefaultHeight(GLfloat defaultHeight)
      *   @brief    Default-Hoehe setzen
      *   @param    defaultHeight
      */
 	virtual void setDefaultHeight(GLfloat defaultHeight);					

  protected:
  	
	/**
      *   @var      height
      *   @brief    Hoehe
      */
	GLfloat 	height; 					

	/**
      *   @var      defaultHeight
      *   @brief    Default-Hoehe
      */
	GLfloat 	defaultHeight; 					
 	
};

#endif // YCUBE_H

