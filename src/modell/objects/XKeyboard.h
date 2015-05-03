#ifndef XKEYBOARD_H
#define XKEYBOARD_H

/**
 *  @package   3dogs
 *  @file      XKeyboard.h
 *  @brief     Repraesentation der Callback-Funktion 
 *             fuer Callback KeyboardfuncFunc
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/XKeyboard.h - 
 *             Repraesentation der Callback-Funktion 
 *             fuer Callback KeyboardfuncFunc
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
  *  @class    XKeyboard
  *  @brief    Repraesentation der Callback-Funktion 
  *            fuer OpenGL KeyboardfuncFunc
  */
class XKeyboard: public XMotion {

public:

    /**
      *   @fn       XKeyboard
      *   @brief    Konstruktur
      */
    XKeyboard(void);

    /**
      *   @fn       ~XKeyboard
      *   @brief    Dekonstruktur
      */    
    ~XKeyboard(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getKey
      *   @brief    Taste/Key holen
      *   @return   GLubyte
      */
 	virtual GLubyte getKey(void);					

    /**
      *   @fn       setKey(GLubyte key)
      *   @brief    Taste/Key setzen
      *   @param    key
      */
 	virtual void setKey(GLubyte key);					


protected:

    /**
      *   @var      key
      *   @brief    Taste / Key
      */
 	GLubyte key;					

};
#endif // XKEYBOARD_H

