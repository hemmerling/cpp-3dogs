#include "opengl.h"
#include "opengl3.h"
// Diese Include Anweisung darf nicht in "opengl3.h" stehen:
#include "callback.h"

OpenGL::OpenGL(void){}

OpenGL::~OpenGL(void){}

void OpenGL::display(XInit *x)
{
    Light<GLfloat> *aSpecular = new Light<GLfloat>(1.0, 1.0, 1.0, 1.0);
    
    glEnable(GL_DEPTH_TEST);				// mit z-Buffer (verdeckten Seiten)
    glEnable(GL_LIGHTING);					// mit Beleuchtung/Schattierung
    glEnable(GL_LIGHT0);				  	// mit Licht Nr. 0
	glEnable(GL_COLOR_MATERIAL);		  	// mit Materialfarben
	glColorMaterial ( GL_FRONT_AND_BACK, 		// auf beiden Seiten
					  GL_AMBIENT_AND_DIFFUSE ); // für ambientes und diffues Licht
    glMaterialfv( GL_FRONT, GL_SPECULAR, aSpecular->getV());
    glMaterialf( GL_FRONT, GL_SHININESS, 200);
    
	int aNumberOfClipPlanes = 0;             // mit Clipping Planes
    glGetIntegerv(GL_MAX_CLIP_PLANES,&aNumberOfClipPlanes);
    for ( int aLaufVariable = 0; aLaufVariable < aNumberOfClipPlanes; aLaufVariable++ )
     {
   	   glEnable(GL_CLIP_PLANE0 + aLaufVariable);
     };
    // cout << "Anzahl Clip Panes =" << aNumberOfClipPlanes << endl;
    
    // Shading Modell - Anfangszustand definieren
    ZObject::setSmoothShading(true);

}

void OpenGL::display1(XDisplay *x)
{
    // Uebung 1
    //	glClearColor( 1.0f, 1.0f, 1.0f, 1.0f );	// Hintergrundfarbe setzen
	glClearColor( 0.f, 1.0f, 1.0f, 1.0f );	// Hintergrundfarbe setzen
	glClear(GL_COLOR_BUFFER_BIT |			// altes Bild löschen:  Farbe +
			GL_DEPTH_BUFFER_BIT);			//						z-Buffer
}

void OpenGL::display2(XDisplay *x)
{
	glutSwapBuffers();		// neues Bild anzeigen
}

void OpenGL::display(XReshape *x)
{
	glViewport		(0, 0, x->getWidth(), x->getHeight()); // Viewport von (0,0) bis (b,h)
	glMatrixMode	(GL_PROJECTION);		// Projektionsmatrix:
	glLoadIdentity();						// löschen			
	gluPerspective(65.0,					// Öffnungswinkel in y-Richtung = 65°
					(GLfloat)x->getWidth()/(GLfloat)x->getHeight(), // Aspect: Verhältnis Breite/Höhe des Fensters
					1.0,					// Abstand zur near-Kappungsebene	(>0)
					20.0);					// Abstand zur far-Kappungsebene	(>0)
	glMatrixMode	(GL_MODELVIEW);			// Modellabbildungsmatrix:
	glLoadIdentity();						// löschen	
	
	// f oder d
	glTranslatef 	(0, -2, -5);			// neuer Nullpunkt zum Zeichnen ist -5
											// (halbwegs mitten im Bildraum)
    // f oder d											
	glRotatef( 60.0, -1.0, 0.0, 0.0 );		// Objekte drehen

}

void OpenGL::display(XKeyboard *x)
{
  cout << "Key             x=" << x->getX() << ", y=" << x->getY() << ", key=" << toascii(x->getKey()) << endl;
  
  switch (x->getKey())
  {
	case 'p': glPolygonMode ( GL_FRONT_AND_BACK, GL_POINT ); break;
	case 'g': glPolygonMode ( GL_FRONT_AND_BACK, GL_LINE );	break; // Line = Gittermodus
	case 'f': glPolygonMode ( GL_FRONT_AND_BACK, GL_FILL );	break;
	case 'q':
	case (char)27:	exit(0);         /* quit: ex und hopp... */
	default: return;
  };

  glutPostRedisplay();

}

