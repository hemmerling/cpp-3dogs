#ifndef MTRANSX4_H
#define MTRANSX4_H

/**
 *  @package   3dogs
 *  @file      MTransX4.h
 *  @brief     Geschwindigkeit erhoehen
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MTransX4.h - 
 *             Geschwindigkeit einer Bewegung erhoehen
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
 
#include "mtransx2.h"
#include "mrotation1.h"

/** 
  *  @class    MTransX4
  *  @brief    Geschwindigkeit einer Bewegung erhoehen
  */
class MTransX4: public MTransX2 {

public:

    /**
      *   @fn       MTransX4
      *   @brief    Konstruktur
      */
    MTransX4(void);

    /**
      *   @fn       MTransX4(MTranslation2 *command)
      *   @brief    Konstruktur mit Uebergabe des zu 
      *             registrierenden Kommandos,
      *             das spaeter ausgefuehrt werden soll
      *   @param    command
      */
    MTransX4(MTranslation2 *command);

    /**
      *   @fn       ~MTransX4
      *   @brief    Dekonstruktur
      */    
    ~MTransX4(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       setStep(GLfloat step)
      *   @brief    Schrittgroesse setzen
      *   @param    step
      */
    virtual void setStep(GLfloat step);

    /**
      *   @fn       getStep
      *   @brief    Schrittgroesse holen
      *   @return   getStep
      */
    virtual GLfloat getStep(void);

protected:

    /**
      *   @var      step
      *   @brief    Schrittgroesse
      */
    GLfloat step;		     

    /**
      *   @fn       update2
      *   @brief    Veraenderung durchfuehren
      */
   virtual void update2(void);
            
};
#endif // MTRANSX4_H

