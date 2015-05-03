#ifndef ZCOMMAND_H
#define ZCOMMAND_H

/**
 *  @package   3dogs
 *  @file      ZCmd.h
 *  @brief     Repraesentation eines OpenGL Kommandos
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZCmd.h - 
 *             Repraesentation eines OpenGL Kommandos
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

#include "../../3dogs.h"

// notwendige Forwaertsdeklarationen
class OpenGL;

/** 
  *  @class    ZCmd
  *  @brief    Repraesentation eines OpenGL Kommandos
  */
class ZCmd {

public:

    /**
      *   @fn       ZCmd
      *   @brief    Konstruktur
      */
    ZCmd(void);

    /**
      *   @fn       ~ZCmd
      *   @brief    Dekonstruktur
      */    
    ~ZCmd(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       update
      *   @brief    Berechnungen bei jedem GLUT-Zyklus durchfuehren
      */
    virtual void update(void);

    /**
      *   @fn       update(ZCmd *aCommand)
      *   @brief    Berechnungen durchfuehren
      *   @param    aCommand Auszufuehrende Klasse
      */
    virtual void update(ZCmd *aCommand);

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
      *   @fn       setName(char *vName)
      *   @brief    Namen setzen
      *   @param    vName
      */
    void setName(char *vName);

    /**
      *   @fn       setSingleExecution(bool singleExecution)
      *   @brief    Kommando zur Einplanung eines einmaligen Ausfuehrens,
      *   @param    singleExecution 
      *             true = einmal ausfuehren, false = nicht ausfuehren
      */
    void setSingleExecution(bool singleExecution);

    /**
      *   @fn       getSingleExecution
      *   @brief    Abfragen, ob Kommando nur einmal ausgefuehrt werden soll
      *   @return   bool 
      *             true = einmal ausfuehren, false = nicht ausfuehren
      */
    virtual bool  getSingleExecution(void);

    /**
      *   @fn       getName
      *   @brief    Namen holen
      *   @return   char*
      */
    char *getName(void);

    /**
      *   @fn       setID(GLuint vID)
      *   @brief    ID setzen
      *   @param    vID 
      */
    void setID(GLuint vID);

    /**
      *   @fn       getID
      *   @brief    ID holen
      *   @return   GLuint
      */
    GLuint getID(void);

    /**
      *   @fn       addToKTable (GLubyte aKey, ZCmd *command)
      *   @brief    Hinzufuegen eines Kommandos zur Keyboard-Tabelle
      *   @param    aKey
      *   @param    command
      */
    virtual void addToKTable (GLubyte aKey, ZCmd *command);

    /**
      *   @fn       addToKUpTable (GLubyte aKey, ZCmd *command)
      *   @brief    Hinzufuegen eines Kommandos zur KeyboardUp-Tabelle
      *   @param    aKey
      *   @param    command
      */
    virtual void addToKUpTable (GLubyte aKey, ZCmd *command);

    /**
      *   @fn       addToSTable (GLint aKey, ZCmd *command)
      *   @brief    Hinzufuegen eines Kommandos zur Special-Tabelle
      *   @param    aKey
      *   @param    command
      */
    virtual void addToSTable (GLint aKey, ZCmd *command);

    /**
      *   @fn       addToSUpTable (GLint aKey, ZCmd *command)
      *   @brief    Hinzufuegen eines Kommandos zur SpecialUp-Tabelle
      *   @param    aKey
      *   @param    command
      */
    virtual void addToSUpTable (GLint aKey, ZCmd *command);

    /**
      *   @fn       getKTable
      *   @brief    Zeiger auf Keyboard-Tabelle holen
      *   @return   MapContainer<GLubyte,ZCmd*>*
      */
    virtual MapContainer<GLubyte, ZCmd *> *getKTable(void);

    /**
      *   @fn       getKUpTable
      *   @brief    Zeiger auf KeyboardUp-Tabelle holen
      *   @return   MapContainer<GLubyte,ZCmd*>*
      */
    virtual MapContainer<GLubyte, ZCmd *> *getKUpTable(void);

    /**
      *   @fn       getSTable
      *   @brief    Zeiger auf Special-Tabelle holen
      *   @return   MapContainer<GLint,ZCmd*>*
      */
    virtual MapContainer<GLint, ZCmd *> *getSTable(void);

    /**
      *   @fn       getSUpTable
      *   @brief    Zeiger auf SpecialUp-Tabelle holen
      *   @return   MapContainer<GLint,ZCmd*>*
      */
    virtual MapContainer<GLint, ZCmd *> *getSUpTable(void);

protected:
    
    /**
      *   @var      aName[MAX_NAMEN_LAENGE+1]
      *   @brief    Namen eines OpenGL Kommandos
      */
    char aName[MAX_NAMEN_LAENGE+1];
    
    /**
      *   @var      aID
      *   @brief    ID eines OpenGL Kommandos
      */
    GLuint aID;
    
    /**
      *   @var      singleExecution
      *   @brief    Zustandsvariable bei "einmaligen Kommandos, ob
      *             das Kommando gerade fuer einmalige Ausfuehrung 
      *             eingeplant ist ( true ) 
      *             oder nicht ausgefuehrt werden soll ( false)
      */ 
    bool singleExecution;

    /**
      *   @var      aKTable
      *   @brief    Zuordnung von Aufrufparametern 
      *             von "update(GLubyte aKey)"
      *             zu aufgerufener Methode
      */
    MapContainer<GLubyte, ZCmd *> aKTable;

    /**
      *   @var      aKUpTable
      *   @brief    Zuordnung von Aufrufparametern 
      *             von "update(GLubyte aKey)"
      *             zu aufgerufener Methode
      */
    MapContainer<GLubyte, ZCmd *> aKUpTable;

    /**
      *   @var      aSTable
      *   @brief    Zuordnung von Aufrufparametern 
      *             von "update(GLuint aKey)"
      *             zu aufgerufener Methode
      */
    MapContainer<GLint, ZCmd *> aSTable;

    /**
      *   @var      aSUpTable
      *   @brief    Zuordnung von Aufrufparametern 
      *   von "update(GLuint aKey)"
      *   zu aufgerufener Methode
      */
    MapContainer<GLint, ZCmd *> aSUpTable;
    
};

#endif // ZCOMMAND_H

