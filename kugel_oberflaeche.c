#include"kugel_oberflaeche.h"
#include"kugel_einlesen_werte.h"

double berechnung_oberflaeche_kugel(double radius)
{
    double result;

    result = 4 * 3.14159 * radius;

    return result;
}

void ausgabe_oberflaeche_kugel()
{
    double radius;

    radius = einlesen_radius(radius);

    printf("\nDie Oberflaeche betraegt: %.2lf", berechnung_oberflaeche_kugel(radius));
}
