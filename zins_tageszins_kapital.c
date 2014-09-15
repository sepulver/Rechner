#include"zins_tageszins_kapital.h"
#include"zins_einlesen_werte.h"

double berechnung_kapital_tageszins(double zinsen, double zinssatz, double tage)
{
    double result;

    result = (zinsen * 100) / (zinssatz * (tage / 360));

    return result;
}

void ausgabe_kapital_tageszins()
{
    double zinsen, zinssatz, tage;

    zinsen = einlesen_zinsen(zinsen);
    zinssatz = einlesen_zinssatz(zinssatz);
    tage = einlesen_tage(tage);

    printf("\nDas Kapital betraegt: %.2lf", berechnung_kapital_tageszins(zinsen, zinssatz, tage));
}
