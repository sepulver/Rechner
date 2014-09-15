#include"zins_tageszins_zinsen.h"
#include"zins_einlesen_werte.h"

double berechnung_zinsen_tageszins(double kapital, double zinssatz, double tage)
{
    double result;

    result = (kapital * zinssatz) / 100 * (tage / 360);

    return result;
}

void ausgabe_zinsen_tageszins()
{
    double kapital, zinssatz, tage;

    kapital = einlesen_kapital(kapital);
    zinssatz = einlesen_zinssatz(zinssatz);
    tage = einlesen_tage(tage);

    printf("\nDie Zinsen betragen: %.2lf", berechnung_zinsen_tageszins(kapital, zinssatz, tage));
}
