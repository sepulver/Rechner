#include"prozent_einlesen_werte.h"

double einlesen_grundwert(double grundwert)
{
    printf("\nGrundwert --> ");
    scanf("%lf", &grundwert);

    return grundwert;
}

double einlesen_prozentwert(double prozentwert)
{
    printf("\nProzentwert --> ");
    scanf("%lf", &prozentwert);

    return prozentwert;
}

double einlesen_prozentsatz(double prozentsatz)
{
    printf("\nProzentsatz (in %%) --> ");
    scanf("%lf", &prozentsatz);

    return prozentsatz;
}
