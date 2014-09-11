#include"quader_ausgabe_grundflaeche.h"
#include"quader_berechnung_grundflaeche.h"
#include"quader_einlesen_breite.h"
#include"quader_einlesen_hoehe.h"
#include"quader_einlesen_laenge.h"

void ausgabe_grundflaeche_quader()
{
    double laenge, breite;

    laenge = einlesen_laenge(laenge);
    breite = einlesen_breite(breite);

    printf("Grundflaeche: %.2lf", berechnung_grundflaeche_quader(laenge, breite));
}
