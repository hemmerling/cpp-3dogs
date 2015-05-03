#ifndef ZDISPLAYLIST_H
#define ZDISPLAYLIST_H

/**
 *  @package   3dogs
 *  @file      ZDisplayList.h
 *  @brief     Speichern einer Display-Liste
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZDisplayList.h - 
 *             Speichern einer Display-Liste
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

#include "zexec.h"

/** 
  *  @class    ZDisplayList
  *  @brief    Speichern einer Display-Liste
  */
class ZDisplayList: public ZExec {

public:

    /**
      *   @fn       ZDisplayList
      *   @brief    Konstruktur
      */
    ZDisplayList(void);

    /**
      *   @fn       ~ZDisplayList
      *   @brief    Dekonstruktur
      */    
    ~ZDisplayList(void);
 
    /**
      *   @fn       store(OpenGL &aOpenGL)
      *   @brief    Speichern einer OpenGL DisplayListe,
      *             dabei Initialisierung des Zeigers "listIndex"
      *   @param    aOpenGL
      */
    void store(OpenGL &aOpenGL);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    void display(OpenGL &aOpenGL);
      
    /**
      *   @fn       setListIndex(GLuint listIndex)
      *   @brief    Setzen des Listen-Index fuer die Display-Liste
      *   @param    listIndex
      */
    void setListIndex(GLuint listIndex); 

    /**
      *   @fn       getListIndex
      *   @brief    Holen des Listen-Indexes der Display-Liste
      *   @return   GLuint
      */
    GLuint getListIndex(void); 

protected:
   
    /**
      *   @var      listIndex
      *   @brief    Abspeichern des Listen-Indexes der Display-Liste
      */
    GLuint listIndex;

};
#endif // ZDISPLAYLIST_H

