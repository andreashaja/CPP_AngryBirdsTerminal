/* ---------------------------------------------------------------------
 * The Fearless Engineer - Programmieren und Elektronik
 * Copyright (C) 2020, Dr. Andreas Haja.  
 *
 * Zweck : Konsolenbasierte (und stark vereinfachte) Version des Spieleklassikers "Angry Birds"
 *         als Ergänzung zum Lernmodul "Operatoren" (E2_M2).  
 *
 * Du solltest zusammen mit diesem Programm eine Kopie der MIT-Lizenz erhalten haben.
 * Falls nicht, sieh bitte hier nach: https://opensource.org/licenses/MIT.
 *
 * Das Begleitheft zum Modul E2_M2 kann hier geladen werden:
 * http://www.thefearlessengineer.com/cpp-kurs-e2
 * ----------------------------------------------------------------------
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    cout << "******** ANGRY BIRDS TERMINAL v1.0 ********";
    cout << "Willkommen zur terminalbasierten Version von Angry Birds!\n";
    cout << "In dieser ersten Version hast du einen (!) Vogel, um ein einzelnes Schwein zu treffen.\n";
    cout << "Ziele also gut!\n";
    cout << "*******************************************\n\n\n";

    // Parameter auf Plausibilität prüfen
    if(argc!=3)
    {
        cout << "Programm erwartet Abschusswinkel in Grad und -geschwindigkeit als Parameter" << endl;
        cout << "Beispiel-Aufruf : abirds 45 10" << endl;
        return -1;
    }

    // Parameter für Abschuss einlesen
    double angle = atof(argv[1]) * M_PI / 180; // Winkel in Radiant konvertieren
    double speed = atof(argv[2]);

    ///////// AUFGABE 1 START /////////
    /////////

    // Berechne die Abschussgeschwindigkeit des Vogles in x und y auf Basis der Variable 
    // "speed" und "angle", indem du den Multiplikationsoperator und die cos()-Funktion nutzt
    double vx, vy;

    /////////
    ///////// AUFGABE 1 ENDE /////////

    // Ziel positionieren
    double tx = 10.0; 
    double tw = 0.5;
    cout << "Ziel ist " << tx << " m entfernt und " << tw << " m breit.\n";
    
    // Schwerkraft und Zeitinkrement pro Schleifendurchlauf setzen
    double g = 9.81; // m/s^2
    double dt = 0.01; // s

    // Ausgabedatei für Flugbahndaten öffnen
    ofstream myfile;
    myfile.open("flugbahn.txt");

    double x = 0.0;
    double y = 0.0;
    while (y >= 0.0)
    {
        ///////// AUFGABE 2 START /////////
        /////////

        // Aktualisiere die Geschwindigkeit in y, indem du vom aktuellen Wert das Produkt aus Schwerkraft
        // und Zeitschritt abziehst. Verwende dazu den Multiplikations- und den Subtraktionsoperator.

        /////////
        ///////// AUFGABE 2 ENDE /////////
        

        // Berechne Positionsänderung (dx, dy)
        double dy = vy * dt;
        double dx = vx * dt;

        ///////// AUFGABE 3 START /////////
        /////////

        // Aktualisiere die Position des Vogels in x und y, indem du mittels des 
        // Additions-Zuweisungsoperators die Werte dx und dy hinzuaddierst.

        /////////
        ///////// AUFGABE 3 ENDE /////////

        // Schreibe die aktualisierte Position in eine Datei
        myfile << x << "," << y << "\n";
    }
    myfile.close();

    ///////// AUFGABE 4 START /////////
    /////////
    bool hitBehind, hitInfront;

    // Benutze den ternären Operator (?:) dazu, der Variablen hitBehind den Wert true zuzuweisen, 
    // wenn der Aufschlagpunkt vor der Position des Ziels abzüglich der halben Zielbreite liegt.
    // Ist die Bedingung nicht erfüllt, wird der Variablen der Wert false zugewiesen. 

    // Benutze den ternären Operator (?:) dazu, der Variablen hitInfront den Wert true zuzuweisen, 
    // wenn der Aufschlagpunkt hinter der Position des Ziels zuzüglich der halben Zielbreite liegt.
    // Ist die Bedingung nicht erfüllt, wird der Variablen der Wert false zugewiesen. 

    /////////
    ///////// AUFGABE 4 ENDE /////////


    ///////// AUFGABE 5 START /////////
    /////////
    string output;
    
    // Verschachtele zwei ternäre Operatoren so, dass der Variablen "output" der String "Zu kurz geschossen"
    // zugewiesen wird, wenn die Variable "hitInfront" den Wert true hat. 
    // Wenn die Bedingung nicht erfüllt ist, soll geprüft werden, ob die Variable "hitBehind" den Wert true hat
    // und wenn das der Fall ist, soll "output" der String "Zu weit geschossen" zugewiesen werden. 
    // Sind beide bool'schen Variablen false, soll der String "Getroffen" ausgegeben werden.
    // Achtung: Die komplette Anweisung soll nur aus einer einzigen Zeile bestehen!
    
    /////////
    ///////// AUFGABE 5 ENDE /////////

    // Ausgabe von Aufschlagpunkt und Treffermeldung
    printf("Aufschlagpunkt = %0.2fm\n", x); // Hinweis: printf erlaubt es, die Ausgabe so zu formatieren, dass nach zwei Nachkommastellen abgeschnitten wird.
    cout << output << endl;
    
    return 0;
}