#ifndef MLOOKX1_H
#define MLOOKX1_H

/**
 *  @package   3dogs
 *  @file      MLookX1.h
 *  @brief     Wahl einens Betrachterstandpunkts
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MLookX1.h - 
 *             Wahl einens Betrachterstandpunkts
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


#include "mlookx0.h"

/** 
  *  @class    MLookX1   
  *  @brief    Wahl einens Betrachterstandpunkts
  */
class MLookX1: public MLookX0 {

public:

    /**
      *   @fn       MLookX1
      *   @brief    Konstruktur
      */
    MLookX1(void);

    /**
      *   @fn       MLookX1(WLookAt *command)
      *   @brief    Konstruktur mit Uebergabe des zu registrierenden 
      *             Kommandos, das spaeter ausgefuehrt werden soll
      *   @param    command
      */
    MLookX1(WLookAt *command);
    
    /**
      *   @fn       ~MLookX1
      *   @brief    Dekonstruktur
      */    
    ~MLookX1(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);
 
 protected:

    /**
      *   @var      command
      *   @brief    Kommando, dessen Parameter geaendert werden sollen
      */
   WLookAt *command;

    /**
      *   @fn       update2
      *   @brief    Veraenderung durchfuehren
      */
   virtual void update2(void);

};
#endif // MLOOKX1_H
