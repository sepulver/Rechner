#include"zins_jahreszins_zinsen.h"
#include"zins_einlesen_werte.h"

double berechnung_zinsen_jahreszins(double kapital, double zinssatz, double jahre)
{
    double result;

    result = (kapital * zinssatz) / 100 * jahre;

    return result;
}

void ausgabe_zinsen_jahreszins()
{
    double kapital, zinssatz, jahre;

    kapital = einlesen_kapital(kapital);
    zinssatz = einlesen_zinssatz(zinssatz);
    jahre = einlesen_jahre(jahre);

    printf("\nDie Zinsen betragen: %.2lf", berechnung_zinsen_jahreszins(kapital, zinssatz, jahre));
}
