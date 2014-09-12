#include"kreis_flaeche.h"
#include"kreis_einlesen_werte.h"

double berechnung_flaeche_kreis(double radius)
{
    return 3.14159 * radius * radius;
}

void ausgabe_flaeche_kreis()
{
    double radius;

    radius = einlesen_radius_kreis(radius);

    printf("Die Flaeche betraegt: %.2lf",  berechnung_flaeche_kreis(radius));
}

