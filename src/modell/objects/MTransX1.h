#ifndef MTRANSX1_H
#define MTRANSX1_H

/**
 *  @package   3dogs
 *  @file      MTransX1.h
 *  @brief     Stop einer Bewegung
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MTransX1.h - 
 *             Stop einer Bewegung
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

#include "mtranslation2.h"
#include "../general/mathe.h"

/** 
  *  @class    MTransX1
  *  @brief    Stop einer Bewegung
  */
class MTransX1: public ZCmd {

public:

    /**
      *   @fn       MTransX1
      *   @brief    Konstruktur
      */
    MTransX1(void);

    /**
      *   @fn       MTransX1(MTranslation2 *command)
      *   @brief    Konstruktur mit Uebergabe des zu 
      *             registrierenden Kommandos,
      *             das spaeter ausgefuehrt werden soll
      *   @param    command
      */
    MTransX1(MTranslation2 *command);
    
     /**
      *   @fn       ~MTransX1
      *   @brief    Dekonstruktur
      */    
    ~MTransX1(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);
 
    /**
      *   @fn       update(GLubyte aKey)
      *   @brief    Als Reaktion auf Benutzereingabe ausfuehren
      *   @param    aKey
      */
    virtual void update(GLubyte aKey);

     /**
      *   @fn       update(GLint aKey)
      *   @brief    Als Reaktion auf Benutzereingabe ausfuehren
      *   @param    aKey
      */
    */
    virtual void update(GLint aKey);

 protected:

    /**
      *   @var      command
      *   @brief    Kommando, dessen Parameter 
      *             geaendert werden sollen
      */
   MTranslation2 *command;

    /**
      *   @fn       update2
      *   @brief    Veraenderung durchfuehren
      */
   virtual void update2(void);

};
#endif // MTRANSX1_H
