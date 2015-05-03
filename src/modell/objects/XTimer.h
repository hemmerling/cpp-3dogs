#ifndef XTIMER_H
#define XTIMER_H

/**
 *  @package   3dogs
 *  @file      XTimer.h
 *  @brief     Repraesentation der Callback-Funktion 
 *             fuer Callback TimerFunc
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/XTimer.h - 
 *             Repraesentation der Callback-Funktion 
 *             fuer Callback TimerFunc
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
  *  @class    XTimer
  *  @brief    Repraesentation der Callback-Funktion 
  *            fuer Callback TimerFunc
  */
class XTimer: public ZCmd {

public:

    /**
      *   @fn       XTimer
      *   @brief    Konstruktur
      */
    XTimer(void);

    /**
      *   @fn       ~XTimer
      *   @brief    Dekonstruktur
      */    
    ~XTimer(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       setTimePeriod(GLint *aTimePeriod)
      *   @brief    Zeiger auf Periodendauer setzen
      *   @param    aTimePeriod
      */
    void setTimePeriod(GLint *aTimePeriod);

    /**
      *   @fn       getTimePeriod
      *   @brief    Periodendauer holen
      *   @return   GLint
      */
    GLint getTimePeriod(void);

protected:
          
	/**
      *   @var      aTimePeriod
      *   @brief    Zeiger auf Periodendauer
      */
	GLint *aTimePeriod;		     
    
};
#endif // XTIMER_H

