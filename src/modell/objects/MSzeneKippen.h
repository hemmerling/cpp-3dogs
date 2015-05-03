#ifndef MSZENEKIPPEN_H
#define MSZENEKIPPEN_H

/**
 *  @package   3dogs
 *  @file      MSzeneKippen.h
 *  @brief     Szene soll gekippt werden
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MSzeneKippen.h - 
 *             Szene soll gekippt werden
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

#include "mrotation1.h"

/** 
  *  @class    MSzeneKippen
  *  @brief    Szene soll gekippt werden
  */
class MSzeneKippen: public MRotation1 {

public:

    /**
      *   @fn       MSzeneKippen
      *   @brief    Konstruktur
      */
    MSzeneKippen(void);

     /**
      *   @fn       ~MSzeneKippen
      *   @brief    Dekonstruktur
      */    
    ~MSzeneKippen(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       update(GLubyte aKey)
      *   @brief    Szene um Schrittweite kippen
      *             Als Reaktion auf Benutzereingabe ausfuehren
      *   @param    aKey
      */
    virtual void update(GLubyte aKey);
   
};
#endif // MSZENEKIPPEN_H

