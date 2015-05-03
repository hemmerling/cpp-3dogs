#ifndef ZGRATICULE_H
#define ZGRATICULE_H

/**
 *  @package   3dogs
 *  @file      ZGraticule.h
 *  @brief     Unbeleuchtetes Achsenkreuz
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZGraticule.h - 
 *             Unbeleuchtetes Achsenkreuz
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
  *  @class    ZGraticule
  *  @brief    Unbeleuchtetes Achsenkreuz
  */
class ZGraticule: public ZObject {

  public:

    /**
      *   @fn       ZGraticule
      *   @brief    Konstruktur
      */
    ZGraticule(void);

    /**
      *   @fn       ~ZGraticule
      *   @brief    Dekonstruktur
      */    
    ~ZGraticule(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

 	/**
      *   @fn       setLength ( GLfloat length )
      *   @brief    Laenge einer Achse des Achsenkreuzes setzen
      *             Eine gemeinsame Laenge fuer alle 3 Koordinaten !
      *   @param    length Laenge einer Achse
      */
	void setLength ( GLfloat length );

    /**
      *   @fn       getLength
      *   @brief    Laenge einer Achse des Achsenkreuzes holen
      *   @return   GLfloat
      */
	GLfloat getLength( void );

 	/**
      *   @fn       setLineWidth ( GLfloat lineWidth )
      *   @brief    Breite einer Achse des Achsenkreuzes setzen
      *             Eine gemeinsame Breite fuer alle 3 Koordinaten !
      *   @param    lineWidth Breite einer Achse
      */
	void setLineWidth ( GLfloat lineWidth );

    /**
      *   @fn       getLineWidth
      *   @brief    Breite einer Achse des Achsenkreuzes holen
      *   @return   getLineWidth
      */
	GLfloat getLineWidth( void );
    
  protected:
  
    /**
      *   @fn       length
      *   @brief    Laenge einer der Achsen
      */
	GLfloat 	length; 		

    /**
      *   @fn       lineWidth
      *   @brief    Dicke einer der Achsen
      */
	GLfloat 	lineWidth; 		

};

#endif // ZGRATICULE_H

