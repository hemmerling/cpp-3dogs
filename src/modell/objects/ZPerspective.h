#ifndef ZPERSPECTIVE_H
#define ZPERSPECTIVE_H

/**
 *  @package   3dogs
 *  @file      ZPerspective.h
 *  @brief     Repraesentation einer OpenGL Perspective
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/ZPerspective.h - 
 *             Repraesentation einer OpenGL Perspective
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
  *  @class    ZPerspective
  *  @brief    Repraesentation einer OpenGL Perspective
  */
class ZPerspective: public ZAction {

public:

    /**
      *   @fn       ZPerspective
      *   @brief    Konstruktur
      */
    ZPerspective(void);

    /**
      *   @fn       ~ZPerspective
      *   @brief    Dekonstruktur
      */    
    ~ZPerspective(void);

    /** 
      *   @fn       getEye
      *   @brief    Eye holen
      *   @return   Coordinates*
      */
    Coordinates *getEye(void);
 
     /**
      *   @fn       setEye(Coordinates *vEye)
      *   @brief    Zeiger auf Eye setzen
      *   @param    vEye
      */
    void setEye(Coordinates *vEye);

    /** 
      *   @fn       getCenter
      *   @brief    Center holen
      *   @return   Coordinates*
      */
    Coordinates *getCenter(void);
 
     /**
      *   @fn       setCenter(Coordinates *vEye)
      *   @brief    Zeiger auf Center setzen
      *   @param    vEye
      */
    void setCenter(Coordinates *vEye);

    /** 
      *   @fn       getUp
      *   @brief    Up holen
      *   @return   Coordinates*
      */
    Coordinates *getUp(void);
 
    /** 
      *   @fn       setUp(Coordinates *vUp)
      *   @brief    Zeiger auf Up setzen
      *   @param    vUp
      */
    void setUp(Coordinates *vUp);

    /**
      *   Ausfuehren in OpenGL
      */
    virtual void display(OpenGL &aOpenGL);

protected:

    /**
      *   @var      aEye
      *   @brief    Eye-Koordinaten
      */
    Coordinates *aEye;

    /**
      *   @var      aCenter
      *   @brief    Center-Koordinaten
      */
    Coordinates *aCenter;

    /**
      *   @var      aUp
      *   @brief    Up-Koordinaten
      */
    Coordinates *aUp;
    
};
#endif // ZPERSPECTIVE_H

