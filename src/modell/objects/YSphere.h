#ifndef YSPHERE_H
#define YSPHERE_H

/**
 *  @package   3dogs
 *  @file      YSphere.h
 *  @brief     Kugel
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/YSphere.h - 
 *             Kugel
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
 
#include "zobject.h"

/** 
  *  @class    YSphere
  *  @brief    Kugel
  */
class YSphere: public ZObject {

  public:

    /**
      *   @fn       YSphere
      *   @brief    Konstruktur
      */
    YSphere(void);

    /**
      *   @fn       ~YSphere
      *   @brief    Dekonstruktur
      */    
    ~YSphere(void);

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
      *   @fn       getOuterRadius
      *   @brief    Radius holen
      *   @return   GLfloat&
      */
    virtual GLfloat &getOuterRadius(void);

    /**
      *   @fn       setOuterRadius(GLfloat outerRadius)
      *   @brief    Radius setzen
      *   @param    outerRadius
      */
    virtual void setOuterRadius(GLfloat outerRadius);

    /**
      *   @fn       getDefaultOuterRadius
      *   @brief    Default-Radius holen
      *   @return   GLfloat&
      */
    virtual GLfloat &getDefaultOuterRadius(void);

    /**
      *   @fn       setDefaultOuterRadius(GLfloat defaultOuterRadius)
      *   @brief    Default-Radius setzen
      *   @param    defaultOuterRadius
      */
    virtual void setDefaultOuterRadius(GLfloat defaultOuterRadius);

    /**
      *   @fn       getSides
      *   @brief    Anzahl Seiten holen
      *   @return   GLint&
      */
 	virtual GLint &getSides(void);					

    /**
      *   @fn       setSides(GLint sides)
      *   @brief    Anzahl Seiten setzen
      *   @param    sides
      */
 	virtual void setSides(GLint sides);					

    /**
      *   @fn       getRings
      *   @brief    Anzahl der Ringe holen
      *   @return   GLint&
      */
 	virtual GLint &getRings(void);					

    /**
      *   @fn       setRings(GLint rings)
      *   @brief    Anzahl der Ringe setzen
      *   @param    rings
      */
 	virtual void setRings(GLint rings);					

    /**
      *   @fn       getRelationOfFrequencies( YSphere aYSphere )
      *   @brief    Verhaeltnis der eigenen Winkelgeschwindigkeit 
      *             zu einer anderen YSphere, auf der die eigene 
      *             YSphere abrollen soll.
      *             Die eigene, aeussere YSphere muss sich 
                    um den Faktor 
      *             ( 2 Pi * Radius der inneren YSphere ) / 
      *             ( 2 Pi * eigenerRadius ) 
      *             schneller drehen als die YSphere, 
      *             auf der gerollt wird
      *  @param     aYSphere YSphere auf der gerollt wird
      */  
   GLfloat getRelationOfFrequencies( YSphere aYSphere );
    
  protected:
  
    /**
      *   @var      outerRadius
      *   @brief    ( Auesserer ) Radius
      */
	GLfloat outerRadius; 		

    /**
      *   @var      defaultOuterRadius
      *   @brief    Default - ( Auesserer ) Radius
      */
	GLfloat defaultOuterRadius; 		

	/**
      *   @var      sides
      *   @brief    Seiten
      */
	GLint 	sides; 					
	
	/**
      *   @var      rings
      *   @brief    Ringe
      */
	GLint 	rings; 					
};

#endif // YSPHERE_H

