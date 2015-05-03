#ifndef XRESHAPE_H
#define XRESHAPE_H

/**
 *  @package   3dogs
 *  @file      XReshape.h
 *  @brief     Repraesentation der Callback-Funktion 
 *             fuer Callback Resize
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/XReshape.h - 
 *             Repraesentation der Callback-Funktion 
 *             fuer Callback Resize
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
#include "../scene/static.h"
/** 
  *  @class    XReshape
  *  @brief    Repraesentation der Callback-Funktion 
  *            fuer Callback Resize
  */
class XReshape: public ZPerspective {

public:

    /**
      *   @fn       XReshape
      *   @brief    Konstruktur
      */
    XReshape(void);

    /**
      *   @fn       ~XReshape
      *   @brief    Dekonstruktur
      */    
    ~XReshape(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       setHeight(GLint height)
      *   @brief    Hoehe setzen
      *   @param    height
      */
 	virtual void setHeight(GLint height);					

    /**
      *   @fn       getHeight
      *   @brief    Hoehe holen
      *   @return   GLint
      */
	virtual GLint getHeight(void);	

    /**
      *   @fn       setWidth(GLint width)
      *   @brief    Breite setzen
      *   @param    width
      */
 	virtual void setWidth(GLint width);					

    /**
      *   @fn       getWidth
      *   @brief    Breite holen
      *   @return   GLint
      */
	virtual GLint getWidth(void);	

protected:

    /**
      *   @var      height
      *   @brief    Hoehe
      */
	GLint 	height;	

    /**
      *   @var      width
      *   @brief    Breite
      */
	GLint 	width;	
    
};
#endif // XRESHAPE_H