void OpenGL::display(XMouse *x)
{

  cout << "Maus            x=" << x->getX() << ", y=" << x->getY() << ", button="
       << x->getButton() << ", state=" << x->getState() << endl;

  switch (x->getButton())
  {
	case GLUT_LEFT_BUTTON: 
           switch ( x->getState() ) 
            {
              case GLUT_UP: 
                break;
              case GLUT_DOWN: 
                cout << "Linker Button gedrueckt" << endl;
               	glPolygonMode ( GL_FRONT_AND_BACK, GL_FILL );

                break;
              default:
               cout << "Fataler Fehler: GLUT_LEFT_BUTTON, aber weder GLUT_UP noch GLUT_DOWN" << endl;
            };
            break;
	case GLUT_MIDDLE_BUTTON: 
           switch ( x->getState() ) 
            {
              case GLUT_UP: 
                break;
              case GLUT_DOWN: 
                cout << "Mittlerer Button gedrueckt" << endl;
                glPolygonMode ( GL_FRONT_AND_BACK, GL_LINE );
                break;
              default:
               cout << "Fataler Fehler: GLUT_MIDDLE_BUTTON, aber weder GLUT_UP noch GLUT_DOWN" << endl;
            };
            break;	
	case GLUT_RIGHT_BUTTON:
           switch ( x->getState() ) 
            {
              case GLUT_UP: 
                break;
              case GLUT_DOWN: 
                cout << "Rechter Button gedrueckt" << endl;
                ZObject::setSmoothShading(! ZObject::isSmoothShading());
                break;
              default:
               cout << "Fataler Fehler: GLUT_RIGHT_BUTTON, aber weder GLUT_UP noch GLUT_DOWN" << endl;
            };
            break;	
	default:	
       cout << "Fataler Fehler: Unbekannter Parameter fuer 'glutMouseFunc'" << endl;
       return;
  }
  glutPostRedisplay();
}

void OpenGL::display(XMotion *x)
{
  cout << "Motion          x=" << x->getX() << ", y=" << x->getY() << endl;
}

void OpenGL::display(XPMotion *x)
{
  // cout << "PassiveMotion   x=" << x->getX() << ", y=" << x->getY() << endl;
}

void OpenGL::display(XEntry *x)
{
  cout << "Entry state=" << x->getState() << endl;
}

void OpenGL::display(XVisibility *x)
{
  cout << "Visibility state=" << x->getState() << endl;
}

void OpenGL::display(XIdle *x)
{
  // cout << "Idle" << endl;
}

void OpenGL::display(XTimer *x)
{
	glutPostRedisplay();					// Zeichnen anfordern
    glutTimerFunc( x->getTimePeriod(), &Callback::myTimerFunc, 0); // eigenen Aufruf nach 20 ms vormerken
}

void OpenGL::display(XMState *x)
{
  cout << "MState state=" << x->getState() << endl;
}

void OpenGL::display(XSpecial *x)
{
  cout << "Special         x=" << x->getX() << ", y=" << x->getY() << ", key=" << x->getKey() << endl;

  switch (x->getKey())
  {
	case GLUT_KEY_F1: displayHelp(); break;
	default: 
     cout << "Fataler Fehler: Unbekannter Parameter fuer 'glutSpecialFunc'" << endl;
     return;
  };
  
  glutPostRedisplay();
}

void OpenGL::display(XMStatus *x)
{
  cout << "MStatus      x=" << x->getX() << ", y=" << x->getY() 
       << " status=" << x->getStatus() << endl;
}

void OpenGL::display(XOverlay *x)
{
  cout << "OverlayDisplay" << endl;
}

void OpenGL::display(XWStatus *x)
{
  cout << "WStatus" << endl;
}

void OpenGL::display(XKeyboardUp *x)
{
  cout << "KeyUp           x=" << x->getX() << ", y=" << x->getY() 
       << ", key=" << toascii(x->getKey()) << endl;
}

void OpenGL::display(XSpecialUp *x)
{
  cout << "SpecialUp       x=" << x->getX() << ", y=" << x->getY() 
       << ", key=" << x->getKey() << endl;
}

