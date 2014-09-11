#include"kegel_grundflaeche.h"
#include"kegel_einlesen_werte.h"

double berechnung_grundflaeche_kegel(double radius)
{
    return 3.14159 * radius * radius;
}

void ausgabe_grundflaeche_kegel()
{
    double radius;

    radius = einlesen_radius_kegel(radius);

    printf("\nDie Grundflaeche betraegt: %.2lf", berechnung_grundflaeche_kegel(radius));
}
