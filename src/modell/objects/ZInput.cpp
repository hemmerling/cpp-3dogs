#include "zinput.h"
#include "zexec.h"
ZInput::ZInput(void) {}    
ZInput::~ZInput(void) {}

void ZInput::display(OpenGL &aOpenGL){
}					

void ZInput::update(GLubyte aKey){

 switch ( getKeyboardTable()->count(aKey) )
  {
   case 0: // leere Liste
           cout << "ZInput #" << aKey << "# NICHT gefunden (input)" << endl;
           return; break;

   case 1: // genau ein Element
           // dieser find() Algorithmus funktioniert nur mit 1 Treffer
           cout << "ZInput #" << aKey << "# EINMAL gefunden (input)" << endl;
           // weil genau ein Element, braucht Position nicht gecheckt zu werden
           getKeyboardTable()->find(aKey)->second->update(aKey);
           return; break;

   default: // mehr als ein Element
    { 
      MapContainer<GLubyte, ZCmd *>::iterator aPosition;
      pair< MapContainer<GLubyte, ZCmd *>::iterator,
            MapContainer<GLubyte, ZCmd *>::iterator >aRange;
      // Erstes und letztes Element mit diesem Schluessel zurueckgeben als Pair
      aRange =  getKeyboardTable()->equal_range(aKey);

      // Alle Elemente mit dem Schluessel abarbeiten
      for ( aPosition = aRange.first; aPosition != aRange.second; aPosition++)
       {
          cout << "ZInput #" << aKey << "# gefunden (input)" << endl;
          aPosition->second->update(aKey);
       }; // for
    }; // default
  }; // switch
}

void ZInput::updateUp(GLubyte aKey){
}

void ZInput::update(GLint aKey){

 switch ( getSpecialTable()->count(aKey) )
  {
   case 0: // leere Liste
           cout << "ZInput #" << aKey << "# NICHT gefunden (input)" << endl;
           return; break;

   case 1: // genau ein Element
           cout << "ZInput #" << aKey << "# EINMAL gefunden (input)" << endl;
           getSpecialTable()->find(aKey)->second->update(aKey);
           return; break;

   default: // mehr als ein Element
    { 
      MapContainer<GLint, ZCmd *>::iterator aPosition;
      pair< MapContainer<GLint, ZCmd *>::iterator,
            MapContainer<GLint, ZCmd *>::iterator >aRange;
      // Erstes und letztes Element mit diesem Schluessel zurueckgeben als Pair
      aRange =  getSpecialTable()->equal_range(aKey);

      // Alle Elemente mit dem Schluessel abarbeiten
      for ( aPosition = aRange.first; aPosition != aRange.second; aPosition++)
       {
          cout << "ZInput #" << aKey << "# gefunden (input)" << endl;
          aPosition->second->update(aKey);
       }; // for
    }; // default
  }; // switch
}

void ZInput::updateUp(GLint aSpecial){
}

void ZInput::addToKeyboardTable (ZCmd *aCommand, GLubyte aKey) { 
  aCommand->addToKTable( aKey, aCommand );
  aKeyboardTable.insert(MapContainer<GLubyte, ZCmd *>::value_type(aKey,aCommand));
}

MapContainer<GLubyte, ZCmd *> *ZInput::getKeyboardTable(void) {
  return &aKeyboardTable;
}

void ZInput::addToKeyboardUpTable (ZCmd *aCommand, GLubyte aKey) { 
  aCommand->addToKUpTable( aKey, aCommand );
  aKeyboardUpTable.insert(MapContainer<GLubyte, ZCmd *>::value_type(aKey, aCommand));
}

MapContainer<GLubyte, ZCmd *> *ZInput::getKeyboardUpTable(void) {
  return &aKeyboardUpTable;
}

void ZInput::addToSpecialTable (ZCmd *aCommand, GLint aKey) { 
  aCommand->addToSTable( aKey, aCommand );
  aSpecialTable.insert(MapContainer<GLuint, ZCmd *>::value_type(aKey,aCommand));
}

MapContainer<GLint, ZCmd *> *ZInput::getSpecialTable(void) {
  return &aSpecialTable;
}

void ZInput::addToSpecialUpTable (ZCmd *aCommand, GLint aKey) { 
  aCommand->addToSUpTable( aKey, aCommand );
  aSpecialUpTable.insert(MapContainer<GLint, ZCmd *>::value_type(aKey, aCommand));
}

MapContainer<GLint, ZCmd *> *ZInput::getSpecialUpTable(void) {
  return &aSpecialUpTable;
}

