/**
 *  @package   3dogs
 *  @file      main.cpp
 *  @brief     Main-Datei des OpenGL-Demos 3DOGS
 *  @author    Rolf Hemmerling <hemmerling@gmx.net>
 *  @version   1.00,
 *             Entwicklungswerkzeug "Dev-C ++ 4.9.9.1", 
 *             mit GNU-C/C++ Compiler "MinGW 3.3.1"
 *  @date      2015-01-01
 *  @copyright Apache License, Version 2.0
 *
 *  framework/opengl/main.cpp - 
 *             Main-Datei des OpenGL-Demos 3DOGS
 *             Initialisiert das Fenster und startet die Message-Loop.
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
 *  Letztes Update: 2004-06-17
 */
 
#include "callback.h"


/**
  *	 Hauptprogramm.
  *  Initialisiert das Fenster und startet die Message-Loop.
  *  Datum 2004-06-17
  *  @version 1.0
  *  @author Rolf Hemmerling
  */
int
main( int argc, char *argv[] )
{
  try  
   {
    glutInitWindowSize ( WIDTH, HEIGHT );    // neues Fenster 640 x 480 Pixel
	glutInit ( &argc, argv );				 // initialisiert die glut
	glutInitDisplayMode ( GLUT_DOUBLE		 // mit double buffering
						| GLUT_RGB			 // RGB-Farben (keine Indexfarben)
						| GLUT_DEPTH );		 // mit z-Buffer
	glutCreateWindow("3DOGS - Bitte 'F1' druecken fuer 'Hilfe' !");  // neues Fenster mit Titel
  
    Callback *aCallback = new Callback;      
   
	Callback::myInit();				      // "meine" Initialisierung für dies Programm
	
	glutDisplayFunc	(&Callback::myDisplayFunc );	  // zeichnet den Fensterinhalt neu

	glutReshapeFunc (&Callback::myReshapeFunc );  // passt die Zeichenfläche an
                                              //  die aktuelle Fenstergröße an

	glutKeyboardFunc( &Callback::myKeyboardFunc );  // verarbeitet Tastatureingaben

	glutMouseFunc( &Callback::myMouseFunc );        // verarbeitet Maus-Klicks

	glutMotionFunc( &Callback::myMotionFunc );      // verarbeitet Mausbewegungen

    glutPassiveMotionFunc( &Callback::myPassiveMotionFunc );

    glutEntryFunc( &Callback::myEntryFunc );

    glutVisibilityFunc( &Callback::myVisibilityFunc );

    glutIdleFunc( &Callback::myIdleFunc );

 	glutTimerFunc ( 50, &Callback::myTimerFunc, 0); // Timer für die Animation (50 ms)

    glutMenuStateFunc( &Callback::myMenuStateFunc );

    glutSpecialFunc( &Callback::mySpecialFunc );

    glutMenuStatusFunc( &Callback::myMenuStatusFunc );
    
    glutOverlayDisplayFunc( &Callback::myOverlayDisplayFunc );
   
    glutWindowStatusFunc( &Callback::myWindowStatusFunc );

    glutKeyboardUpFunc( &Callback::myKeyboardUpFunc );

    glutSpecialUpFunc( &Callback::mySpecialUpFunc );

    glutJoystickFunc( &Callback::myJoystickFunc, POLL_INTERVAL );
   
	glutMainLoop();	// Aufruf der Programm-Endlosschleife (Message-Loop).
					// (läuft bis zum Programmabbruch; wartet auf
					//  Eingaben, verteilt Windows-Events usw.)
   }
  catch(char *str)
   {
      cout << "Exception: " << str << endl;
      // return 1;   // Dieses return sollte zum Testen mal auskommentiert werden
   };
      
   return 0;	// Das wars. Schluß, aus, vorbei und zurück zum Desktop.
}

