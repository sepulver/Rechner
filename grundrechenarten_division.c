#include"grundrechenarten_division.h"
#include"grundrechenarten_einlesen_werte.h"

double berechnung_division(double zahl1, double zahl2)
{
    return zahl1 / zahl2;
}

void ausgabe_division()
{
    double zahl1, zahl2;

    zahl1 = einlesen_zahl1(zahl1);
    zahl2 = einlesen_zahl2(zahl2);

    printf("\n%.2lf / %.2lf = %.2lf", zahl1, zahl2, berechnung_division(zahl1, zahl2));
}

