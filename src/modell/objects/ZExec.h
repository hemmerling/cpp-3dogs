#ifndef ZEXEC_H
#define ZEXEC_H

/**
 *  @package   3dogs
 *  @file      ZExec.h
 *  @brief     Ausfuehren von OpenGL Kommandos
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZExec.h - 
 *             Ausfuehren von OpenGL Kommandos
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

#include "zqueue.h"

/** 
  *  @class    ZExec
  *  @brief    Ausfuehren von OpenGL Kommandos
  */
class ZExec: public ZCmd {

public:

    /**
      *   @fn       ZExec
      *   @brief    Konstruktur
      */
    ZExec(void);

    /**
      *   @fn       ~ZExec
      *   @brief    Dekonstruktur
      */    
    ~ZExec(void);
 
    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       update
      *   @brief    Berechnungen durchfuehren
      */
    virtual void update(void);

    /**
      *   @fn       setQueue(ZQueue *aQueue)
      *   @brief    Zeiger auf Execution-Queue setzen
      *   @param    aQueue
      */
    virtual void setQueue(ZQueue *aQueue);

    /**
      *   @fn       getQueue
      *   @brief    Zeiger auf Execution-Queue holen
      *   @return   ZQueue*
      */
    virtual ZQueue *getQueue(void);

    /**
      *   @fn       getQueue2
      *   @brief    Zeiger auf Execution-Queue holen
      *   @return   Vektor<VektorElement<ZCmd*>,ZCmd*>*
      */
    virtual Vektor< VektorElement<ZCmd *>, ZCmd *>*getQueue2(void);

protected:

    /**
      *   @var      aQueue
      *   @brief    Zeiger auf Queue mit Referenzen 
      *             zu allen OpenGL Kommandos 
      */
    ZQueue *aQueue;
       
};
#endif // ZEXEC_H

