#ifndef VEKTOR_H
#define VEKTOR_H

/**
 *  @package   3dogs
 *  @file      Vektor.h
 *  @brief     Template fuer Vektor
 *             Ableitung des STL Bibliotheks-Templates 
 *             std::vector 
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/general/Vektor.h - 
 *             Template fuer Vektor
 *             Ableitung des STL Bibliotheks-Templates 
 *             std::vector 
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

#include <vector>
#include <windows.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <gl/glut.h>

/** 
  *  @class    Vektor
  *  @brief    Template fuer Vektor
  *            Ableitung des STL Bibliotheks-Templates std::vector 
  */
template<class TT, class ELEMENT> class Vektor: public std::vector<TT>
{

public:

    /**
      *  @fn       Vektor
      *  @brief    Konstruktur
      */
    Vektor();

    /**
      *  @fn       ~Vektor
      *  @brief    Dekonstruktur
      */
    ~Vektor();

    /**
      *  @fn       push_back ( ELEMENT element, GLuint name = 0 )
      *  @brief    Vektorelement dem Vektor hinzufuegen
      *  @param    element Adresse einer Variable vom Typ ELEMENT
      *  @param    name Gewuenschter numerischer Name des Vektorelements,
      *            (Optionaler Parameter, Default-Wert = 0)
      */
    virtual void push_back ( ELEMENT element, GLuint name = 0 );

    /**
      *  @fn       push_back ( TT tt )
      *  @brief    Vektorelement dem Vektor hinzufuegen
      *  @param    tt Instanz der Klasse VektorElement
      */
    virtual void push_back ( TT tt );

    /**
      *  @fn       find ( GLuint name )
      *  @brief    Nach einem Vektorelement suchen
      *  @param    name Numerischer Name des gesuchten Vektoreleements
      *  @return   TT* Zeiger auf das gesuchte Vektorelement oder NULL-Zeiger
      */
    virtual TT *find ( GLuint name );
};
#endif // VEKTOR_H

