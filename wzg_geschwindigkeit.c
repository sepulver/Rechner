#include"wzg_geschwindigkeit.h"
#include"wzg_einlesen_werte.h"

double berechnung_geschwindigkeit(double zeit,double weg)
{
    return weg / (zeit / 60);
}

void ausgabe_geschwindigkeit()
{
    double zeit, weg;

    weg = einlesen_weg(weg);
    zeit = einlesen_zeit(zeit);

    printf("\nDie Geschwindigkeit betraegt: %.2lf km/h", berechnung_geschwindigkeit(zeit, weg));
}
