#include"wzg_weg.h"
#include"wzg_einlesen_werte.h"

double berechnung_weg(double zeit,double geschwindigkeit)
{
    return (zeit / 60) * geschwindigkeit;
}

void ausgabe_weg()
{
    double zeit, geschwindigkeit;

    zeit = einlesen_zeit(zeit);
    geschwindigkeit = einlesen_geschwindigkeit(geschwindigkeit);

    printf("\nDie Strecke betraegt: %.2lf km", berechnung_weg(zeit, geschwindigkeit));
}
