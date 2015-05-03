#ifndef TRIPLE_H
#define TRIPLE_H

/**
 *  @package   3dogs
 *  @file      Triple.h
 *  @brief     3 Werte
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/general/Triple.h - 
 *             3 Werte
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

#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <gl/glut.h>

/** 
  *  @class    Triple
  *  @brief    3 Werte
  */
class Triple {

public:

    /**
      *  @fn       Triple
      *  @brief    Konstruktur
      */
    Triple();

    /**
      *  @fn       ~Triple
      *  @brief    Dekonstruktur
      */
    ~Triple();

    /**
      *  @fn       Triple(GLfloat x, GLfloat y, GLfloat z)
      *  @brief    Konstruktur mit Uebergabe der  3 Werte
      *  @param    x X-Koordinate
      *  @param    y Y-Koordinate
      *  @param    z Z-Koordinate
      */
    Triple(GLfloat x, GLfloat y, GLfloat z);

    /**
      *  @fn       Triple(GLfloat x, GLfloat y, GLfloat z, GLfloat a)
      *  @brief    Konstruktur mit Uebergabe der  3 Werte
      *  @param    x X-Koordinate
      *  @param    y Y-Koordinate
      *  @param    z Z-Koordinate
      *  @param    a A-Koordinate
      */
    Triple(GLfloat x, GLfloat y, GLfloat z, GLfloat a);

    /**
      *  @fn       getX
      *  @brief    X-Wert holen
      *  @return   GLfloat& X-Wert
      */
    virtual GLfloat& getX();

    /**
      *  @fn       setX(GLfloat x)
      *  @brief    X-Wert setzen
      *  @param    x X-Wert
      */
    virtual void setX(GLfloat x);

    /**
      *  @fn       getY
      *  @brief    Y-Wert holen
      *  @return   GLfloat& Y-Wert
      */
    virtual GLfloat& getY();

    /**
      *  @fn       setY(GLfloat y)
      *  @brief    Y-Wert setzen
      *  @param    y Y-Wert
      */
    virtual void setY(GLfloat y);

    /**
      *  @fn       getZ
      *  @brief    Z-Wert holen
      *  @return   GLfloat& Z-Wert
      */
    virtual GLfloat& getZ();

    /**
      *  @fn       setZ(GLfloat z)
      *  @brief    Z-Wert setzen
      *  @param    z Z-Wert
      */
    virtual void setZ(GLfloat z);

    /**
      *  @fn       getA
      *  @brief    A-Wert holen
      *  @return   GLfloat& A-Wert
      */
    virtual GLfloat& getA();

    /**
      *  @fn       setA(GLfloat a)
      *  @brief    A-Wert setzen
      *  @param    a A-Wert
      */
    virtual void setA(GLfloat a);

    /**
      *  @fn       getV
      *  @brief    Array mit 3 RGB-Werten holen,
      *            d.h. Zeiger auf den ersten Wert
      *  @return   GLfloat* Blau-RGB-Wert
      */
    virtual GLfloat *getV();

protected:

    /**
      *  @fn       init(GLfloat x, GLfloat y, GLfloat z)
      *  @brief    Initialisierung
      *  @param    x X-Wert
      *  @param    y Y-Wert
      *  @param    z Z-Wert
      */
    virtual void init(GLfloat x, GLfloat y, GLfloat z);

    /**
      *  @fn       init(GLfloat x, GLfloat y, GLfloat z, GLfloat a)
      *  @brief    Initialisierung
      *  @param x X-Wert
      *  @param y Y-Wert
      *  @param z Z-Wert
      *  @param a A-Wert
      */
    virtual void init(GLfloat x, GLfloat y, GLfloat z, GLfloat a);

    /**
      *  @var      vektor
      *  @brief    Vektor mit den 3 Werten X, Y, Z,A
      */
    GLfloat vektor[4];
    
};
#endif //TRIPLE_H

