#include"quader_grundflaeche.h"
#include"quader_einlesen_werte.h"


double berechnung_grundflaeche_quader(double laenge, double breite)
{
    return laenge * breite;
}

void ausgabe_grundflaeche_quader()
{
    double laenge, breite;

    laenge = einlesen_laenge(laenge);
    breite = einlesen_breite(breite);

    printf("Grundflaeche: %.2lf", berechnung_grundflaeche_quader(laenge, breite));
}
