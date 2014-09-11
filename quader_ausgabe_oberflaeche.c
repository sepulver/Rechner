#include"quader_ausgabe_oberflaeche.h"
#include"quader_berechnung_oberflaeche.h"
#include"quader_einlesen_breite.h"
#include"quader_einlesen_hoehe.h"
#include"quader_einlesen_laenge.h"

void ausgabe_oberflaeche_quader()
{
    double laenge, breite, hoehe;

    laenge = einlesen_laenge(laenge);
    breite = einlesen_breite(breite);
    hoehe = einlesen_hoehe(hoehe);

    printf("Oberflaeche: %.2lf", berechnung_oberflaeche_quader(laenge, breite, hoehe));
}

