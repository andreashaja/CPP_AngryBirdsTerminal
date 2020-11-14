#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
    int index = 5; 
    int ascii = 72; 
    int ascii_code = ascii + index % 2 + 3;
    cout << "Codierter ASCII-Code = " << ascii_code << endl;

    // Parameter auf Plausibilität prüfen
    if(argc!=3)
    {
        cout << "Programm erwartet Abschusswinkel und -geschwindigkeit als Parameter" << endl;
        cout << "Beispiel-Aufruf : abirds 45 10" << endl;
        return -1;
    }

    // Parameter für Abschuss einlesen
    double angle = atof(argv[1]);
    double speed = atof(argv[2]);

    // Abschussgeschwindigkeiten in x und y berechnen 
    double vx = speed * cos(angle);
    double vy = speed * cos(angle);

    // Ziel positionieren
    double tx = 10.0; 
    double tw = 0.5;
    cout << "Ziel ist " << tx << " m entfernt und " << tw << " m breit.\n";
    
    // Schwerkraft und Zeitinkrement pro Schleifendurchlauf setzen
    double g = 9.81; // m/s^2
    double dt = 0.01; // s

    // Ausgabedatei für Flugbahndaten öffnen
    ofstream myfile;
    myfile.open("example.txt");

    double x = 0.0;
    double y = 0.0;
    while (y >= 0.0)
    {
        // Aktualisiere Geschwindigkeit in y
        vy = vy - g * dt;

        // Berechne Positionsänderung (dx, dy)
        double dy = vy * dt;
        double dx = vx * dt;

        // Aktualisiere Position
        x += dx;
        y += dy;

        // Gib Position aus
        myfile << x << "," << y << "\n";
        //cout << "x = " << x << ", y = " << y << endl;
    }
    myfile.close();
    printf("Aufschlagpunkt = %0.2fm\n", x);

    // Auf Treffer prüfen
    bool hitBehind = x > tx + tw/2.0 ? true : false;
    bool hitInfront = x < tx - tw/2.0 ? true : false;
    string output = hitInfront==true ? "Zu kurz geschossen" : hitBehind==true ? "Zu weit geschossen" : "Getroffen!";
    cout << output << endl;
    

    return 0;
}