#ifndef LPOSITION_H
#define LPOSITION_H

/**
 *  @package   3dogs
 *  @file      LPosition.h
 *  @brief     Template fuer Licht-Position ( 4 Werte )
 *             Verwendung z.B. "fuer glLightfv()"
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/general/LPosition.h - 
 *             Template fuer Licht-Position ( 4 Werte )
 *             Verwendung z.B. "fuer glLightfv()"
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
  *  @class    LPosition   
  *  @brief    Template fuer Licht-Position ( 4 Werte )
  *            Verwendung z.B. "fuer glLightfv()"
  */
template<class TT> class LPosition: public Quatro<TT> 
{

public:

    /**
      *  @fn       LPosition
      *  @brief    Konstruktur
      */
    LPosition();

    /**
      *  @fn       ~LPosition
      *  @brief    Dekonstruktur
      */
    ~LPosition();

    /**
      *  @fn       LPosition(TT x, TT y, TT z, TT w)
      *  @brief    Konstruktur mit Uebergabe der  4 Werte
      *  @param    x X-Koordinate
      *  @param    y Y-Koordinate
      *  @param    z Z-Koordinate
      *  @param    w W-Wert
      */
    LPosition(TT x, TT y, TT z, TT w);

    /**
      *  @fn       getX
      *  @brief    X-Koordinate holen
      *  @return   TT& GLfloat X-Koordinate
      */
    virtual TT &getX();

    /**
      *  @fn       setX(TT x)
      *  @brief    X-Koordinate setzen
      *  @param    x X-Koordinate
      */
    virtual void setX(TT x);

    /**
      *  @fn       getY
      *  @brief    Y-Koordinate holen
      *  @return   TT& GLfloat Y-Koordinate
      */
    virtual TT &getY();

    /**
      *  @fn       setY(TT y)
      *  @brief    Y-Koordinate setzen
      *  @param    y Y-Koordinate
      */
    virtual void setY(TT y);

    /**
      *  @fn       getZ
      *  @brief    Z-Koordinate holen
      *  @return   TT& GLfloat Z-Koordinate
      */
    virtual TT &getZ();

    /**
      *  @fn       setZ(TT z)
      *  @brief    Z-Koordinate setzen
      *  @param    z Z-Koordinate
      */
    virtual void setZ(TT z);

    /**
      *  @fn       getW
      *  @brief    W-Wert holen
      *  @return   TT& GLfloat W-Wert
      */
    virtual TT &getW();

    /**
      *  @fn       setW(TT w)
      *  @brief    W-Wert setzen
      *  @param    w W-Wert
      */
    virtual void setW(TT w);
};
#endif // LPOSITION_H

