#ifndef ZOBJECT_H
#define ZOBJECT_H

/**
 *  @package   3dogs
 *  @file      ZObject.h
 *  @brief     Repraesentation eines OpenGL Objekts
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZObject.h - 
 *             Repraesentation eines OpenGL Objekts
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
#include "wtexture.h"

/** 
  *  @class    ZObject
  *  @brief    Repraesentation eines OpenGL Objekts
  */
class ZObject: public ZCmd {

public:

    /**
      *   @fn       ZObject
      *   @brief    Konstruktur
      */
    ZObject(void);

    /**
      *   @fn       ~ZObject
      *   @brief    Dekonstruktur
      */    
    ~ZObject(void);

    /**
      *   @fn       update1(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL "zuerst"
      *             Abschalten von speziellen Attributen
      *   @param    aOpenGL
      */
    virtual void update1(OpenGL &aOpenGL);

    /**
      *   @fn       update2(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL "danach"
      *             Wiederanschalten von speziellen Attributen
      *   @param    aOpenGL
      */
    virtual void update2(OpenGL &aOpenGL);

    /**
      *   @fn       getColor
      *   @brief    Holen: Farbe, RGB
      *   @return   Color&
      */
 	virtual Color &getColor(void);					

    /**
      *   @fn       setColor(Color color)
      *   @brief    Setzen: Farbe, RGB
      *   @param    color
      */
 	virtual void setColor(Color color);					

    /**
      *   @fn       isLighting
      *   @brief    Holen: Soll Objekt beleuchtet werden ?
      *   @return   bool
      */
 	virtual bool isLighting(void);					

    /**
      *   @fn       setLighting(bool lighting)
      *   @brief    Setzen: Soll Objekt beleuchtet werden ?
      *   @param    lighting
      */
 	virtual void setLighting(bool lighting);					

    /**
      *   @fn       isSmoothShading
      *   @brief    Holen: Shading Modell
      *             Klassenmethode
      *   @return   bool
      */
 	static bool isSmoothShading(void);					

    /**
      *   @fn       setSmoothShading(bool vSmoothShading)
      *   @brief    Setzen: Shading Modell
      *             Klassenmethode
      *   @param    vSmoothShading
      */
 	static void setSmoothShading(bool vSmoothShading);					

    /**
      *   @fn       isTransparenz
      *   @brief    Holen: Transparenz
      *   @return   bool
      */
 	virtual bool isTransparenz(void);					

    /**
      *   @fn       setTransparenz(bool transparenz)
      *   @brief    Setzen: Soll Objekt transparent sein ?
      *   @param    transparenz
      */
 	virtual void setTransparenz(bool transparenz);					

    /**
      *   @fn       isTextureDisplay
      *   @brief    Texturen verwenden ?
      *   @return   bool
      */
	virtual bool isTextureDisplay(void);	

    /**
      *   @fn       setTextureDisplay(bool textureDisplay)
      *   @brief    Setzen: Texturen verwenden
      *   @param    textureDisplay
      */
	virtual void setTextureDisplay(bool textureDisplay);	

    /**
      *   @fn       getTexture
      *   @brief    Zeiger auf Texturen holen
      *   @return   WTexture*
      */
	virtual WTexture *getTexture(void);	

    /**
      *   @fn       setTexture(WTexture *texture)
      *   @brief    Zeiger auf Texturen setzen
      *   @param    texture
      */
	virtual void setTexture(WTexture *texture);	

    /**
      *   @fn       getTextureName
      *   @brief    numerischen Textur-Name holen
      *   @return   GLuint
      */
	virtual GLuint getTextureName(void);	

    /**
      *   @fn       setTextureName(GLuint textureName)
      *   @brief    Setzen: Numerischer Textur-Namen verwenden
      *   @param    textureName
      */
	virtual void setTextureName(GLuint textureName);	

protected:
    /**
      *   @var      color
      *   @brief    Farbe, RGB
      */
 	Color color;					

    /**
      *   @var      lighting
      *   @brief    Soll Objekt beleuchtet werden ? 
      *             true = ja, false = nein.
      *             Default = true
      */
 	bool lighting;					

    /**
      *   @var      transparenz
      *   @brief    Soll Objekt transparent sein ? 
      *             true = ja, false = nein.
      *             Default = false
      */
 	bool transparenz;					

    /**
      *   @var      smoothShading
      *   @brief    Shading Modell
      *             true = Smooth Shading,
      *             false = Flat Shading.
      *             Default = true
      */
 	static bool smoothShading;					

    /**
      *   @var      textureDisplay
      *   @brief    Texturen verwenden ?
      */
	GLboolean textureDisplay;	

    /**
      *   @var      texture
      *   @brief    Zeiger auf Textur
      */
	WTexture *texture;	

    /**
      *   @var      textureName
      *   @brief    numerischer Texturen-Namen
      */
	GLuint textureName;	

};
#endif // ZOBJECT_H

