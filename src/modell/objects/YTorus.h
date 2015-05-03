#ifndef YTORUS_H
#define YTORUS_H

/**
 *  @package   3dogs
 *  @file      YTorus.h
 *  @brief     Torus
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/YTorus.h - 
 *             Torus
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

#include "ysphere.h"

// notwendige Forwaertsdeklarationen
class OpenGL;

/** 
  *  @class    YTorus
  *  @brief    YTorus
  */
class YTorus: public YSphere {

  public:

    /**
      *   @fn       YTorus
      *   @brief    Konstruktur
      */
    YTorus(void);

    /**
      *   @fn       ~YTorus
      *   @brief    Dekonstruktur
      */    
    ~YTorus(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getInnerRadius
      *   @brief    Inneren Radius holen
      *   @return   GLfloat&
      */
	virtual GLfloat &getInnerRadius(void);	

	/**
      *   @fn       setInnerRadius(GLfloat innerRadius)
      *   @brief    Inneren Radius setzen
      *   @param    innerRadius
      */
	virtual void setInnerRadius(GLfloat innerRadius); 					

  protected:    

    /**
      *   @var      innerRadius
      *   @brief    Innerer Radius
      */
	GLfloat 	innerRadius;	
	
	/**
      *   @var      outerRadius
      *   @brief    Auesserer Radius
      */
	GLfloat 	outerRadius; 					
		
};

#endif // YTORUS_H

