#include"kegel_oberflaeche.h"
#include"kegel_grundflaeche.h"
#include"kegel_mantelflaeche.h"
#include"kegel_einlesen_werte.h"

double berechnung_oberflaeche_kegel(double radius, double hoehe)
{
    double grundflaeche, mantelflaeche, result;

    grundflaeche = berechnung_grundflaeche_kegel(radius);

    mantelflaeche = berechnung_mantelflaeche_kegel(radius, hoehe);

    result = grundflaeche + mantelflaeche;

    return result;
}

void ausgabe_oberflaeche_kegel()
{
    double radius, hoehe;

    radius = einlesen_radius_kegel(radius);
    hoehe = einlesen_hoehe_kegel(hoehe);

    printf("\nDie Oberflaeche betraegt: %.2lf", berechnung_oberflaeche_kegel(radius, hoehe));
}