void OpenGL::display(XJoystick *x)
{
  // cout << "Joystick       x=" << x->getX() << ", y=" << x->getY() 
  //     << ", z=" << x->getZ() << ", buttonMask=" << x->getButtonMask() << endl;
}

void OpenGL::display(ZCmd *x)
{
    cout << "Fataler Fehler. Es wurde 'OpenGL:display(ZCmd *)' aufgerufen" << endl;
}

void OpenGL::display(ZObject *x)
{
    cout << "Fataler Fehler. Es wurde 'OpenGL:display(ZObject *)' aufgerufen" << endl;
}

void OpenGL::display1(ZObject *x)
{
	// glColor3d 	 	( x->getColor().getR(), x->getColor().getG(), x->getColor().getB() );		
    if ( ! x->isLighting() ) 
      {
        glDisable(GL_LIGHTING); 
      };
      
	if ( x->isTransparenz() ) {
		glEnable (GL_BLEND);	// "Blending" = Transparenzberechnung einschalten
		glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);	// Transparenz-Funktion
	 }
	else 
     {
		glDisable (GL_BLEND);	// "Blending" aus
	 };
      
    if ( x->isSmoothShading() ) 
      {
        glShadeModel(GL_SMOOTH); 
      }
    else
      {
        glShadeModel(GL_FLAT); 
      };

    if ( x->isTextureDisplay() ) 
      {
       	glBindTexture(GL_TEXTURE_2D, x->getTexture()->getTextureName( x->getTextureName()));
        glEnable ( GL_TEXTURE_2D );
      }
    else
      {
        glDisable(GL_TEXTURE_2D); 
      };

    // glColor3fv ( x->getColor().getV() );  // fv oder dv
    glColor4fv ( x->getColor().getV() );  // fv oder dv

}

void OpenGL::display2(ZObject *x)
{
    if ( ! x->isLighting() ) 
      {
        glEnable(GL_LIGHTING); 
      }
    else 
     {  // Abschalten unnoetig
     };     
      
	if ( x->isTransparenz() )
     {
		glDisable (GL_BLEND);	// "Blending" aus
	 }
    else 
     {  // Abschalten unnoetig
     };     

    if ( x->isTextureDisplay() ) 
      {
        glDisable(GL_TEXTURE_2D); 
      }
    else 
     {  // Abschalten unnoetig
     };     
}

void OpenGL::display(YTorus *x)
{
 	glutSolidTorus  ( x->getInnerRadius(), x->getOuterRadius(), x->getSides(), x->getRings());  
}

void OpenGL::display(YSphere *x)
{
 	glutSolidSphere  ( x->getOuterRadius(), x->getSides(), x->getRings());
}

void OpenGL::display(YCube *x)
{
    glutSolidCube(x->getHeight());
}

void OpenGL::display(YCone *x)
{
  glutSolidCone 	( x->getBase(),    
					  x->getHeight(),
					  x->getSlices(),
					  x->getStacks() );	
}

void OpenGL::display(WQuadric *x)
{
  
  if ( x->getQuadric() == NULL ) 
   {
     x->setQuadric(gluNewQuadric());
     // cout << "Neuer Quadric wird angelegt" << endl;

   }
  else
   { 
     // altes Quadric Objekt weiterverwenden
   };        

   // Callback-Routine fuer Quadric vereinbaren ( !! Zeigerkonvertierung !! )
   gluQuadricCallback  ( x->getQuadric(), GLU_ERROR, (_GLUfuncptr)&Callback::myQuadricError );
   gluQuadricDrawStyle(x->getQuadric(), x->getDrawStyle());
   gluQuadricNormals(x->getQuadric(), x->getNormals());
   gluQuadricOrientation(x->getQuadric(),  x->getOrientation());  
   gluQuadricTexture(x->getQuadric(), x->getTexture());  
   
   // cout << "quadric Eigenschaften textur=" <<  ( x->getTexture() + 0 ) << endl;
}
  
void OpenGL::display(WCylinder *x)
{  
  gluCylinder 	    ( x->getQuadric()->getQuadric(),
                      x->getBase(),    
					  x->getTop(),
					  x->getHeight(),
					  x->getSlices(),
					  x->getStacks() );	
}

