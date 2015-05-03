#ifndef MTRANSX5_H
#define MTRANSX5_H

/**
 *  @package   3dogs
 *  @file      MTransX5.h
 *  @brief     Geschwindigkeit einer Bewegung verringern
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MTransX5.h - 
 *             Geschwindigkeit einer Bewegung verringern
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
 
#include "mtransx4.h"

/** 
  *  @class    MTransX5
  *  @brief    Geschwindigkeit einer Bewegung verringern
  */
class MTransX5: public MTransX4 {

public:

    /**
      *   @fn       MTransX5
      *   @brief    Konstruktur
      */
    MTransX5(void);

    /**
      *   @fn       MTransX5(MTranslation2 *command)
      *   @brief    Konstruktur mit Uebergabe des zu 
      *             registrierenden Kommandos,
      *             das spaeter ausgefuehrt werden soll
      */
    MTransX5(MTranslation2 *command);

    /**
      *   @fn       ~MTransX5
      *   @brief    Dekonstruktur
      */    
    ~MTransX5(void);

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
#endif // MTRANSX5_H

