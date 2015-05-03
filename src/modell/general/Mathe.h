#ifndef MATHE_H
#define MATHE_H

/**
 *  @package   3dogs
 *  @file      Mathe.h
 *  @brief     Mathematische Funktionen
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/general/Mathe.h - 
 *             Mathematische Funktionen
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

#include <GL/gl.h>
#include <GL/glu.h>
#include <cmath>

using namespace std;

/** 
  *  @class    Mathe   
  *  @brief    Mathematische Funktionen
  */
class Mathe {

public:

    /**
      *  @fn       Mathe
      *  @brief    Konstruktur
      */
    Mathe();

    /**
      *  @fn       ~Mathe
      *  @brief    Dekonstruktur
      */
    ~Mathe();

    /**
      *  @fn       modulo(GLfloat aOperator1, GLfloat aOperator2)
      *  @brief    Modulo-Funktion fuer float
      *  @return   GLfloat X-Wert
      */
    static GLfloat modulo(GLfloat aOperator1, GLfloat aOperator2);
    
};
#endif // MATHE_H

