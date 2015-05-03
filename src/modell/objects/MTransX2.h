#ifndef MTRANSX2_H
#define MTRANSX2_H

/**
 *  @package   3dogs
 *  @file      MTransX2.h
 *  @brief     Richtung einer Bewegung in "Vorwaerts" aendern
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MTransX2.h - 
 *             Richtung einer Bewegung in "Vorwaerts" aendern
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
 
#include "mtransx1.h"

/** 
  *  @class    MTransX2
  *  @brief    Richtung einer Bewegung in "Vorwaerts" aendern 
  */
class MTransX2: public MTransX1 {

public:

    /**
      *   @fn       MTransX2
      *   @brief    Konstruktur
      */
    MTransX2(void);

    /**
      *   @fn       MTransX2(MTranslation2 *command)
      *   @brief    Konstruktur mit Uebergabe des zu 
      *             registrierenden Kommandos,
      *             das spaeter ausgefuehrt werden soll
      *   @param    command
      */
    MTransX2(MTranslation2 *command);

    /**
      *   @fn       ~MTransX2
      *   @brief    Dekonstruktur
      */
    ~MTransX2(void);

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
      */
   virtual void update2(void);
            
};
#endif // MTRANSX2_H

