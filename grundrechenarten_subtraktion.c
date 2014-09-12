#include"grundrechenarten_subtraktion.h"
#include"grundrechenarten_einlesen_werte.h"

double berechnung_subtraktion(double zahl1, double zahl2)
{
    return zahl1 - zahl2;
}

void ausgabe_subtraktion()
{
    double zahl1, zahl2;

    zahl1 = einlesen_zahl1(zahl1);
    zahl2 = einlesen_zahl2(zahl2);

    printf("\n%.2lf - %.2lf = %.2lf", zahl1, zahl2, berechnung_subtraktion(zahl1, zahl2));
}