void OpenGL::display(ZPop *x)
{
 	glPopMatrix();	// alte Abbildungsmatrizen zurückholen
}

void OpenGL::display(ZPush *x)
{
 	glPushMatrix();	// Abbildungsmatrizen retten
}

void OpenGL::display(ZRotation *x)
{
  glRotatef ( x->getAngle(),                // f oder d
              x->getCoordinates().getX(), 
              x->getCoordinates().getY(), 
              x->getCoordinates().getZ() );	// Objekt drehen        
}

void OpenGL::display(ZTranslation *x)
{
    // Objekt verschieben
    // f oder d
    glTranslatef ( x->getCoordinates().getX(), x->getCoordinates().getY(), x->getCoordinates().getZ() );

}

void OpenGL::display(WLookAt *x)
{
    glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt ( x->getEye()->getX(), x->getEye()->getY(), x->getEye()->getZ(),
    			x->getCenter()->getX(), x->getCenter()->getY(), x->getCenter()->getZ(),
	    		x->getUp()->getX(), x->getUp()->getY(), x->getUp()->getZ() 
               );
}

void OpenGL::display(ZCuboid *x)
{
    // ZCuboid: 
    GLfloat W = x->getWidth() / 2.0; 
    // ZRectangle: 
    GLfloat L = x->getLength() / 2.0; 
    // YCube: 
    GLfloat H = x->getHeight() / 2.0; 
    
  	GLfloat 	
      P00 [] = {  1.0 * L,  1.0 * W,  1.0 * H },		
      T00 [] = {  0.0,  0.0 },
      T10 [] = {  0.0,  0.0 },
	
      P01 [] = { -1.0 * L,  1.0 * W,  1.0 * H },		
      T01 [] = {  1.0,  0.0 },
      T21 [] = {  0.0,  0.0 },
	
   	  P02 [] = {  1.0 * L, -1.0 * W,  1.0 * H },		
      T02 [] = {  0.0,  0.25 },
      T12 [] = {  0.0,  1.0  },

   	  P03 [] = { -1.0 * L, -1.0 * W,  1.0 * H },		
      T03 [] = {  1.0,  0.25 },
      T23 [] = {  0.0,  1.0 },
	
	  P04 [] = {  1.0 * L, -1.0 * W, -1.0 * H },		
      T04 [] = {  0.0,  0.5 },
      T14 [] = {  1.0,  1.0 },

      P05 [] = { -1.0 * L,  -1.0 * W, -1.0 * H },		
      T05 [] = {  1.0,  0.5 },
      T25 [] = {  1.0,  1.0 },

      P06 [] = {  1.0 * L,  1.0 * W, -1.0 * H },		
      T06 [] = {  0.0,  0.75 },
      T16 [] = {  1.0,  0.0 },

      P07 [] = { -1.0 * L,  1.0 * W, -1.0 * H },		
      T07 [] = {  1.0,  0.75 },
      T27 [] = {  1.0,  0.0 },

      P08 [] = {  1.0 * L,  1.0 * W,  1.0 * H }, // P0		
      T08 [] = {  0.0,  1.0 },

      P09 [] = { -1.0 * L,  1.0 * W,  1.0 * H }, // P1		
      T09 [] = {  1.0,  1.0 };
		
    glPushMatrix();
    // glDisable(GL_LIGHTING);

	glBegin ( GL_TRIANGLE_STRIP );

  	// Normalisierung
    glNormal3f  ( 0.0, 0.0, 1.0); // f oder d

    glTexCoord2fv( T10 );	
    glVertex3fv ( P00 );

    glTexCoord2fv( T12 );	
    glVertex3fv ( P02 );

    glTexCoord2fv( T16 );	
    glVertex3fv ( P06 );

	glTexCoord2fv( T14 );	
    glVertex3fv ( P04 );

    glEnd ();		

	glBegin ( GL_TRIANGLE_STRIP );

    glNormal3f  ( 0.0, 0.0, 1.0); // f oder d

	glTexCoord2fv( T00 );	
    glVertex3fv ( P00 );
	
    glTexCoord2fv( T01 );	
    glVertex3fv ( P01 );
	
    glTexCoord2fv( T02 );	
    glVertex3fv ( P02 );
    
	glTexCoord2fv( T03 );	
    glVertex3fv ( P03 );

	glTexCoord2fv( T04 );	
    glVertex3fv ( P04 );

	glTexCoord2fv( T05 );	
    glVertex3fv ( P05 );

    glTexCoord2fv( T06 );	
    glVertex3fv ( P06 );
    
	glTexCoord2fv( T07 );	
    glVertex3fv ( P07 );

	glTexCoord2fv( T08 );	
    glVertex3fv ( P08 );

	glTexCoord2fv( T09 );	
    glVertex3fv ( P09 );
    
    glEnd ();		
    
	glBegin ( GL_TRIANGLE_STRIP );

  	// Normalisierung
    glNormal3f  ( 0.0, 0.0, 1.0); // f oder d

    glTexCoord2fv( T21);	
    glVertex3fv ( P01);

    glTexCoord2fv( T23);	
    glVertex3fv ( P03);

    glTexCoord2fv( T27);	
    glVertex3fv ( P07);

	glTexCoord2fv( T25);	
    glVertex3fv ( P05);

    glEnd ();		

    // glEnable(GL_LIGHTING);
    glPopMatrix();
}

