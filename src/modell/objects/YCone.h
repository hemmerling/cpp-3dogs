#ifndef YCONE_H
#define YCONE_H

/**
 *  @package   3dogs
 *  @file      YCone.h
 *  @brief     Kegel
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/YCone.h - 
 *             Kegel
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
  *  @class    YCone
  *  @brief    Kegel
  */
class YCone: public YCube
{
  public:

    /**
      *   @fn       YCone
      *   @brief    Konstruktur
      */
    YCone(void);

    /**
      *   @fn       ~YCone
      *   @brief    Dekonstruktur
      */    
    ~YCone(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getBase
      *   @brief    Basis-Radius holen
      *   @return   GLfloat
      */
 	virtual GLfloat &getBase(void);					

    /**
      *   @fn       setBase(GLfloat base)
      *   @brief    Basis-Radius setzen
      *   @param    base
     */
 	virtual void setBase(GLfloat base);					
  
    /**
      *   @fn       getSlices
      *   @brief    "Tortenstuecke" holen
      *   @return   GLint
      */
    virtual GLint &getSlices(void);

    /**
      *   @fn       setSlices(GLint slices)
      *   @brief    "Tortenstuecke" setzen
      *   @param    slices
      */
    virtual void setSlices(GLint slices);

    /**
      *   @fn       getStacks
      *   @brief    ( Hoehen -) Scheiben holen
      *   @return   GLint&
      */
 	virtual GLint &getStacks(void);					

    /**
      *   @fn       setStacks(GLint stacks)
      *   @brief    ( Hoehen -) Scheiben setzen
      *   @param    stacks
      */
 	virtual void setStacks(GLint stacks);					

  protected:
  
    /**
      *   @var      base
      *   @brief    Basis-Radius
      */
	GLfloat 	base; 		
	
	/**
      *   @var      slices
      *   @brief    "Tortenstuecke"
      */
	GLint 	slices; 					
	
	/**
      *   @var      stacks
      *   @brief    ( Hoehen -) Scheiben
      */
	GLint 	stacks; 					
 	
};

#endif // YCONE_H

