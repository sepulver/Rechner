#include"prozent_grundwert.h"

double berechnung_grundwert_prozent(double prozentwert, double prozentsatz)
{
    double result;

    result = (prozentwert * 100) / prozentsatz;

    return result;
}

void ausgabe_grundwert_prozent()
{
    double prozentwert, prozentsatz;

    prozentwert = einlesen_prozentwert(prozentwert);
    prozentsatz = einlesen_prozentsatz(prozentsatz);

    printf("\nDer Grundwert betraegt: %.2lf", berechnung_grundwert_prozent(prozentwert, prozentsatz));
}