void OpenGL::display(ZRectangle *x)
{
    glPushMatrix();
    // glDisable(GL_LIGHTING);
    glBegin ( GL_QUADS );		

  	// Normalisierung
    glNormal3f  ( 0.0, 0.0, 1.0); // f oder d

    // f oder d
 	glVertex3f  ( x->getHeight(), 0.0, 0.0);
 	glVertex3f  ( 0.0, 0.0, 0.0);
	glVertex3f  ( 0.0, x->getLength(), 0.0);
	glVertex3f  ( x->getHeight(), x->getLength(), 0.0);

    glEnd ();		
    // glEnable(GL_LIGHTING);
    glPopMatrix();
}

void OpenGL::display(ZClipPlane *x)
{
    glClipPlane ( x->getPlane(), x->getEquation() ); // nur d
}

void OpenGL::display(WPerspective *x)
{
    glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
    gluPerspective ( x->getFieldOfViewAngle(), x->getAspectRatio(),
                     x->getNearDistance(), x->getFarDistance() );
    glMatrixMode (GL_MODELVIEW);
}

void OpenGL::display(ZGraticule *x)
{
    glPushMatrix();

	// Linienbreite
	glLineWidth(x->getLineWidth());

    glBegin ( GL_LINES );		
  	
	glColor3f 	( x->getColor().getR(), x->getColor().getG(), x->getColor().getB() );
 	glVertex3f  ( 0.0, 0.0, 0.0); // f oder d
 	glVertex3f  ( x->getLength(), 0.0, 0.0); // f oder d
	glColor3f 	( x->getColor().getB(), x->getColor().getR(), x->getColor().getG() );
 	glVertex3f  ( 0.0, 0.0, 0.0); // f oder d
 	glVertex3f  ( 0.0, x->getLength(), 0.0); // f oder d
	glColor3f 	( x->getColor().getG(), x->getColor().getB(), x->getColor().getR() );
 	glVertex3f  ( 0.0, 0.0, 0.0); // f oder d
 	glVertex3f  ( 0.0, 0.0, x->getLength()); // f oder d
    glEnd ();		

    glPopMatrix();
}

void OpenGL::store(ZDisplayList *x)
{
    // neue eindeutige ID fuer die DisplayListe holen
    x->setListIndex(glGenLists(1));
    // 
    if ( x->getListIndex() != 0 )
     {
        // Start der DisplayListe
        glNewList(x->getListIndex(),GL_COMPILE);

        // Ausfuehrung der OpenGL Kommandos
        // Eigentlich wuerde ich hier gerne sagen
        // x->ZExec::display(this);
        OpenGL aOpenGL;
        x->ZExec::display(aOpenGL);

        // Ende der DisplayListe
        glEndList();
     }
    else
     { 
       cout << "Fataler Fehler. Es wurde kein Index fuer die Display-Liste gefunden" << endl;    
     };
}

void OpenGL::display(ZDisplayList *x)
{
    // Ausfuehren der DisplayListe
    glCallList(x->getListIndex());
}

