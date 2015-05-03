#ifndef XMOUSE_H
#define XMOUSE_H

/**
 *  @package   3dogs
 *  @file      XMouse.h
 *  @brief     Repraesentation der Callback-Funktion 
 *             fuer Callback MouseFunc
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/XMouse.h - 
 *             Repraesentation der Callback-Funktion 
 *             fuer Callback MouseFunc
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

#include "xmotion.h"

/** 
  *  @class    XMouse
  *  @brief    Repraesentation der Callback-Funktion 
  *            fuer Callback MouseFunc
  *  Datum 2004-06-17
  *  @version 1.0
  *  @author Rolf Hemmerling
  */
class XMouse: public XMotion {

public:

    /**
      *   @fn       XMouse
      *   @brief    Konstruktur
      */
    XMouse(void);

    /**
      *   @fn       ~XMouse
      *   @brief    Dekonstruktur
      */ 
    ~XMouse(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getButton
      *   @brief    Taste/Button holen
      *   @return   GLint
      */
 	virtual GLint getButton(void);					

    /**
      *   @fn       setButton(GLint button)
      *   @brief    Taste/Button setzen
      *   @param    button
      */
 	virtual void setButton(GLint button);					

    /**
      *   @fn       getState
      *   @brief    Status holen
      *   @return   GLint
      */
 	virtual GLint getState(void);					

    /**
      *   @fn       setState(GLint state)
      *   @brief    Status setzen
      *   @param    state
      */
 	virtual void setState(GLint state);					

protected:

    /**
      *   @var      button
      *   @brief    Taste / Button
      */
 	GLint button;					

    /**
      *   @var      state
      *   @brief    Status
      */
 	GLint state;					

};
#endif // XMOUSE_H

