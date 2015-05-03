#ifndef MMODIFY_H
#define MMODIFY_H

/**
 *  @package   3dogs
 *  @file      MModify.h
 *  @brief     Modifizierer.
 *             Mit Pruefung, ob eine Modifikation 
 *             ausgefuehrt werden darf 
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MModify.h - 
 *             Modifizierer.
 *             Mit Pruefung, ob eine Modifikation 
 *             ausgefuehrt werden darf 
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
  *  @class    MModify   
  *  @brief    Modifizierer.
  *            Mit Pruefung, ob eine Modifikation ausgefuehrt werden darf 
  *            Abstrakte Klasse
  */
class MModify: public ZCmd {

public:

    /**
      *   @fn       MModify
      *   @brief    Konstruktur
      */
    MModify(void);

    /**
      *   @fn       ~MModify
      *   @brief    Dekonstruktur
      */    
    ~MModify(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       update
      *   @brief    Als Reaktion auf Benutzereingabe ausfuehren
      */
    virtual void update(void);

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
    virtual void update(GLint aKey);

    /**
      *   @fn       setLock(bool lock)
      *   @brief    Festlegen, ob Berechnungen durchgefuehrt 
      *             werden sollen
      *             Veraenderungsmoeglichkeit aktivieren / abschalten
      *   @param    lock neuer Zustand, 
      *             true = keine Veraenderung, false = Veraenderung
      */
    virtual void setLock(bool lock);

    /**
      *   @fn       isLock
      *   @brief    Sollen Berechnungen durchgefuehrt werden ?
      *             Status der Veraenderungsmoeglichkeit holen
      *   @return   bool true = keine Veraenderung, false = Veraenderung
      */
    virtual bool isLock(void);
 
protected:

	/**
      *   @var      lock
      *   @brief    Status der Veraenderungsmoeglichkeit
      */
	bool lock;		     

    /**
      *   @fn       update2
      *   @brief    Toggle: Veraenderung sperren / erlauben
      */
    virtual void update2(void);	

    /**
      *   @fn       update3
      *   @brief    Ueberpruefen, ob Update erlaubt.
      *             Nur dann ein Update ausfuehren, wenn eine
      *             Veraenderung erlaubt ist
      */
    virtual void update3(void);	

    /**
      *   @fn       update4
      *   @brief    Veraenderung durchfuehren
      */
    virtual void update4(void);	

};
#endif // MMODIFY_H
