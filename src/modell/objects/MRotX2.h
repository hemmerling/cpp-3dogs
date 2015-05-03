#ifndef MROT2X_H
#define MROT2X_H

/**
 *  @package   3dogs
 *  @file      MRotX2.h
 *  @brief     Objekt rotieren lassen ( Schrittweite + Faktor )
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MRotX2.h - 
 *             Objekt rotieren lassen ( Schrittweite + Faktor )
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

#include "mrotx1.h"
#include "mrotation2.h"

/** 
  *  @class    MRotX2
  *  @brief    Objekt rotieren lassen ( Schrittweite + Faktor )
  */
class MRotX2: public MRotX1 {

public:

    /**
      *   @fn       MRotX2
      *   @brief    Konstruktur
      */
    MRotX2(void);

    /**
      *   @fn       MRotX2(MRotation2 *command)
      *   @brief    Konstruktur mit Uebergabe des zu 
      *             registrierenden Kommandos,
      *             das spaeter ausgefuehrt werden soll
      */
    MRotX2(MRotation2 *command);

     /**
      *   @fn       ~MRotX2
      *   @brief    Dekonstruktur
      */    
    ~MRotX2(void);
 
protected:

    /**
      *   @var      command
      *   @brief    Kommando, dessen Parameter 
      *             geaendert werden sollen
      */
   MRotation2 *command;

    /**
      *   @fn       update3
      *   @brief    Veraenderung durchfuehren
      */
    virtual void update3(void);	

};
#endif // MROT2X_H
