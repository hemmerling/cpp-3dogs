#ifndef COLOR_H
#define COLOR_H

/**
 *  @package   3dogs
 *  @file      Color.h
 *  @brief     RGB-Farben
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/general/Color.h - 
 *             RGB-Farben
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

#include "triple.h"
 
/** 
  *  @class    Color   
  *  @brief    RGB-Farben
  */
class Color: public Triple {

public:

    /**
      *   @fn       Color
      *   @brief    Konstruktur
      */
    Color();

    /**
      *   @fn       ~Color
      *   @brief    Dekonstruktur
      */
    ~Color();

    /**
      *  @fn       Color(GLfloat r, GLfloat g, GLfloat b)
      *  @brief    Konstruktur mit Uebergabe der RGB-Farbwerte
      *  @param    r RGB-Rot
      *  @param    g RGB-Gruen
      *  @param    b RGB-Blau
      */
    Color(GLfloat r, GLfloat g, GLfloat b);

    /**
      *  @fn       Color(GLfloat r, GLfloat g, GLfloat b, GLfloat a)
      *  @brief    Konstruktur mit Uebergabe der RGB-Farbwerte
      *  @param    r RGB-Rot
      *  @param    g RGB-Gruen
      *  @param    b RGB-Blau
      *  @param    a Alpha
      */
    Color(GLfloat r, GLfloat g, GLfloat b, GLfloat a);

    /**
      *  @fn       GLfloat& getR()
      *  @brief    X-Wert holen
      *  @return   GLfloat& X-Wert
      */
    virtual GLfloat& getR();

    /**
      *  @fn       setR(GLfloat r)
      *  @brief    Rot-RGB-Wert setzen
      *  @param    r Rot-RGB-Wert
      */
    virtual void setR(GLfloat r);

    /**
      *  @fn       GLfloat& getG()
      *  @brief    Gruen-RGB holen
      *  @return   GLfloat Gruen-RGB-Wert
      */
    virtual GLfloat& getG();

    /**
      *  @fn       setG(GLfloat g)
      *  @brief    Gruen-RGB setzen
      *  @param    g Gruen-RGB-Wert
      */
    virtual void setG(GLfloat g);

    /**
      *  @fn       GLfloat& getB()
      *  @brief    Blau-RGB holen
      *  @return   GLfloat Blau-RGB-Wert
      */
    virtual GLfloat& getB();

    /**
      *  @fn       setB(GLfloat b)
      *  @brief    Blau-RGB setzen
      *  @param    b Blau-RGB-Wert
      */
    virtual void setB(GLfloat b);
};
#endif //COLOR_H

