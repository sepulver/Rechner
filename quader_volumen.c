#include"quader_volumen.h"
#include"quader_einlesen_werte.h"

double berechnug_volumen_quader(double laenge, double breite, double hoehe)
{
    return laenge * breite * hoehe;
}

void ausgabe_volumen_quader()
{
    double laenge, breite, hoehe;

    laenge = einlesen_laenge(laenge);
    breite = einlesen_breite(breite);
    hoehe = einlesen_hoehe(hoehe);

    printf("Volumen: %.2lf", berechnug_volumen_quader(laenge, breite, hoehe));
}

