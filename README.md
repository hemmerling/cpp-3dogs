# cpp-3dogs
3DOGS ( 3D OpenGL Sample) mit Ghost Installer

3DOGS ist ein 3D-Graphik Programm unter Verwendung der Graphik-Biblitheken OpenGL und GLUT 3.7, das ein auf einer Fläche oder in einem Raum bewegtes, sich veränderndes Objekt darstellt. Die Szene mit Fläche ( oder Raum ) und Objekt soll aus mindestens 12 einfachen Objekten zusammengesetzt sein. "3DOGS" spricht sich "Three Dogs" ( "Drei Hunde" ), steht aber für "3D OpenGL Sample".

Der C++ Code lässt sich mit dem GNU-C/C++ Compiler "MinGW 3.3.1" übersetzen, aber nicht mit GNU-C/C++ Compilern "MinGW 4.x". Neueste verwendbare Dev-C IDE für Windows ist daher: 

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
  - Generieren und kopieren Sie die mit MinGW 3.x Bibliotheken "libglaux.a", "libglu32.a", "libglut32.a", "libopengls32.a" in das Projekt-Verzeichnis "lib"
- Projekt: Für das Projekt wurde eine XML Konfigurationsdatei für das Installations- und Distributions-Werkzeug "Ghost Install Free 4.x" erstellt. Damit kann ein Installer für die Windows-Version von 3DOGS erstellt werden.

![3DOGS Screenshot](/doc/images/opengl1.png "3DOGS Screenshot") 
![3DOGS Screenshot](/doc/images/opengl2.png "3DOGS Screenshot") 
![3DOGS Screenshot](/doc/images/opengl3.png "3DOGS Screenshot") 
