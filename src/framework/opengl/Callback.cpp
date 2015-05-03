#include "callback.h"

Static Callback::aStatic;

Scene *Callback::aScene;

Callback::Callback(void){}

Callback::~Callback(void){}


void Callback::myInit ( void )                     // Init von OpenGL-Parametern
{ 
    XInit aXInit;

    // Daten anlegen, Initialisierung
    aScene = new Scene(aStatic);

    // Initialisierung
    aXInit.display(aStatic.aOpenGL); 
}

void Callback::myDisplayFunc ( void )                     // Zeichnen des Fensterinhalts
{
    XDisplay aXDisplay;
    aXDisplay.display1(aStatic.aOpenGL); 
  	myDrawScene();			// neues Bild im Hintergrundspeicher zeichnen
    aXDisplay.display2(aStatic.aOpenGL); 
}

void Callback::myReshapeFunc ( int b, int h )
{    
    // statische Anlage des Objekts
    XReshape aXReshape;
    aXReshape.setEye(aStatic.getEye());
    aXReshape.setCenter(aStatic.getCenter());
    aXReshape.setUp(aStatic.getUp());
    aXReshape.setWidth(b);
    aXReshape.setHeight(h);
    aXReshape.display(aStatic.aOpenGL); 
}

void
Callback::myKeyboardFunc (GLubyte key, int x, int y)
{

  cout << key << "," << __toascii(key) << endl;
  
  // Auswertung der Tastatureingabe ueber Tastatur-Funktions-Tabelle
  // aStatic.getZInput()->update(key);
  
  // Abfrage der normalen Tastatureingabe a-z,0-9,..
  
  aStatic.getZInput()->update(key);

#ifdef TEST
  VektorElement<ZCmd *> *aKleineKugel = new VektorElement<ZCmd *> ;
  switch ( key )
  {
	case 'w':		// Position der Kappungsebenen aendern
                    //hoch
                    // 4 + 10 * ( 1 + sin ( -1..1 );  
                    // aStatic.setNearDistance( ( ( aStatic.getNearDistance() - 4.0 ) / 10.0 + 0.1 ) * 10.0 + 4.0 );
                    break;
	case 'y':		// Position der Kappungsebenen aendern
                    //runter
                    // aStatic.setNearDistance( ( ( aStatic.getNearDistance() - 4.0 ) / 10.0 - 0.1 ) * 10.0 + 4.0 );
                    break;
	default:; // Keine weitere Aktion hier. 
  };
#endif
  
  // Auswertung weiterer Tastatureingaben 
  XKeyboard aXKeyboard;
  aXKeyboard.setKey(key);
  aXKeyboard.setX(x);
  aXKeyboard.setY(y);
  aXKeyboard.display(aStatic.aOpenGL); 
}

void
Callback::myMouseFunc (int button, int state, int x, int y)
{
  XMouse aXMouse;
  aXMouse.setButton(button);
  aXMouse.setState(state);
  aXMouse.setX(x);
  aXMouse.setX(y);
  aXMouse.display(aStatic.aOpenGL); 
}

void 
Callback::myMotionFunc (int x, int y)
{
  XMotion aXMotion;
  aXMotion.setX(x);
  aXMotion.setX(y);
  aXMotion.display(aStatic.aOpenGL); 
}

void Callback::myPassiveMotionFunc(int x, int y)
{
  XPMotion aXPMotion;
  aXPMotion.setX(x);
  aXPMotion.setY(y);
  aXPMotion.display(aStatic.aOpenGL); 
}

void Callback::myEntryFunc(int state)
{
  XEntry aXEntry;
  aXEntry.setState(state);
  aXEntry.display(aStatic.aOpenGL); 
}

void Callback::myVisibilityFunc(int state)
{
  XVisibility aXVisibility;
  aXVisibility.setState(state);
  aXVisibility.display(aStatic.aOpenGL); 
}

void Callback::myIdleFunc(void)
{
  XIdle aXIdle;
  aXIdle.display(aStatic.aOpenGL); 
}

void Callback::myTimerFunc (int t)           // Funktion : Animation
{
    // aScene->calcAngles(aStatic);            // Berechnen der neuen Winkel
    XTimer aXTimer;
    aXTimer.setTimePeriod(aStatic.getPtrTimePeriod());
    aXTimer.display(aStatic.aOpenGL); 
}

void Callback::myMenuStateFunc(int state)
{
  XMState aXMState;
  aXMState.setState(state);
  aXMState.display(aStatic.aOpenGL); 
}

void Callback::mySpecialFunc(int key, int x, int y)
{
  aStatic.getZInput()->update(key);

  switch (key)
  {
	case GLUT_KEY_HOME: // Aspect Ratio setzen 
                        // aStatic.setAspectRatio(1.0); 
                        break;
	case GLUT_KEY_END:  // Aspect Ratio setzen 
                        // aStatic.setAspectRatio(0.5); 
                        break;
	default:; // Keine weitere Aktion hier. 
  };

  // Auswertung weiterer Tastatureingaben 
  XSpecial aXSpecial;
  aXSpecial.setKey(key);
  aXSpecial.setX(x);
  aXSpecial.setY(y);
  aXSpecial.display(aStatic.aOpenGL); 
}

void Callback::myMenuStatusFunc(int status, int x, int y)
{
  XMStatus aXMStatus;
  aXMStatus.setStatus(status);
  aXMStatus.setX(x);
  aXMStatus.setY(y);
  aXMStatus.display(aStatic.aOpenGL); 
}

void Callback::myOverlayDisplayFunc(void)
{
  XOverlay aXOverlay;
  aXOverlay.display(aStatic.aOpenGL); 
}

void Callback::myWindowStatusFunc(int state)
{
  XWStatus aXWStatus;
  aXWStatus.setState(state);
  aXWStatus.display(aStatic.aOpenGL); 
}

void Callback::myKeyboardUpFunc(unsigned char key, int x, int y)
{
  aStatic.getZInput()->updateUp(key);

  XKeyboardUp aXKeyboardUp;
  aXKeyboardUp.setKey(key);
  aXKeyboardUp.setX(x);
  aXKeyboardUp.setY(y);
  aXKeyboardUp.display(aStatic.aOpenGL); 
}

void Callback::mySpecialUpFunc(int key, int x, int y)
{
  aStatic.getZInput()->updateUp(key);

  XSpecialUp aXSpecialUp;
  aXSpecialUp.setKey(key);
  aXSpecialUp.setX(x);
  aXSpecialUp.setY(y);
  aXSpecialUp.display(aStatic.aOpenGL); 
}

void Callback::myJoystickFunc(unsigned int buttonMask, int x, int y, int z)
{
  XJoystick aXJoystick;
  aXJoystick.setButtonMask(buttonMask);
  aXJoystick.setX(x);
  aXJoystick.setY(y);
  aXJoystick.display(aStatic.aOpenGL); 
}

void Callback::myDrawScene ( void )         // Funktion :   Zeichnen aller Objekte
{
    // Alle OpenGL Kommandos ausfuehren    
    ZExec aZExec;
    aZExec.setQueue(aStatic.getQueue());
    aZExec.display(aStatic.aOpenGL); 
}

void Callback::myQuadricError ( GLenum error_code )
{
    char aKey;
	const GLubyte *aErrorString;
	aErrorString = gluErrorString ( error_code );
	cout <<  "Quadric Error : " << aErrorString << endl;
	cout << "Bitte geben Sie ein Zeichen und dann <ENTER> ein, um diese Anwendung und das DOS-Fenster zu schliessen" << endl;
    cin >> aKey;
    exit (0);
}

