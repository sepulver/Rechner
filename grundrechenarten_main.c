#include"grundrechenarten.h"

int grundrechenarten_main()
{
    double zahl1, zahl2;
    int auswahlgrundrechenarten;

    berechnung_grundrechenarten();

    auswahl_grundrechenarten(auswahlgrundrechenarten);

    berechnung_addition(zahl1, zahl2);
    ausgabe_addition();

    berechnung_subtraktion(zahl1, zahl2);
    ausgabe_subtraktion();

    berechnung_multiplikation(zahl1, zahl2);
    ausgabe_multiplikation();

    berechnung_division(zahl1, zahl2);
    ausgabe_addition();

    return 0;
}
