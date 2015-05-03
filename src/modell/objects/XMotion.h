#ifndef XMOTION_H
#define XMOTION_H

/**
 *  @package   3dogs
 *  @file      XMotion.h
 *  @brief     Virtuelle Klasse fuer Callback-Funktion 
 *             fuer Callback MotionFunc
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/XMotion.h - 
 *             Virtuelle Klasse fuer Callback-Funktion 
 *             fuer Callback MotionFunc
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
 
#include "zcmd.h"

/** 
  *  @class    XMotion
  *  @brief    Virtuelle Klasse fuer Callback-Funktion 
  *            fuer Callback MotionFunc
  */
class XMotion: public ZCmd {

public:

    /**
      *   @fn       XMotion
      *   @brief    Konstruktur
      */
    XMotion(void);

    /**
      *   @fn       ~XMotion
      *   @brief    Dekonstruktur
      */    
    ~XMotion(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getX
      *   @brief    X holen
      *   @return   GLint&
      */
 	virtual GLint &getX(void);					

    /**
      *   @fn       setX(GLint x)
      *   @brief    X setzen
      *   @param    x
      */
 	virtual void setX(GLint x);					

    /**
      *   @fn       getY
      *   @brief    Y holen
      *   @return   GLint&
      */
 	virtual GLint &getY(void);					

    /**
      *   @fn       setY(GLint y)
      *   @brief    Y setzen
      *   @param    y
      */
 	virtual void setY(GLint y);					

protected:

    /**
      *   @var      x
      *   @brief    X-Koordinate
      */
 	GLint x;					

    /**
      *   @var      y
      *   @brief    Y-Koordinate
      */
 	GLint y;					

};
#endif // XMOTION_H

