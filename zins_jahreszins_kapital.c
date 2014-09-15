#include"zins_jahreszins_kapital.h"
#include"zins_einlesen_werte.h"

double berechnung_kapital_jahreszins(double zinsen, double zinssatz, double jahre)
{
    double result;

    result = (zinsen * 100) / (zinssatz * jahre);

    return result;
}

void ausgabe_kapital_jahreszins()
{
    double zinsen, zinssatz, jahre;

    zinsen = einlesen_zinsen(zinsen);
    zinssatz = einlesen_zinssatz(zinssatz);
    jahre = einlesen_jahre(jahre);

    printf("\nDas Kapital betraegt: %.2lf", berechnung_kapital_jahreszins(zinsen, zinssatz, jahre));
}
