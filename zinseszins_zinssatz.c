#include"zinseszins_zinssatz.h"
#include"zinseszins_einlesen_werte.h"

double berechnung_zinssatz_zinseszins(double endkapital, double startkapital, double jahre)
{
    double result;

    result = 100 * (pow((endkapital / startkapital), (1 / jahre)) - 1);

    return result;
}

void ausgabe_zinssatz_zinseszins()
{
    double endkapital, startkapital, jahre;

    endkapital = einlesen_endkapital_zinseszins(endkapital);
    startkapital = einlesen_startkapital_zinseszins(startkapital);
    jahre = einlesen_jahre_zinseszins(jahre);

    printf("\nDer Zinssatz betraegt: %.2lf %%", berechnung_zinssatz_zinseszins(endkapital, startkapital, jahre));
}

