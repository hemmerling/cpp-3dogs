# cpp-3dogs
3DOGS ( 3D OpenGL Sample) mit Ghost Installer

3DOGS ist ein 3D-Graphik Programm unter Verwendung der Graphik-Biblitheken OpenGL und GLUT 3.7, das ein auf einer Fläche oder in einem Raum bewegtes, sich veränderndes Objekt darstellt. Die Szene mit Fläche ( oder Raum ) und Objekt soll aus mindestens 12 einfachen Objekten zusammengesetzt sein. "3DOGS" spricht sich "Three Dogs" ( "Drei Hunde" ), steht aber für "3D OpenGL Sample".

Der Schwerpunkt meiner Arbeit lag nicht in der Erstellung einer besonders coolen 3D-Szene, sondern in der Entwicklung eines C++ Wrappers. Ziel des C++ Wrappers ist, die bei C-Programmen mit GLUT sonst vorgegebene Schleifenstruktur des prozeduralen Programmablaufs zu durchbrechen: Die Objekte werden in einem STL-Container gepackt, im STL-Container befindliche Objekte werden dargestellt.

Die Szene stellt ein steuerbares Fahrzeug her. Aus Zeitmangel und Termindruck im Projekt ist die Szene nicht ganz fehlerfrei, d.h. die Fahrzeugsteuererung ist noch nicht wirklich funktionstüchtig: Man kann die Räder drehen, es gibt aber keine an sich vorgesehene Fortbewegung.

![3DOGS - 3D OpenGL Sample, Screenshot](/doc/images/opengl1.png "3DOGS - 3D OpenGL Sample, Screenshot") 
![3DOGS - 3D OpenGL Sample, Screenshot](/doc/images/opengl2.png "3DOGS - 3D OpenGL Sample, Screenshot") 
![3DOGS - 3D OpenGL Sample, Screenshot](/doc/images/opengl3.png "3DOGS - 3D OpenGL Sample, Screenshot") 

Das Projekt wurde entwickelt mit
- GNU-C/C++ Compiler "MinGW 3.3.1"
- Standard Template Library (STL ), die Teil des Standard-Lieferumfangs von C/C++ Compilern wie GNU-C/C++ Compiler "MinGW 3.3.1" ist 
- OpenGL mit GLUT 1.7

Im C++ Code findet die Standard Template Library (STL) in einer Weise Verwendung, dass sich der Code nur mit dem GNU-C/C++ Compiler "MinGW 3.3.1"  übersetzen lässt, aber nicht mit GNU-C/C++ Compilern "MinGW 4.x". Neueste verwendbare Dev-C IDE für Windows ist daher: 

IDE "Dev-C ++ 4.9.9.1, mit GNU-C/C++ Compiler "MinGW 3.3.1" https://sourceforge.net/projects/dev-cpp/files/Binaries/Dev-C%2B%2B%20version%204.9.9.1/ 

Installation
- Runtime
  - Laden Sie von
https://www.opengl.org/resources/libraries/glut/
https://www.opengl.org/resources/libraries/glut/glut_downloads.php
die Datei
https://www.opengl.org/resources/libraries/glut/glutdlls37beta.zip
herunter.
  - Kopieren Sie "glut32.dll" und "glaux.dll" in das Projekt-Verzeichnis "bin/application".
  - Kopieren Sie "glut.h" in das Dev-Cpp Verzeichnis "include\GL".
- Compiler-Bibliotheken
  - Kopieren Sie "glaux.h" in das Dev-Cpp Verzeichnis "include\GL".
  - Kopieren Sie die mit MinGW 3.x Bibliotheken "libglaux.a", "libglu32.a", "libglut32.a", "libopengls32.a" in das Projekt-Verzeichnis "lib"
- Für das Projekt wurde eine XML Konfigurationsdatei für das Installations- und Distributions-Werkzeug "Ghost Install Free 4.x" von Ethalone Solutions ( http://www.ethalone.com/ ) erstellt. Damit kann ein Installer für die Windows-Version von 3DOGS erstellt werden.

