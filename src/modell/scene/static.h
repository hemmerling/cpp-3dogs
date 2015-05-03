#ifndef STATIC_H
#define STATIC_H

/**
 *  @package   3dogs
 *  @file      static.h
 *  @brief     Statische Methoden und Daten
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/scene/static.h - 
 *             Statische Methoden und Daten
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
 
#include "../../3dogs.h"
#include "../../framework/opengl/opengl.h"
#include "../../framework/opengl/opengl3.h"

/** 
  *  @class    Static    
  *  @brief    Statische Methoden und Daten
  */
class Static
{
  public:

    /**
      *  @fn      Static
      *  @brief   Konstruktur
      */
    Static(void);

    /**
      *  @fn      Static
      *  @brief   Dekonstruktur
      */
    ~Static(void);

    /**
      *  @fn      setTimePeriod(GLint timePeriod)
      *  @brief   Periodendauer setzen
      *  @param   timePeriod
      */
 	virtual void setTimePeriod(GLint timePeriod);					

    /**
      *  @fn      getPtrTimePeriod
      *  @brief   Zeiger auf Periodendauer holen
      *  @return  GLint *
      */
    virtual GLint *getPtrTimePeriod(void);

    /**
      *  @fn      getTimePeriod
      *  @brief   Periodendauer holen
      *  @return  GLint
      */
	virtual GLint getTimePeriod(void);	

    /** 
      *  @fn      getQueue2
      *  @brief   Zeiger auf Queue holen
      *  @return  Vektor< VektorElement<ZCmd *>, ZCmd *> *
      */
    static Vektor< VektorElement<ZCmd *>, ZCmd *> *getQueue2(void);

    /** 
      *  @fn      getQueue
      *  @brief   Zeiger auf Queue holen
      *  @return  ZQueue *
      */    
    static ZQueue *getQueue(void);

    /** 
      *  @fn      getDisplayListQueue2
      *  @brief   Zeiger auf DisplayListQueue holen
      *  @return  Vektor< VektorElement<ZCmd *>, ZCmd *> *
      */
    static Vektor< VektorElement<ZCmd *>, ZCmd *> *getDisplayListQueue2(void);
 
    /** 
      *  @fn      getDisplayListQueue
      *  @brief   Zeiger auf DisplayListQueue holen
      *  @return  ZQueue *
      */
    static ZQueue *getDisplayListQueue(void);

    /**
      *  @fn      getZInput
      *  @brief   Zeiger auf ZInput holen
      *  @return  ZInput *
      */
    static ZInput *getZInput(void);

    /** 
      *  @fn      getEye
      *  @brief   Eye holen
      *  @return  Coordinates *
      */
    static Coordinates *getEye(void);
 
    /** 
      *  @fn      setEye(Coordinates vEye)
      *  @brief   Eye setzen
      *  @param   vEye
      */
    static void setEye(Coordinates vEye);

    /** 
      *  @fn      getCenter(void)
      *  @brief   Center holen
      *  @return  Coordinates *
      */
    static Coordinates *getCenter(void);
 
    /** 
      *  @fn      setCenter(Coordinates vCenter)
      *  @brief   Center setzen
      *  @param   vCenter
      */
    static void setCenter(Coordinates vCenter);

    /** 
      *  @fn      getUp(void)
      *  @brief   Up holen
      *  @return  Coordinates *
      */
    static Coordinates *getUp(void);
 
    /** 
      *  @fn      setUp(Coordinates vUp)
      *  @brief   Up setzen
      *  @param   vUp
      */
    static void setUp(Coordinates vUp);

    /**
      *  @var     aOpenGL
      *  @brief   Methoden mit den OpenGL Kommandos, 
      *           fuer jede Objekt-Klasse eins
      */  
   static OpenGL aOpenGL;    
    
  protected:

    /** 
      *  @var     aTimePeriod
      *  @brief   Periodendauer in Millisekunden
      *           1 / Frequenz =  Periodendauer
      *           Frequenz = Anzahl Bildwechsel pro Sekunde
      */
    static GLint aTimePeriod;

    /**
      *  @var     aQueue
      *  @brief   Queue mit Referenzen zu allen OpenGL Kommandos 
      *           ( = Objekten und Aktionen ). 
      */
    static ZQueue aQueue;

    /**
      *  @var     aDisplayListQueue
      *  @brief   Queue mit Referenzen zu allen OpenGL Kommandos 
      *           einer DisplayListe
      */
    static ZQueue aDisplayListQueue;

    /**
      *  @var     aZInput
      *  @brief   Rueckmelden von Eingaben der Callback-Routinen 
      */
   static ZInput aZInput;

    /**
      *  @var     aEye
      *  @brief   Koordinaten des Auges "Eye"
      */
    static Coordinates aEye;

    /**
      *  @var     aCenter
      *  @brief   Koordinaten des Zentrums "Center"
      */
    static Coordinates aCenter;

    /**
      *  @var     aUp
      *  @brief   Koordinaten des Vektors 'nach oben' "Up"
      */
    static Coordinates aUp;
};
#endif

