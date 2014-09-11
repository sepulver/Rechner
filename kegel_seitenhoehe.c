#include"kegel_seitenhoehe.h"
#include"kegel_einlesen_werte.h"

double berechnung_seitenhoehe_kegel(double radius, double hoehe)
{
    double result;

    result = sqrt((hoehe * hoehe) + radius * radius);

    return result;
}

void ausgabe_seitenhoehe_kegel()
{
    double radius, hoehe;

    radius = einlesen_radius_kegel(radius);
    hoehe = einlesen_hoehe_kegel(hoehe);

    printf("\nDie Seitenhoehe betraegt: %.2lf", berechnung_seitenhoehe_kegel(radius, hoehe));
}

