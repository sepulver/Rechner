#include"zinseszins_endkapital.h"
#include"zinseszins_einlesen_werte.h"

double berechnung_endkaptial_zinseszins(double startkapital, double zinssatz, double jahre)
{
    double result;

    result = startkapital * pow(1 + (zinssatz / 100), jahre);

    return result;
}

void ausgabe_endkapital_zinseszins()
{
    double startkapital, zinssatz, jahre;

    startkapital = einlesen_startkapital_zinseszins(startkapital);
    zinssatz = einlesen_zinssatz_zinseszins(zinssatz);
    jahre = einlesen_jahre_zinseszins(jahre);

    printf("\nDas Endkapital betraegt: %.2lf", berechnung_endkaptial_zinseszins(startkapital, zinssatz, jahre));
}
