#ifndef QUATRO_H
#define QUATRO_H

/**
 *  @package   3dogs
 *  @file      Quatro.h
 *  @brief     Template fuer 4 Werte
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/general/Quatro.h - 
 *             Template fuer 4 Werte
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
  *  @class    Quatro
  *  @brief    Template fuer 4 Werte
  */
template<class TT> class Quatro {

public:

    /**
      *  @fn       Quatro
      *  @brief    Konstruktur
      */
    Quatro();

    /**
      *  @fn       ~Quatro
      *  @brief    Dekonstruktur
      */
    ~Quatro();

    /**
      *  @fn       getV
      *  @brief    Array mit 4 Werten holen,
      *            d.h. Zeiger auf den ersten Wert
      *  @return   TT* Adresse einer Variable vom Typ X
      */
    virtual TT *getV();

protected:
    /**
      *  @var      vektor
      *  @brief    Vektor mit den 4 Werten
      */
    TT vektor[4];

    /**
      *  @fn       init(TT a, TT b, TT c, TT d)
      *  @brief    Initialisierung
      *  @param    a A-Wert
      *  @param    b B-Wert
      *  @param    c C-Wert
      *  @param    d D-Wert
      */
    virtual void init(TT a, TT b, TT c, TT d);

    
};
#endif // QUATRO_H

