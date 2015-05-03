#ifndef ZCUBOID_H
#define ZCUBOID_H

/**
 *  @package   3dogs
 *  @file      ZCuboid.h
 *  @brief     Quader
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZCuboid.h - 
 *             Quader
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

#include "zrectangle.h"

/** 
  *  @class    ZCuboid
  *  @brief    Quader
  */
class ZCuboid: public ZRectangle
{
  public:

    /**
      *   @fn       ZCuboid
      *   @brief    Konstruktur
      */
    ZCuboid(void);

    /**
      *   @fn       ~ZCuboid
      *   @brief    Dekonstruktur
      */    
    ~ZCuboid(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getWidth
      *   @brief    Weite holen
      *   @return   GLfloat&
      */
 	virtual GLfloat &getWidth(void);					

    /**
      *   @fn       setWidth(GLfloat width)
      *   @brief    Weite setzen
      *   @param    width
      */
 	virtual void setWidth(GLfloat width);					

    /**
      *   @fn       getDefaultWidth
      *   @brief    Default-Weite holen
      *   @return   GLfloat&
      */
 	virtual GLfloat &getDefaultWidth(void);					

    /**
      *   @fn       setDefaultWidth(GLfloat width)
      *   @brief    Default-Weite setzen
      *   @param    width
      */
 	virtual void setDefaultWidth(GLfloat width);					
  
  protected:
  
    /**
      *   @var      width
      *   @brief    Weite
      */
	GLfloat 	width; 		

    /**
      *   @var      defaultWidth
      *   @brief    Default-Weite
      */
	GLfloat 	defaultWidth; 		
  	
};

#endif // ZCUBOID_H

