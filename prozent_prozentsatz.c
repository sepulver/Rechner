#include"prozent_prozentsatz.h"
#include"prozent_einlesen_werte.h"

double berechnung_prozentsatz_prozent(double grundwert, double prozentwert)
{
    double result;

    result = (prozentwert * 100) / grundwert;

    return result;
}

void ausgabe_prozentsatz_prozent()
{
    double grundwert, prozentwert;

    grundwert = einlesen_grundwert(grundwert);
    prozentwert = einlesen_prozentwert(prozentwert);

    printf("\nDer Prozentsatz betraegt: %.2lf %%", berechnung_prozentsatz_prozent(grundwert, prozentwert));
}
