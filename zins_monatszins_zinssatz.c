#include"zins_monatszins_zinssatz.h"
#include"zins_einlesen_werte.h"

double berechnung_zinssatz_monatszins(double zinsen, double kapital, double monate)
{
    double result;

    result = (zinsen * 100) / (kapital * (monate / 12));

    return result;
}

void ausgabe_zinssatz_monatszins()
{
    double zinsen, kapital, monate;

    zinsen = einlesen_zinsen(zinsen);
    kapital = einlesen_kapital(kapital);
    monate = einlesen_monate(monate);

    printf("\nDer Zinssatz betraegt: %.2lf %%", berechnung_zinssatz_monatszins(zinsen, kapital, monate));
}
