#ifndef WCYLINDER_H
#define WCYLINDER_H

/**
 *  @package   3dogs
 *  @file      WCylinder.h
 *  @brief     Mein Zylinder
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/WCylinder.h - 
 *             Mein Zylinder
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
 
#include "ycone.h"
#include "wquadric.h"

// notwendige Forwaertsdeklarationen
class OpenGL;

/** 
  *  @class    WCylinder
  *  @brief    Mein Zylinder
  */
class WCylinder: public YCone {

  public:

    /**
      *   @fn       WCylinder
      *   @brief    Konstruktur
      */
    WCylinder(void);

    /**
      *   @fn       ~WCylinder
      *   @brief    Dekonstruktur
      */    
    ~WCylinder(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getTop
      *   @brief    Top holen
      *   @return   GLfloat&
      */
	virtual GLfloat &getTop(void);	

	/**
      *   @fn       setTop(GLfloat top)
      *   @brief    Top setzen
      *   @param    top
      */
	virtual void setTop(GLfloat top); 					

    /**
      *   @fn       getQuadric
      *   @brief    Quadric holen
      *   @return   WQuadric*
      */
	virtual WQuadric *getQuadric(void);	

	/**
      *   @fn       setQuadric(WQuadric *quadric)
      *   @brief    Quadric setzen
      *   @param    quadric
      */
	virtual void setQuadric(WQuadric *quadric); 					

  protected:    
    /**
      *  Top
      */
	GLfloat 	top;	
			
    /**
      *   @var      quadric
      *   @brief    Zeiger auf Quadric
      */
	WQuadric 	*quadric;
};

#endif // WCYLINDER_H
