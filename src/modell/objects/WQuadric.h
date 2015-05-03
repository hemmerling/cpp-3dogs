#ifndef WQUADRIC_H
#define WQUADRIC_H

/**
 *  @package   3dogs
 *  @file      WQuadric.h
 *  @brief     Repraesentation eines OpenGL Quadric Objekts
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/WQuadric.h - 
 *             Repraesentation eines OpenGL Quadric Objekts
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
  *  @class    WQuadric
  *  @brief    Repraesentation eines OpenGL Quadric Objekts
  */
class WQuadric: public ZCmd {

public:

    /**
      *   @fn       WQuadric
      *   @brief    Konstruktur
      */
    WQuadric(void);

    /**
      *   @fn       ~WQuadric
      *   @brief    Konstruktur
      */    
    ~WQuadric(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       getDrawStyle
      *   @brief    DrawStyle holen
      *   @return   GLenum& drawStyle = GLU_FILL, GLU_LINE, 
      *             GLU_SILHOUETTE, GLU_POINT
      */
	virtual GLenum &getDrawStyle(void);	

	/**
      *   @fn       setDrawStyle(GLenum drawStyle)
      *   @brief    DrawStyle setzen
      *   @param    drawStyle = GLU_FILL, GLU_LINE, 
      *             GLU_SILHOUETTE, GLU_POINT
      */
	virtual void setDrawStyle(GLenum drawStyle); 					


    /**
      *   @fn       getNormals
      *   @brief    Normals holen
      *   @return   GLenum& normals = GLU_NONE, GLU_FLAT, GLU_SMOOTH
      */
	virtual GLenum &getNormals(void);	

	/**
      *   @fn       setNormals(GLenum normals)
      *   @brief    Normals setzen
      *   @param    normals = GLU_NONE, GLU_FLAT, GLU_SMOOTH
      */
	virtual void setNormals(GLenum normals); 					

    /**
      *   @fn       getOrientation
      *   @brief    Orientierung holen
      *   @return   GLenum& orientation = GLU_OUTSIDE, GLU_INSIDE
      */
	virtual GLenum &getOrientation(void);	

	/**
      *   @fn       setOrientation(GLenum orientation)
      *   @brief    Orientierung setzen
      *   @param    orientation = GLU_OUTSIDE, GLU_INSIDE
      */
	virtual void setOrientation(GLenum orientation); 					

    /**
      *   @fn       getTexture
      *   @brief    Textur holen
      *   @return   GLboolean& texture = GL_TRUE, GL_FALSE
      */
	virtual GLboolean &getTexture(void);	

	/**
      *   @fn       setTexture(GLboolean texture)
      *   @brief    Textur setzen
      *   @param    texture = GL_TRUE, GL_FALSE
      */
	virtual void setTexture(GLboolean texture); 					

    /**
      *   @fn       getQuadric
      *   @brief    Quadric holen
      *   @return   GLUquadric*
      */
	virtual GLUquadric *getQuadric(void);	

	/**
      *   @fn       setQuadric(GLUquadric *quadric)
      *   @brief    Quadric setzen
      *   @param    quadric
      */
	virtual void setQuadric(GLUquadric *quadric); 					
    
protected:
    /**
      *   @var      drawStyle
      *   @brief    DrawStyle 
      */
	GLenum drawStyle;	

    /**
      *   @var      normals
      *   @brief    Normals
      */
	GLenum normals;	

    /**
      *   @var      orientation
      *   @brief    Orientierung
      */
	GLenum orientation;	

    /**
      *   @var      texture
      *   @brief    Textur
      */
	GLboolean texture;	

	/**
      *   @var      quadric
      *   @brief    Quadric
      */
	GLUquadric *quadric; 					

};
#endif // WQUADRIC_H

