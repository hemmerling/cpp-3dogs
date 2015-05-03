#include "zcmd.h"
#include "opengl2.h"

ZCmd::ZCmd(void) 
 {
   setName("");    
   setID(ID_NOID);
   setSingleExecution(false);
 }    

ZCmd::~ZCmd(void) {}

void ZCmd::display(OpenGL &aOpenGL){
   aOpenGL.display(this);
}

void ZCmd::update(){}

void ZCmd::update(ZCmd *aCommand){}

void ZCmd::update(GLubyte aKey){

 cout << "-- in cmd --- " << endl;
 switch ( getKTable()->count(aKey) )
  {
   case 0: // leere Liste
           cout << "#" << aKey << "# NICHT gefunden (cmd)" << endl;
           return; break;

   case 1: // genau ein Element
           // dieser find() Algorithmus funktioniert nur mit 1 Treffer
           cout << "#" << aKey << "# EINMAL gefunden (cmd)" << endl;
           // weil genau ein Element, braucht Position nicht gecheckt zu werden
           update( getKTable()->find(aKey)->second );
           return; break;

   default: // mehr als ein Element
    { 
      MapContainer<GLubyte, ZCmd *>::iterator aPosition;
      pair< MapContainer<GLubyte, ZCmd *>::iterator,
            MapContainer<GLubyte, ZCmd *>::iterator >aRange;
      // Erstes und letztes Element mit diesem Schluessel zurueckgeben als Pair
      aRange =  getKTable()->equal_range(aKey);

      // Alle Elemente mit dem Schluessel abarbeiten
      for ( aPosition = aRange.first; aPosition != aRange.second; aPosition++)
       {
          cout << "#" << aKey << "# gefunden (cmd)" << endl;
          update( aPosition->second );
       }; // for
    }; // default
  }; // switch
}

void ZCmd::updateUp(GLubyte aKey){}

void ZCmd::update(GLint aKey){

 cout << "-- in cmd --- " << endl;
 
 switch ( getSTable()->count(aKey) )
  {
   case 0: // leere Liste
           cout << "#" << aKey << "# NICHT gefunden (cmd)" << endl;
           return; break;

   case 1: // genau ein Element
           cout << "#" << aKey << "# EINMAL gefunden (cmd)" << endl;
           update( getSTable()->find(aKey)->second );
           return; break;

   default: // mehr als ein Element
    { 
      MapContainer<GLint, ZCmd *>::iterator aPosition;
      pair< MapContainer<GLint, ZCmd *>::iterator,
            MapContainer<GLint, ZCmd *>::iterator >aRange;
      // Erstes und letztes Element mit diesem Schluessel zurueckgeben als Pair
      aRange =  getSTable()->equal_range(aKey);

      // Alle Elemente mit dem Schluessel abarbeiten
      for ( aPosition = aRange.first; aPosition != aRange.second; aPosition++)
       {
          cout << "#" << aKey << "# gefunden (cmd)" << endl;
          update( aPosition->second );
       }; // for
    }; // default
  }; // switch
}

void ZCmd::updateUp(GLint aSpecial){}

void ZCmd::setName(char *vName)
{
  // Umkopie von strlen(string) Zeichen mit strncpy
  // kopiert NICHT das folgende "\0" mit um  !
  int aZeichenkettenLaenge;
  if ( strlen( vName ) < MAX_NAMEN_LAENGE )
   { aZeichenkettenLaenge = strlen( vName )+1; }
  else
   { aZeichenkettenLaenge = MAX_NAMEN_LAENGE+1; };
  strncpy ( aName, vName, aZeichenkettenLaenge );
}
						
char *ZCmd::getName(void)
{
  return aName;
}

void ZCmd::setID(GLuint vID)
{
 aID = vID;
}

GLuint ZCmd::getID(void)
{
  return aID;
}

void ZCmd::setSingleExecution(bool singleExecution)
{
  this->singleExecution = singleExecution;
}

bool ZCmd::getSingleExecution(void)
{
  return singleExecution;
}

void ZCmd::addToKTable (GLubyte aKey, ZCmd *aCommand) { 
  cout << "Hinzufuegen K" << aKey << endl;
  getKTable()->insert(MapContainer<GLubyte, ZCmd *>::value_type(aKey,aCommand));
}

void ZCmd::addToKUpTable (GLubyte aKey, ZCmd *aCommand) { 
  cout << "Hinzufuegen KUp" << aKey << endl;
  getKUpTable()->insert(MapContainer<GLubyte, ZCmd *>::value_type(aKey,aCommand));
}

void ZCmd::addToSTable (GLint aKey, ZCmd *aCommand) { 
  cout << "Hinzufuegen S" << aKey << endl;
  getSTable()->insert(MapContainer<GLuint, ZCmd *>::value_type(aKey,aCommand));
}

void ZCmd::addToSUpTable (GLint aKey, ZCmd *aCommand) { 
  cout << "Hinzufuegen SUp" << aKey << endl;
  getSUpTable()->insert(MapContainer<GLuint, ZCmd *>::value_type(aKey,aCommand));
}

MapContainer<GLubyte, ZCmd *> *ZCmd::getKTable(void) {
  return &aKTable;
}

MapContainer<GLubyte, ZCmd *> *ZCmd::getKUpTable(void) {
  return &aKUpTable;
}

MapContainer<GLint, ZCmd *> *ZCmd::getSTable(void) {
  return &aSTable;
}

MapContainer<GLint, ZCmd *> *ZCmd::getSUpTable(void) {
  return &aSUpTable;
}

