#ifndef MODIFIZIERER_H
#define MODIFIZIERER_H

/**
 *  @package   3dogs
 *  @file      Modifizierer.h
 *  @brief     Template fuer Modifizierer
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/general/Modifizierer.h - 
 *             Template fuer Modifizierer
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
  *  @class    Modifizierer   
  *  @brief    Template fuer Modifizierer
  */
template<class TT> class Modifizierer
{

public:

    /**
      *  @fn       Modifizierer
      *  @brief    Konstruktur
      */
    Modifizierer();

    /**
      *  @fn       ~Modifizierer
      *  @brief    Dekonstruktur
      */
    ~Modifizierer();

    /**
      *  @fn       Modifizierer( TT objekt)
      *  @brief    Konstruktur
      *  @param    objekt
      */
    Modifizierer( TT objekt) ;

    /**
      *  @fn       setObjekt ( TT objekt )
      *  @brief    Setzen des Zeigers auf das Objekt
      *  @param    objekt
      */
    virtual void setObjekt ( TT objekt );

    /**
      *  @fn       getObjekt
      *  @brief    Holen des Zeigers auf das Objekt
      *  @return   TT objekt
      */
    virtual TT getObjekt ( void );

protected:

    /**
      *  @var      objekt
      *  @brief    Zeiger auf das Objekt
      */
    TT objekt;

};
#endif // MODIFIZIERER_H

