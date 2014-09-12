#include"kreis_durchmesser.h"
#include"kreis_einlesen_werte.h"

double berechnung_durchmesser_kreis(double radius)
{
    return 2 * radius;
}

void ausgabe_durchmesser_kreis()
{
    double radius;

    radius = einlesen_radius_kreis(radius);

    printf("Der Durchmesser betraegt: %.2lf", berechnung_durchmesser_kreis(radius));
}
