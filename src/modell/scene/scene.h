#ifndef SCENE_H
#define SCENE_H

/**
 *  @package   3dogs
 *  @file      scene.h
 *  @brief     Daten und Methoden der OpenGL Szene
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  modell/scene/scene.h - 
 *             Daten und Methoden der OpenGL Szene
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
#include "static.h"

/**
  *  @class    Scene    
  *  @brief    Daten und Methoden der OpenGL Szene
  */
class Scene {

public:

    /**
      *   @fn       Scene(aStatic)
      *   @brief    Konstruktur mit Uebergabe einer Instanz 
      *             der statischen Daten
      *   @param    aStatic Instanz mit den statischen Daten der OpenGL Szene
      */
    Scene(Static &aStatic);    

    /**
      *   @fn       ~Scene
      *   @brief    Dekonstruktur 
      */
    ~Scene(void);

    /**
      *   @fn       calcAngles(Static &aStatic)
      *   @brief    Winkel fuer naechsten Schritt berechnen
      *             Modifiziert die statischen Variablen aAngle1, aAngle2 !
      *             Suche nach numerischen IDs
      *   @param    aStatic
      */
    static void calcAngles(Static &aStatic);

    /**
      *   @fn       calcAnglesByNames(Static &aStatic)
      *   @brief    Winkel fuer naechsten Schritt berechnen
      *             Modifiziert die statischen Variablen aAngle1, aAngle2 !
      *             Suche nach alphanumerischen Namen ( ineffizient, 
      *             aber fuer Benutzerinteraktion u.U. nuetzlich )
      *   @param    aStatic
      */
    static void calcAnglesByNames(Static &aStatic);


    /**
      *   @fn       calc(Static &aStatic)
      *   @brief    Berechnungen durchfuehren
      *             Wird nicht mehr aufgerufen
      *             Wird nicht mehr benoetigt !
      *   @param    aStatic
      */
    static void calc(Static &aStatic);
    
protected:

    /**
      *   @fn       init(Static &aStatic)
      *   @brief    Aktuelle Szene
      *             Daten anlegen, Initialisierung
      *   @param    aStatic
      */
    void init(Static &aStatic);

    /**
      *   @fn       init2(Static &aStatic)
      *   @brief    Nicht-aktuelle Szene
      *             Daten anlegen, Initialisierung
      *   @param    aStatic
      */
    void init2(Static &aStatic);

    /**
      *   @fn       chessboard(ZQueue *aQueue, int aSize)
      *   @brief    Schachbrett anlegen
      *             Darstellungsreihenfolge in der DisplayListe festlegen      
      *   @param    aQueue Feld in die die OpenGL-Objekte des Schachbretts kopiert werden
      *   @param    aSize Groesse des Schachbretts
      */
    void chessboard(ZQueue *aQueue, int aSize);

    //void chessboard( Vektor< VektorElement<ZCmd *>, ZCmd *>
    //                 *aQueue, int aSize);
};
#endif // SCENE_H

