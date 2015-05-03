#ifndef WTEXTURE_H
#define WTEXTURE_H

/**
 *  @package   3dogs
 *  @file      WTexture.h
 *  @brief     Textur-Objekt, statisch zu deklarieren
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/WTexture.h - 
 *             Textur-Objekt, statisch zu deklarieren
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
  *  @class    WTexture
  *  @brief    Textur-Objekt, statisch zu deklarieren
  */
class WTexture: public ZCmd {

public:

    /**
      *   @fn       WTexture
      *   @brief    Konstruktur
      */
    WTexture(void);

    /**
      *   @fn       ~WTexture
      *   @brief    Dekonstruktur
      */    
    ~WTexture(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getTextureName(GLuint name)
      *   @brief    Name einer Textur holen
      *   @param    name
      *   @return   GLuint
      */
	virtual GLuint getTextureName(GLuint name);	

    /**
      *   @fn       getV
      *   @brief    Array mit n numerische Textur-Namen holen,
      *             d.h. Zeiger auf den ersten Wert
      *   @return   GLuint* Textur-Name
      */
    virtual GLuint *getV();

    /**
      *   @fn       isLoaded
      *   @brief    Texturen schon geladen ?
      *   @return   bool
      */
	virtual bool isLoaded(void);	

    /**
      *   @fn       setLoaded(bool loaded)
      *   @brief    Texturen als geladen setzen
      *   @return   bool
      */
	virtual void setLoaded(bool loaded);	
    
protected:

    /**
      *   @var      vektor[MAXTEXTURES]
      *   @brief    Vektor mit den n numerischen Textur-Namen
      */
    GLuint vektor[MAXTEXTURES];
    
    /**
      *   @var      loaded
      *   @brief    Texturen schon geladen / noch nicht geladen
      */
    bool loaded;

};
#endif // WTEXTURE_H
