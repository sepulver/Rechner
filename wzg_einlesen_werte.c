#include"wzg_einlesen_werte.h"

double einlesen_weg(double weg)
{
    printf("\nWeg (km)--> ");
    scanf("%lf", &weg);

    return weg;
}

double einlesen_zeit(double zeit)
{
    printf("\nZeit (Minuten)--> ");
    scanf("%lf", &zeit);

    return zeit;
}

double einlesen_geschwindigkeit(double geschwindigkeit)
{
    printf("\nGeschwindigkeit (km/h)--> ");
    scanf("%lf", &geschwindigkeit);

    return geschwindigkeit;
}
