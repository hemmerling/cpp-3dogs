#ifndef ZINPUT_H
#define ZINPUT_H

/**
 *  @package   3dogs
 *  @file      ZInput.h
 *  @brief     Eine OpenGL Befehls-Schlange
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZInput.h - 
 *             Eine OpenGL Befehls-Schlange
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
// notwendige Forwaertsdeklaration
class ZExec;

/** 
  *  @class    ZInput
  *  @brief    Eine OpenGL Befehls-Schlange
  */
class ZInput: public ZCmd {

public:

    /**
      *   @fn       ZInput
      *   @brief    Konstruktur
      */
    ZInput(void);

    /**
      *   @fn       ~ZInput
      *   @brief    Dekonstruktur
      */    
    ~ZInput(void);
 
    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       update(GLubyte aKey)
      *   @brief    Ausfuehren von Keyboard-Aktionen
      *   @param    aKey
      */
    virtual void update(GLubyte aKey);

    /**
      *   @fn       updateUp(GLubyte aKey)
      *   @brief    Ausfuehren von Keyboard-Up-Aktionen
      *   @param    aKey
      */
    virtual void updateUp(GLubyte aKey);

    /**
      *   @fn       update(GLint aKey)
      *   @brief    Ausfuehren von Special-Aktionen
      *   @param    aKey
      */
    virtual void update(GLint aKey);

    /**
      *   @fn       updateUp(GLint aKey)
      *   @brief    Ausfuehren von Special-Up-Aktionen
      *   @param    aKey
      */
    virtual void updateUp(GLint aKey);

    /**
      *   @fn       addToKeyboardTable (ZCmd *aCommand, GLubyte aKey)
      *   @brief    Hinzufuegen eines Kommandos zur Keyboard-Tabelle
      *   @param    aCommand
      *   @param    aKey
      */
    virtual void addToKeyboardTable (ZCmd *aCommand, GLubyte aKey);

    /**
      *   @fn       MapContainer<GLubyte, ZCmd *> *getKeyboardTable(void)
      *   @brief    Zeiger auf Keyboard-Tabelle holen
      *   @return   MapContainer<GLubyte,ZCmd*>*
      */
    virtual MapContainer<GLubyte, ZCmd *> *getKeyboardTable(void);

    /**
      *   @fn       addToKeyboardUpTable (ZCmd *aCommand, GLubyte aKey)
      *   @brief    Hinzufuegen eines Kommandos zur KeyboardUp-Tabelle
      *   @param    aCommand
      *   @param    aKey
      */
    virtual void addToKeyboardUpTable (ZCmd *aCommand, GLubyte aKey);

    /**
      *   @fn       getKeyboardUpTable
      *   @brief    Zeiger auf KeyboardUp-Tabelle holen
      *   @return   MapContainer<GLubyte,ZCmd*>*
      */
    virtual MapContainer<GLubyte, ZCmd *> *getKeyboardUpTable(void);

    /**
      *   @fn       addToSpecialTable (ZCmd *aCommand, GLint aKey)
      *   @brief    Hinzufuegen eines Kommandos zur Special-Tabelle
      *   @param    aCommand
      *   @param    aKey
      */
    virtual void addToSpecialTable (ZCmd *aCommand, GLint aKey);

    /**
      *   @fn       getSpecialTable
      *   @brief    Zeiger auf Special-Tabelle holen
      *   @return   MapContainer<GLint,ZCmd*>*
      */
    virtual MapContainer<GLint, ZCmd *> *getSpecialTable(void);

    /**
      *   @fn       addToSpecialUpTable (ZCmd *aCommand, GLint aKey)
      *   @brief    Hinzufuegen eines Kommandos zur SpecialUp-Tabelle
      *   @param    aCommand
      *   @param    aKey
      */
    virtual void addToSpecialUpTable (ZCmd *aCommand, GLint aKey);

    /**
      *   @fn       getSpecialUpTable
      *   @brief    Zeiger auf SpecialUp-Tabelle holen
      *   @return   MapContainer<GLint,ZCmd*>*
      */
    virtual MapContainer<GLint, ZCmd *> *getSpecialUpTable(void);

protected:

    /**
      *   @var      aKeyboardTable
      *   @brief    Keyboard-Tabelle 
      */
    MapContainer<GLubyte, ZCmd *> aKeyboardTable;

    /**
      *   @var      aKeyboardUpTable
      *   @brief    KeyboardUp-Tabelle 
      */
    MapContainer<GLubyte, ZCmd *> aKeyboardUpTable;

    /**
      *   @var      aSpecialTable
      *   @brief    Special-Tabelle 
      */
    MapContainer<GLint, ZCmd *> aSpecialTable;

    /**
      *   @var      aSpecialUpTable
      *   @brief    SpecialUp-Tabelle 
      */
    MapContainer<GLint, ZCmd *> aSpecialUpTable;
       
};
#endif // ZINPUT_H