void OpenGL::display(YDodec *x)
{
    glutSolidDodecahedron();
}

void OpenGL::display(YOct *x)
{
    glutSolidOctahedron();
}

void OpenGL::display(YTetr *x)
{
    glutSolidTetrahedron();
}

void OpenGL::display(YIcos *x)
{
    glutSolidIcosahedron();
}

void OpenGL::display(YPot *x)
{
    glutSolidTeapot( x->getSize() );
}

void OpenGL::display(ZLighting *x)
{
    glEnable(GL_DEPTH_TEST);				// mit z-Buffer (verdeckten Seiten)
    glEnable(GL_LIGHTING);					// mit Beleuchtung/Schattierung
    glEnable(GL_LIGHT0+x->getNumber());	    // mit Licht Nr. 0
	glEnable(GL_COLOR_MATERIAL);		  	// mit Materialfarben
	glLightModeli   ( GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE );
	glColorMaterial ( GL_FRONT_AND_BACK, 		// auf beiden Seiten
					  GL_AMBIENT_AND_DIFFUSE ); // für ambientes und diffues Licht
	glShadeModel 	( GL_FLAT );
     
    // allgemeine Lichteigenschaften
    // Weiss-Anteil, hier: 20%
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, x->getLightRGBA()); // nur f 

    // View Direction
    if ( x->isViewDirectionZ() )
     {
       // GL_FALSE, 0 : -z
       glLightModelf(GL_LIGHT_MODEL_LOCAL_VIEWER,GL_FALSE);
     }
    else
     {
       // GL_TRUE, 1 : view from origin of eye coordinate system
       glLightModelf(GL_LIGHT_MODEL_LOCAL_VIEWER,GL_TRUE);
     };

    // glLightModelf(GL_LIGHT_MODEL_TWO_SIDE,GL_TRUE);
    glLightModelf(GL_LIGHT_MODEL_TWO_SIDE,GL_FALSE);

    // glLightModelf(GL_LIGHT_MODEL_LOCAL_VIEWER,GL_TRUE);
    glLightModelf(GL_LIGHT_MODEL_LOCAL_VIEWER,GL_FALSE);

    // nur f
	glLightfv(GL_LIGHT0+x->getNumber(), GL_AMBIENT, x->getAmbientRGBA() );	// mit Materialfarben
	glLightfv(GL_LIGHT0+x->getNumber(), GL_DIFFUSE, x->getDiffuseRGBA() );	// mit Materialfarben
	glLightfv(GL_LIGHT0+x->getNumber(), GL_SPECULAR, x->getSpecularRGBA() ); // mit Materialfarben

	glLightfv(GL_LIGHT0+x->getNumber(), GL_POSITION, x->getLightPosition() ); // Lichtposition
	glLightfv(GL_LIGHT0+x->getNumber(), GL_SPOT_DIRECTION, x->getSpotlightDirection()->getV() );
	glLightfv(GL_LIGHT0+x->getNumber(), GL_SPOT_EXPONENT, x->getSpotlightExponent() );
	glLightfv(GL_LIGHT0+x->getNumber(), GL_SPOT_CUTOFF, x->getSpotlightCutoffAngle() );

}

void OpenGL::display(MSzeneKippen *x)
{
     // kippen um "getAngle()" Grad um die X-Achse 
     glRotatef( x->getAngle(), -1.0, 0.0, 0.0 ); // f oder d
}

