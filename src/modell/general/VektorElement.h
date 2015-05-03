#ifndef VEKTORELEMENT_H
#define VEKTORELEMENT_H

/**
 *  @package   3dogs
 *  @file      VektorElement.h
 *  @brief     Template fuer Vektorelement
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/general/VektorElement.h - 
 *             Template fuer Vektorelement 
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
#include "modifizierer.h"

/** 
  *  @class    VektorElement
  *  @brief    Template fuer Vektorelement
  */
template<class TT> class VektorElement: public Modifizierer<TT>
{

public:

    /**
      *  @fn       VektorElement
      *  @brief    Konstruktur
      */
    VektorElement();

    /**
      *  @fn       ~VektorElement
      *  @brief    Dekonstruktur
      */
    ~VektorElement();

    /**
      *  @fn       VektorElement( TT objekt, GLuint name = 0 )
      *  @brief    Konstruktor
      *  @param    objekt
      *  @param    name
      */
    VektorElement( TT objekt, GLuint name = 0 );

    /**
      *  @fn       setName ( GLuint name = 0 )
      *  @brief    Setzen des alphanumerischen Namens
      *  @param    name
      */
    virtual void setName ( GLuint name = 0 );

    /**
      *  @fn       getName
      *  @brief    Holen des alphanumerischen Namens
      *  @return   GLuint name
      */
    GLuint getName ( void );

protected:
    /**
      *  @var      name
      *  @brief    Numerischer Name
      */
    GLuint name;

};
#endif // VEKTORELEMENT_H

