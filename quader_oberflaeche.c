#include"quader_oberflaeche.h"
#include"quader_einlesen_werte.h"

double berechnung_oberflaeche_quader(double laenge, double breite, double hoehe)
{
    double Result = 2 * laenge * breite + 2 * laenge * hoehe + 2 * breite * hoehe;
    return Result;
}

void ausgabe_oberflaeche_quader()
{
    double laenge, breite, hoehe;

    laenge = einlesen_laenge(laenge);
    breite = einlesen_breite(breite);
    hoehe = einlesen_hoehe(hoehe);

    printf("Oberflaeche: %.2lf", berechnung_oberflaeche_quader(laenge, breite, hoehe));
}


