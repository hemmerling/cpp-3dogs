#ifndef LIGHT_H
#define LIGHT_H

/**
 *  @package   3dogs
 *  @file      Light.h
 *  @brief     Template fuer Licht-Parameter ( 4 Werte )
 *             Verwendung z.B. "fuer glLightModel()"
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/general/Light.h - 
 *             Template fuer Licht-Parameter ( 4 Werte )
 *             Verwendung z.B. "fuer glLightModel()"
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

#include "quatro.h"

/** 
  *  @class    Light   
  *  @brief    Template fuer Licht-Parameter ( 4 Werte )
  *            Verwendung z.B. "fuer glLightModel()"
  */
template<class TT> class Light: public Quatro<TT> 
{

public:

    /**
      *  @fn       Light
      *  @brief    Konstruktur
      */
    Light();

    /**
      *  @fn       ~Light
      *  @brief    Dekonstruktur
      */
    ~Light();

    /**
      *  @fn       Light(TT r, TT g, TT b, TT a)
      *  @brief    Konstruktur mit Uebergabe der  4 Werte
      *  @param    r R-Wert
      *  @param    g G-Wert
      *  @param    b B-Wert
      *  @param    a A-Wert
      */
    Light(TT r, TT g, TT b, TT a);

    /**
      *  @fn       getR
      *  @brief    R-Wert holen
      *  @return   TT& R-Wert
      */
    virtual TT &getR();

    /**
      *  @fn       setR(TT r)
      *  @brief    R-Wert setzen
      *  @param    r R-Wert
      */
    virtual void setR(TT r);

    /**
      *  @fn       getG
      *  @brief    G-Wert holen
      *  @return   TT& G-Wert
      */
    virtual TT &getG();

    /**
      *  @fn       setG(TT g)
      *  @brief    G-Wert setzen
      *  @param    g G-Wert
      */
    virtual void setG(TT g);

    /**
      *  @fn       getB
      *  @brief    B-Wert holen
      *  @return   TT& B-Wert
      */
    virtual TT &getB();

    /**
      *  @fn       setB(TT b)
      *  @brief    B-Wert setzen
      *  @param    b B-Wert
      */
    virtual void setB(TT b);

    /**
      *  @fn       getA
      *  @brief    A-Wert holen
      *  @return   TT& A-Wert
      */
    virtual TT &getA();

    /**
      *  @fn       setA(TT a)
      *  @brief    A-Wert setzen
      *  @param    a A-Wert
      */
    virtual void setA(TT a);
};
#endif // LIGHT_H

