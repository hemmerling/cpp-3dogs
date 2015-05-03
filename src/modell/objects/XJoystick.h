#ifndef XJOYSTICK_H
#define XJOYSTICK_H

/**
 *  @package   3dogs
 *  @file      XJoystick.h
 *  @brief     Repraesentation der Callback-Funktion 
 *             fuer Callback JoystickFunc
 *             Funktioniert unter Windows nur mit 
 *             traditionellen Joysticks, d.h.
 *             nicht mit Joysticks der 
 *             "Microsoft Sidewinder" Klasse
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/XJoystick.h - 
 *             Repraesentation der Callback-Funktion 
 *             fuer Callback JoystickFunc
 *             Funktioniert unter Windows nur mit 
 *             traditionellen Joysticks, d.h.
 *             nicht mit Joysticks der 
 *             "Microsoft Sidewinder" Klasse
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
  *  @class    XJoystick
  *  @brief    Repraesentation der Callback-Funktion fuer 
  *            Callback JoystickFunc
  *            Funktioniert unter Windows nur mit 
  *            traditionellen Joysticks, d.h.
  *            nicht mit Joysticks der "Microsoft Sidewinder" Klasse
  */
class XJoystick: public XMotion {

public:

    /**
      *   @fn       XJoystick
      *   @brief    Konstruktur
      */
    XJoystick(void);

    /**
      *   @fn       ~XJoystick
      *   @brief    Dekonstruktur
      */    
    ~XJoystick(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getZ
      *   @brief    Z holen
      *   @return   GLint&
      */
 	virtual GLint &getZ(void);					

    /**
      *   @fn       setZ(GLint z)
      *   @brief    Z setzen
      *   @param    z
      */
 	virtual void setZ(GLint z);					

    /**
      *   @fn       getButtonMask
      *   @brief    Button-Maske holen
      *   @return   GLint
      */
 	virtual GLint getButtonMask(void);					

    /**
      *   @fn       setButtonMask(GLint buttonMask)
      *   @brief    Button-Maske setzen
      *   @param    buttonMask
      */
 	virtual void setButtonMask(GLint buttonMask);					

protected:

    /**
      *   @var      z
      *   @brief    Z-Koordinate 
      */
 	GLint z;			

    /**
      *   @var      buttonMask
      *   @brief    Button-Maske
      */
 	GLint buttonMask;					

};
#endif // XJOYSTICK_H

