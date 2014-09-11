#include"kegel_volumen.h"
#include"kegel_grundflaeche.h"
#include"kegel_einlesen_werte.h"

void ausgabe_volumen_kegel()
{
    double hoehe, radius;

    radius = einlesen_radius_kegel(radius);

    hoehe = einlesen_hoehe_kegel(hoehe);

    printf("\nDas Volumen betraegt: %.2lf", berechnung_volumen_kegel(radius, hoehe));
}


double berechnung_volumen_kegel(double radius, double hoehe)
{
    double grundflaeche, result;

    grundflaeche = berechnung_grundflaeche_kegel(radius);

    result = grundflaeche / 3 * hoehe;

    return result;
}

