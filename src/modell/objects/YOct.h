#ifndef YOCT_H
#define YOCT_H

/**
 *  @package   3dogs
 *  @file      YOct.h
 *  @brief     Repraesentation eines OpenGL O_c_t_a_h_e_d_r_o_n
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/objects/YOct.h - 
 *             Repraesentation eines OpenGL O_c_t_a_h_e_d_r_o_n
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

#include "zobject.h"

/** 
  *  @class    YOct
  *  @brief    Repraesentation eines OpenGL 
  *            O_c_t_a_h_e_d_r_o_n
  */
class YOct: public ZObject {

public:

    /**
      *   @fn       YOct
      *   @brief    Konstruktur
      */
    YOct(void);

    /**
      *   @fn       ~YOct
      *   @brief    Dekonstruktur
      */    
    ~YOct(void);

    /**
      *   @fn       display(OpenGL &aOpenGL)
      *   @brief    Ausfuehren in OpenGL 
      *   @param    aOpenGL
      */
    virtual void display(OpenGL &aOpenGL);
    
};
#endif // YOCT_H

