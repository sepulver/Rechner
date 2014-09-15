#include"zins_monatszins_kapital.h"
#include"zins_einlesen_werte.h"

double berechnung_kapital_monatszins(double zinsen, double zinssatz, double monate)
{
    double result;

    result = (zinsen * 100) / (zinssatz * (monate / 12));

    return result;
}

void ausgabe_kapital_monatszins()
{
    double zinsen, zinssatz, monate;

    zinsen = einlesen_zinsen(zinsen);
    zinssatz = einlesen_zinssatz(zinssatz);
    monate = einlesen_monate(monate);

    printf("\nDas Kapital betraegt: %.2lf", berechnung_kapital_monatszins(zinsen, zinssatz, monate));
}
