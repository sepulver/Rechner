#include"zins_tageszins_zinssatz.h"
#include"zins_einlesen_werte.h"

double berechnung_zinssatz_tageszins(double zinsen, double kapital, double tage)
{
    double result;

    result = (zinsen * 100) / (kapital * (tage / 360));

    return result;
}

void ausgabe_zinssatz_tageszins()
{
    double zinsen, kapital, tage;

    zinsen = einlesen_zinsen(zinsen);
    kapital = einlesen_kapital(kapital);
    tage = einlesen_tage(tage);

    printf("\nDer Zinssatz betraegt: %.2lf %%", berechnung_zinssatz_tageszins(zinsen, kapital, tage));
}