void OpenGL::displayHelp(void) 
{ 
    cout << "***************************************************************************" << endl;
    cout << "3DOGS - 3D OpenGL Demo" << endl;
    cout << "Copyright 2004-2015 Rolf Hemmerling" << endl;
    cout << "Licensed under the Apache License, Version 2.0" << endl;
    cout << "F1, 'q', ESC = Diese Hilfe / Programm-Ende / Programm-Ende" << endl;
	cout << "'p', 'g', 'f' = Darstellung im Punkt / GitterLinien / Fuell - Modus" << endl;
	cout << "'/','+','u' = Globale Lichtquelle1 niedriger / hoeher / in den Nullpunkt" << endl;
	cout << "F5, F6, F7 = Globale Lichtquelle2 niedriger / hoeher / in den Nullpunkt" << endl;
	cout << "'l' = Scheinerfer-Kerze ändert ihre Farbe von Gelb auf Rot, und zurueck" << endl;
    cout << "'Cursor-Links' = Lenker des Autos nach links einschlagen" << endl;
    cout << "'Cursor-Rechts' = Lenker des Autos nach rechts einschlagen" << endl;
    cout << "'Cursor-NachOben' = Vorwaertsgang einlegen" << endl; 
    cout << "'Cursor-NachUnten' = Rueckwaertsgang einlegen" << endl;
    cout << "'+', '_', ENDE = Geschwindigkeit erhoehen / ~ verringern / Auto anhalten" << endl;
    cout << "'Maus-Links'  = Darstellung im Fuell-Modus" << endl;
    cout << "'Maus-Mitte'  = Darstellung im Gitterlinien-Modus" << endl;
    cout << "'Maus-Rechts' = Shading Modell Smooth / Flat" << endl;    
    cout << "F9, F10, F11, F12 = Normaler Blickpunkt / Blickpunkt-Bewegung 1, 2, 3" << endl;
    cout << "***************************************************************************" << endl;
}

void OpenGL::OpenGLLoadTextureImage( const char *filename )
{
	AUX_RGBImageRec	*RGBImage = NULL;


	printf ("\n* lese Textur aus Datei '%s' ",filename );

	RGBImage = auxDIBImageLoadA( (const char*)filename );

    if( RGBImage == NULL )
	{
		cout << " **** FEHLER beim Einlesen der Datei '" << *filename << "'" << endl;
		exit(0);
	}
	else
	{
		cout << " ok:  Size " << RGBImage->sizeX << " x " << RGBImage->sizeY << " Pixel" << endl;
	}

	//scale_image();

    glTexParameteri	( GL_TEXTURE_2D,  GL_TEXTURE_WRAP_S,	 GL_REPEAT );
	glTexParameteri	( GL_TEXTURE_2D,  GL_TEXTURE_WRAP_T,	 GL_REPEAT );
    glTexParameteri	( GL_TEXTURE_2D,  GL_TEXTURE_MAG_FILTER, GL_LINEAR );
	glTexParameteri	( GL_TEXTURE_2D,  GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_NEAREST);
	glTexEnvi		( GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE,	 GL_MODULATE );

	gluBuild2DMipmaps(
			GL_TEXTURE_2D,	  // The target texture. Must be GL_TEXTURE_2D.
			3,				  // The number of color components in the texture. Must be 1, 2, 3, or 4.
			RGBImage->sizeX,  // The width and height, respectively, of the texture image.
			RGBImage->sizeY,
			GL_RGB,			  // The format of the pixel data.
			GL_UNSIGNED_BYTE, // The data type for data.
			RGBImage->data ); // A pointer to the image data in memory.

}
   
void OpenGL::display(WTexture *x)
{
    if ( ! x->isLoaded() )  
      {        
        // neue eindeutige IDs fuer die Texturen holen
        glGenTextures	( 3,x->getV() );
 
        // << "Texturen #0 =" << x->getTextureName(0) << ", #1 = " 
        //     << x->getTextureName(1) << endl;
        
        glPixelStorei	( GL_UNPACK_ALIGNMENT, 1 );

     	glBindTexture	( GL_TEXTURE_2D,  x->getTextureName(0) );
    	OpenGLLoadTextureImage("textur0.bmp");

     	glBindTexture	( GL_TEXTURE_2D,  x->getTextureName(1) );
    	OpenGLLoadTextureImage("textur1.bmp");

    	glBindTexture	( GL_TEXTURE_2D,  x->getTextureName(2) );
    	OpenGLLoadTextureImage("textur2.bmp");

        // Fuer diese Instanz nie wieder Texturen laden  
        x->setLoaded(true);

      }
    else
     { 
         // nichts tun wenn Texturen schon geladen sind
     };        

}

void OpenGL::display(WSphere *x)
{
 	gluSphere  ( x->getQuadric()->getQuadric(),
                 x->getOuterRadius(), 
                 x->getSides(), 
                 x->getRings());
}

