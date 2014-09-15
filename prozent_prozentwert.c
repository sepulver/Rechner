#include"prozent_prozentwert.h"
#include"prozent_einlesen_werte.h"

double berechnung_prozentwert_prozent(double grundwert, double prozentsatz)
{
    double result;

    result = (grundwert * prozentsatz) / 100;

    return result;
}

void ausgabe_prozentwert_prozent()
{
    double grundwert, prozentsatz;

    grundwert = einlesen_grundwert(grundwert);
    prozentsatz = einlesen_prozentsatz(prozentsatz);

    printf("\nDer Prozentwert betraegt: %.2lf", berechnung_prozentwert_prozent(grundwert, prozentsatz));
}

