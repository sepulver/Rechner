#include"kugel_volumen.h"

double berechnung_volumen_kugel(double radius)
{
    double result;

    result = (4 / 3) * 3.14159 * pow(radius, 3);

    return result;
}

void ausgabe_volumen_kugel()
{
    double radius;

    radius = einlesen_radius_kugel(radius);

    printf("\nDas Volumen betraegt: %.2lf", berechnung_volumen_kugel(radius));
}
