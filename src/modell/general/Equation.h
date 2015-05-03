#ifndef EQUATION_H
#define EQUATION_H

/**
 *  @package   3dogs
 *  @file      Equation.h
 *  @brief     Template fuer Gleichungsparameter ( 4 Werte )
 *             Verwendung z.B. fuer "glClipPlane()"
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/general/Equation.h - 
 *             Template fuer Gleichungsparameter ( 4 Werte )
 *             Verwendung z.B. fuer "glClipPlane()"
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
  *  @class    Equation   
  *  @brief    Template fuer Gleichungsparameter ( 4 Werte )
  *            Verwendung z.B. fuer "glClipPlane()"
  */
template<class TT> class Equation: public Quatro<TT> 
{

public:

    /**
      *  @fn       Equation
      *  @brief    Konstruktur
      */
    Equation();

    /**
      *  @fn       ~Equation
      *  @brief    Dekonstruktur
      */
    ~Equation();

    /**
      *  @fn       Equation(TT a, TT b, TT c, TT d)
      *  @brief    Konstruktur mit Uebergabe der  4 Werte
      *  @param    a A-Wert
      *  @param    b B-Wert
      *  @param    c C-Wert
      *  @param    d D-Wert
      */
    Equation(TT a, TT b, TT c, TT d);

   /**
      *  @fn       getA
      *  @brief    A-Wert holen
      *  @return   TT& A-Wert
      */
    virtual TT& getA(void);

    /**
      *  @fn       setA(TT a)  
      *  @brief    A-Wert setzen
      *  @param    a A-Wert
      */
    virtual void setA(TT a);

    /**
      *  @fn       getB
      *  @brief    B-Wert holen
      *  @return   TT& B-Wert
      */
    virtual TT& getB(void);

    /**
      *  @fn       setB(TT b)
      *  @brief    B-Wert setzen
      *  @param    b B-Wert
      */
    virtual void setB(TT b);

    /**
      *  @fn       getC
      *  @brief    C-Wert holen
      *  @return   TT& C-Wert
      */
    virtual TT& getC(void);

    /**
      *  @fn       setC(TT c)
      *  @brief    C-Wert setzen
      *  @param    c C-Wert
      */
    virtual void setC(TT c);

    /**
      *  @fn       getD
      *  @brief    D-Wert holen
      *  @return   TT& D-Wert
      */
    virtual TT& getD();

    /**
      *  @fn       setD(TT d)
      *  @brief    D-Wert setzen
      *  @param    d D-Wert
      */
    virtual void setD(TT d);

};
#endif // EQUATION_H

