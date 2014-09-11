#include"quader_ausgabe_volumen.h"
#include"quader_berechnung_volumen.h"
#include"quader_einlesen_breite.h"
#include"quader_einlesen_hoehe.h"
#include"quader_einlesen_laenge.h"

void ausgabe_volumen_quader()
{
    double laenge, breite, hoehe;

    laenge = einlesen_laenge(laenge);
    breite = einlesen_breite(breite);
    hoehe = einlesen_hoehe(hoehe);

    printf("Volumen: %.2lf", berechnug_volumen_quader(laenge, breite, hoehe));
}
