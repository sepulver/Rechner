#include"quader_einlesen_werte.h"

double einlesen_breite(double breite)
{
    printf("Breite --> ");
    scanf("%lf", &breite);

    return breite;
}

double einlesen_hoehe(double hoehe)
{
    printf("Hoehe --> ");
    scanf("%lf", &hoehe);

    return hoehe;
}

double einlesen_laenge(double laenge)
{
    printf("\nLaenge --> ");
    scanf("%lf", &laenge);

    return laenge;
}
