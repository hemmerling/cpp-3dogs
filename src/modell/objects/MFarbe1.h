#ifndef MHFARBE1_H
#define MHFARBE1_H

/**
 *  @package   3dogs
 *  @file      MFarbe1.h
 *  @brief     Veraenderung der RGB-Kompenente "R"
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/MFarbe1.h - 
 *             Veraenderung der RGB-Kompenente "R"
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
 
#include "mfarbe.h"

/** 
  *  @class    MFarbe1   
  *  @brief    Veraenderung der RGB-Kompenente "R"
  *            der Farbe eines Objekts
  */
class MFarbe1: public MFarbe {

public:

    /**
      *   @fn       MFarbe1
      *   @brief    Konstruktur
      */
    MFarbe1(void);

    /**
      *   @fn       MFarbe1(ZObject *command)
      *   @brief    Konstruktur mit Uebergabe des zu registrierenden 
      *             Kommandos, das spaeter ausgefuehrt werden soll
      */
    MFarbe1(ZObject *command);

    /**
      *   @fn       ~MFarbe1
      *   @brief    Dekonstruktur
      */
    ~MFarbe1(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);

    /**
      *   @fn       update
      *   @brief    Berechnungen durchfuehren
      */
    virtual void update(void);

    /**
      *   @fn       update(GLubyte aKey)
      *   @brief    Berechnungen durchfuehren
      *   @param    aKey
      */
    void update(GLubyte aKey);

    /**
      *   @fn       isStatus
      *   @brief    Status holen
      */
	virtual bool isStatus(void);	

	/**
      *   @fn       setStatus(bool aStatus)
      *   @brief    Status setzen
      *   @param    aStatus
      */
	virtual void setStatus(bool aStatus); 					

protected:
    
    /**
      *   @var      aStatus
      *   @brief    Status fuer Veraenderung der Objektfarbe
      */
    bool aStatus;
    
    /**
      *   @fn       update2
      *   @brief    Veraenderung durchfuehren
      */
    void update2(void);	

};
#endif // MFARBE1_H

