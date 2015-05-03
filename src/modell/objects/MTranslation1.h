#ifndef MTRANSLATION1_H
#define MTRANSLATION1_H

/**
 *  @package   3dogs
 *  @file      MTranslation1.h
 *  @brief     Meine veraenderliche OpenGL Translation1
 *             z.B. fuer Veraenderung einer Lichtposition 
 *             in der OpenGL Szene
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MTranslation1.h - 
 *             Meine veraenderliche OpenGL Translation1
 *             z.B. fuer Veraenderung einer Lichtposition 
 *             in der OpenGL Szene
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
 
#include "ztranslation.h"

/** 
  *  @class    MTranslation1
  *  @brief    Meine veraenderliche OpenGL Translation1
  *            z.B. fuer Veraenderung einer Lichtposition 
  *            in der OpenGL Szene
  */
class MTranslation1: public ZTranslation {

public:

    /**
      *   @fn       MTranslation1
      *   @brief    Konstruktur
      */
    MTranslation1(void);
 
     /**
      *   @fn       ~MTranslation1
      *   @brief    Dekonstruktur
      */    
    ~MTranslation1(void);

    /**
      *   @fn       setStep(GLfloat step)
      *   @brief    Schrittgroesse setzen
      *   @param    step
      */
    virtual void setStep(GLfloat step);

    /**
      *   @fn       getStep
      *   @brief    Schrittgroesse holen
      *   @return   GLfloat
      */
    virtual GLfloat getStep(void);

protected:

	/**
      *   @var      step
      *   @brief    Schrittgroesse
      */
    GLfloat step;		     

};
#endif // MTRANSLATION1_H
