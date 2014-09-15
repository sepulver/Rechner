#include"zins_monatszins_zinsen.h"
#include"zins_einlesen_werte.h"

double berechnung_zinsen_monatszins(double kapital, double zinssatz, double monate)
{
    double result;

    result = ((kapital * zinssatz) / 100) * monate / 12;

    return result;
}

void ausgabe_zinsen_monatszins()
{
    double kapital, zinssatz, monate;

    kapital = einlesen_kapital(kapital);
    zinssatz = einlesen_zinssatz(zinssatz);
    monate = einlesen_monate(monate);

    printf("\nDie Zinsen betragen: %.2lf", berechnung_zinsen_monatszins(kapital, zinssatz, monate));
}
