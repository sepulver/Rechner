#include"zinseszins_jahre.h"
#include"zinseszins_einlesen_werte.h"

double berechnung_zaehler_jahre_zinseszins(double endkapital, double startkapital)
{
    double result;

    result = log10(endkapital / startkapital);

    return result;
}

double berechnung_nenner_jahre_zinseszins(double zinssatz)
{
    double result;

    result = log10(1 + zinssatz/ 100);

    return result;
}

double berechnung_ergebnis_jahre_zinseszins(double endkapital, double startkapital, double zinssatz)
{
    double result;

    result = berechnung_zaehler_jahre_zinseszins(endkapital, startkapital) / berechnung_nenner_jahre_zinseszins(zinssatz);

    return result;
}

void ausgabe_jahre_zinseszins()
{
    double endkapital, startkapital, zinssatz;

    endkapital = einlesen_endkapital_zinseszins(endkapital);
    startkapital = einlesen_startkapital_zinseszins(startkapital);
    zinssatz = einlesen_zinssatz_zinseszins(zinssatz);

    printf("\nDie Zeit betraegt: %.2lf Jahre", berechnung_ergebnis_jahre_zinseszins(endkapital, startkapital, zinssatz));
}
