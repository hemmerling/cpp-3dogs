#ifndef WPERSPECTIVE_H
#define  WPERSPECTIVE_H

/**
 *  @package   3dogs
 *  @file      WPerspective.h
 *  @brief     Repraesentation einer OpenGL GLU Perspective
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/WPerspective.h - 
 *             Repraesentation einer OpenGL GLU Perspective
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
 
#include "zaction.h"

/** 
  *  @class    WPerspective
  *  @brief    Repraesentation einer OpenGL GLU Perspective
  */
class WPerspective: public ZAction {

public:

    /**
      *   @fn       WPerspective
      *   @brief    Konstruktur
      */
    WPerspective(void);

    /**
      *   @fn       ~WPerspective
      *   @brief    Dekonstruktur
      */    
    ~WPerspective(void);

    /**
      *   @fn       getFieldOfViewAngle
      *   @brief    Field of View Angle holen
      *   @return   GLfloat
      */
    GLfloat getFieldOfViewAngle();

    /**
      *   @fn       setFieldOfViewAngle(GLfloat fieldOfViewAngle)
      *   @brief    Field of View Angle setzen
      *   @param    fieldOfViewAngle
      */
     void setFieldOfViewAngle(GLfloat fieldOfViewAngle);

    /**
      *   @fn       getAspectRatio
      *   @brief    Aspect Ratio holen
      *   @return   GLfloat
      */
    GLfloat getAspectRatio();

    /**
      *   @fn       setAspectRatio(GLfloat aspectRatio)
      *   @brief    Aspect Ratio setzen
      *   @param    aspectRatio
      */
     void setAspectRatio(GLfloat aspectRatio);

    /**
      *   @fn       getNearDistance
      *   @brief    NearDistance holen
      *   @return   GLfloat
      */
    GLfloat getNearDistance();

    /**
      *   @fn       setNearDistance(GLfloat nearDistance)
      *   @brief    NearDistance setzen
      *   @param    nearDistance
      */
    void setNearDistance(GLfloat nearDistance);

    /**
      *   @fn       getFarDistance
      *   @brief    FarDistance holen
      *   @return   GLfloat
      */
    GLfloat getFarDistance();

    /**
      *   @fn       setFarDistance(GLfloat farDistance)
      *   @brief    FarDistance holen
      *   @param    farDistance
      */
     void setFarDistance(GLfloat farDistance);

    /**
      *   @fn       setPeriod(GLfloat aPeriod)
      *   @brief    Periodenlaenge setzen
      *   @param    aPeriod
      */
    void setPeriod(GLfloat aPeriod);

    /**
      *   @fn       getPeriod
      *   @brief    Periodenlaenge holen
      *   @return   GLfloat
      */
    GLfloat getPeriod(void);

    /**
      *   @fn       setAngle(GLfloat aAngle)
      *   @brief    Drehwinkel setzen
      *   @param    aAngle
      */
    void setAngle(GLfloat aAngle);

    /**
      *   @fn       getAngle
      *   @brief    Drehwinkel holen
      *   @return   GLfloat
      */
    GLfloat getAngle(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       update
      *   @brief    Berechnungen bei jedem GLUT-Zyklus durchfuehren
      *             Berechnungen des Wertes fuer "nearDistance"
      *             Die Berechnung wird nur durchgefuehrt, 
      *             wenn "periode" != 0.0 ist !
      */
    void update(void);
    
protected:

    /**
      *   @var      fieldOfViewAngle
      *   @brief    Field of View Angle 
      */
    GLfloat fieldOfViewAngle;

    /**
      *   @var      aspectRatio
      *   @brief    Aspect Ratio 
      */
    GLfloat aspectRatio;

    /**
      *   @var      nearDistance
      *   @brief    NearDistance
      */
    GLfloat nearDistance;
    
    /**
      *   @var      farDistance
      *   @brief    FarDistance
      */
    GLfloat farDistance;

	/**
      *   @var      aAngle
      *   @brief    Zeiger auf Drehwinkel
      */
	GLfloat aAngle;		     

	/**
      *   @var      aPeriod
      *   @brief    Periode T, in RAD (  2*PI (RAD) = 360 Grad (DEG) )
      */
	GLfloat aPeriod;		     
 
};
#endif // WPERSPECTIVE_H

