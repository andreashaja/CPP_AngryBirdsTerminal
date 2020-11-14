# Projekt für Einsteiger in C++ : Programmierung einer einfachen Version des Spieleklassikers "Angry Birds"

[The Fearless Engineer : `C++`](https://www.thefearlessengineer.com/cpp-kurs)

![Angry Birds Terminal](https://github.com/andreashaja/CPP_AngryBirdsTerminal/blob/main/img/angry_birds_terminal.jpg)

##
## Worum geht es?

Dieses Projekt ist Teil eines Online-Kurses zur Programmiersprache C++. Eines der Hauptziele dieses Projekts ist es, dich sicher zu machen im Umgang mit verschiedenen Operatoren, insbesondere dem ternären Operator. Im Spiel "Angry Birds Terminal" werden daher viele Operatoren unterschiedlichen Typs verwendet, um genau wie im Spieleklassiker einen Vogel auf ein Schwein abzuschießen. Sobald du alle im Code enthaltenen Aufgaben gelöst hast, kannst du zeigen, ob du ein guter Schütze bist!

Wenn du nicht weiter kommst, dann findest du im Ordner `solution` eine verschlüsselte ZIP-Datei, in der die Musterlösung enthalten ist. Das Passwort zur Entschlüsselung findest du im Begleitheft. 

*Hinweis*: Das zugehörige Begleitheft inkl. der Links zu den Videos findest du [hier](https://go.tfe.academy/2010163).



---

## Wie kann ich den Code im Projekt nutzen?

###  **Variante A (empfohlen)** : Online-Enwicklungsumgebung repl.it

Der einfachste Weg, den Code auszuführen und zu verändern, ist über die Online-IDE `repl.it`. Um die jeweiligen Programme zu kompilieren und auszuführen, musst du nur den jeweiligen Befehl im Terminal eingeben.

1. **Kompilieren** (`angrybirds.cpp`) :  
`g++ -o angrybirds angrybirds.cpp`

2. **Ausführen** : 
`./angrybirds 45 10`

In diesem Beispiel wird der Vogel in einem Winkel von 45° mit einer Geschwindigkeit von 10m/s abgeschossen.

<br> 

###  **Variante B** : Das Projekt auf der eigenen Festplatte starten

Es besteht natürlich auch die Möglichkeit, das Projekt in einem lokalen Verzeichnis von GitHub zu klonen oder als zip-Datei herunterzuladen. 

Dazu sind die folgenden Schritte erforderlich:

0. Nur für Windows: Installation des "Windows Terminal" --> [go.tfe.academy/2008278](https://go.tfe.academy/2008278)

1. Klonen des GitHub-Repos oder Download als ZIP (`master` branch)--> [go.tfe.academy/2010164](https://go.tfe.academy/2010164)

2. Installation von Entwicklerwerkzeugen : Die Anleitungen für die erforderlichen Tools `Visual Studio Code` und `gcc` findest du unter [Tools für die lokale Installation](#Tools-für-die-lokale-Installation).
   
3. Datei mit dem gewünschten Quellcode in VS Code öffnen und mit CodeRunner ausführen

**Hinweis:** Da die lokale Installation schnell zu Fehlern führen kann, wird Einsteigern die Variante A empfohlen. 


## Tools für die lokale Installation

Im folgenden ist eine Liste der erforderlichen Entwicklungswerkzeuge aufgeführt, die zum lokalen Ausführen des Codes wie in **Variante B** beschrieben erforderlich sind. 

* **gcc/g++** >= 5.4 
	* Linux: gcc / g++ ist standardmäßig auf den meisten Linux-Distributionen installiert. 
	* Mac: [Xcode-Befehlszeilen-Tools installieren (enthalten make)](https://developer.apple.com/xcode/features/) 
	* Windows: empfohlen wird die Installation von [MinGW](http://www.mingw.org/) 

* **Visual Studio Code**
	* Download [VS Code](https://code.visualstudio.com/download)
	* In VS Code unter "Extensions" die PlugIns "C/C++" und "Code Runner" installieren



Copyright 2020, Dr. Andreas Haja
www.thefearlessengineer.com
