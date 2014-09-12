#include"kreis_umfang.h"
#include"kreis_einlesen_werte.h"

double berechnung_umfang_kreis(double radius)
{
    return 2 * 3.14159 * radius;
}

void ausgabe_umfang_kreis()
{
    double radius;

    radius = einlesen_radius_kreis(radius);

    printf("Der Umfang betraegt: %.2lf", berechnung_umfang_kreis(radius));
}

