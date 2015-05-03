#ifndef ZQUEUE_H
#define ZQUEUE_H

/**
 *  @package   3dogs
 *  @file      ZQueue.h
 *  @brief     Eine OpenGL Befehls-Schlange
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZQueue.h - 
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
  *  @class    ZQueue
  *  @brief    Eine OpenGL Befehls-Schlange
  */
class ZQueue: public ZCmd {

public:

    /**
      *   @fn       ZQueue
      *   @brief    Konstruktur
      */
    ZQueue(void);

    /**
      *   @fn       ~ZQueue
      *   @brief    Dekonstruktur
      */    
    ~ZQueue(void);
 
    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       push_back (VektorElement<ZCmd *> element)
      *   @brief    Hinzufuegen eines Vektorelements zur Queue
      *   @param    element
      */
    virtual void push_back (VektorElement<ZCmd *> element);

    /**
      *   @fn       push_back (ZCmd *command, GLuint name = 0)
      *   @brief    Hinzufuegen eines Kommandos zur Queue
      *   @param    command
      *   @param    name
      */
    virtual void push_back (ZCmd *command, GLuint name = 0);

    /**
      *   @fn       *getQueue
      *   @brief    Zeiger auf Execution-Queue holen
      *   @return   Vektor<VektorElement<ZCmd*>,ZCmd*>*
      */
    virtual Vektor< VektorElement<ZCmd *>, ZCmd *> *getQueue(void);

protected:

    /**
      *   @var      aQueue
      *   @brief    Queue mit Referenzen zu allen OpenGL Kommandos 
      */
    Vektor< VektorElement<ZCmd *>, ZCmd *> aQueue;
       
};
#endif // ZQUEUE_H

