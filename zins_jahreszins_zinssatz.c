#include"zins_jahreszins_zinssatz.h"
#include"zins_einlesen_werte.h"

double berechnung_zinssatz_jahreszins(double zinsen, double kapital, double jahre)
{
    double result;

    result = (zinsen * 100) / (kapital * jahre);

    return result;
}

void ausgabe_zinssatz_jahreszins()
{
    double zinsen, kapital, jahre;

    zinsen = einlesen_zinsen(zinsen);
    kapital = einlesen_kapital(kapital);
    jahre = einlesen_jahre(jahre);

    printf("\nDer Zinssatz betraegt: %.2lf %%", berechnung_zinssatz_jahreszins(zinsen, kapital, jahre));
}
