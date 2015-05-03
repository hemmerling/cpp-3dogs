#ifndef MROT4X_H
#define MROT4X_H

/**
 *  @package   3dogs
 *  @file      MRotX4.h
 *  @brief     Winkel verkleinern ( Objekt nach Rechts bewegen )
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MRotX4.h - 
 *             Winkel verkleinern ( Objekt nach Rechts bewegen )
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

#include "mrotx3.h"
#include "mrotation1.h"

/** 
  *  @class    MRotX4
  *  @brief    Winkel verkleinern ( Objekt nach Rechts bewegen )
  */
class MRotX4: public MRotX3 {

public:

    /**
      *   @fn       MRotX4
      *   @brief    Konstruktur
      */
    MRotX4(void);

    /**
      *   @fn       MRotX4(MRotation1 *command)
      *   @brief    Konstruktur mit Uebergabe des zu registrierenden 
      *             Kommandos, das spaeter ausgefuehrt werden soll
      *   @param    command
      */
    MRotX4(MRotation1 *command);

     /**
      *   @fn       ~MRotX4
      *   @brief    Dekonstruktur
      */    
    ~MRotX4(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);
 
protected:

    /**
      *   @fn       update2
      *   @brief    Veraenderung durchfuehren
      *             Winkel verringern
      */
    virtual void update2(void);	

};
#endif // MROT4X_H
