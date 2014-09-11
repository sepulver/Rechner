#include"kegel_mantelflaeche.h"
#include"kegel_seitenhoehe.h"
#include"kegel_einlesen_werte.h"

double berechnung_mantelflaeche_kegel(double radius, double hoehe)
{
    double seitenhoehe, result;

    seitenhoehe = berechnung_seitenhoehe_kegel(radius, hoehe);

    result = 3.14159 * radius * seitenhoehe;

    return result;
}

void ausgabe_mantelflaeche_kegel()
{
    double radius, hoehe;

    radius = einlesen_radius_kegel(radius);

    hoehe = einlesen_hoehe_kegel(hoehe);

    printf("\nDie Mantelflaeche betraegt: %.2lf", berechnung_mantelflaeche_kegel(radius, hoehe));
}
