#include"zinseszins_startkapital.h"
#include"zinseszins_einlesen_werte.h"

double berechnung_startkaptial_zinseszins(double endkapital, double zinssatz, double jahre)
{
    double result;

    result = endkapital / pow(1 + (zinssatz / 100), jahre);

    return result;
}

void ausgabe_startkapital_zinseszins()
{
    double endkapital, zinssatz, jahre;

    endkapital = einlesen_endkapital_zinseszins(endkapital);
    zinssatz = einlesen_zinssatz_zinseszins(zinssatz);
    jahre = einlesen_jahre_zinseszins(jahre);

    printf("\nDas Startkapital betraegt: %.2lf", berechnung_startkaptial_zinseszins(endkapital, zinssatz, jahre));
}
