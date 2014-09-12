#include"grundrechenarten_multiplikation.h"
#include"grundrechenarten_einlesen_werte.h"

double berechnung_multiplikation(double zahl1, double zahl2)
{
    return zahl1 * zahl2;
}

void ausgabe_multiplikation()
{
    double zahl1, zahl2;

    zahl1 = einlesen_zahl1(zahl1);
    zahl2 = einlesen_zahl2(zahl2);

    printf("\n%.2lf * %.2lf = %.2lf", zahl1, zahl2, berechnung_multiplikation(zahl1, zahl2));
}
