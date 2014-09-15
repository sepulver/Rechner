#include"wzg_zeit.h"
#include"wzg_einlesen_werte.h"

double berechnung_zeit(double geschwindigkeit,double weg)
{
    return weg / geschwindigkeit;
}

void ausgabe_zeit()
{
    double geschwindigkeit, weg;

    geschwindigkeit = einlesen_geschwindigkeit(geschwindigkeit);
    weg = einlesen_weg(weg);

    printf("\nDie Zeit betraegt: %.2lf h", berechnung_zeit(geschwindigkeit, weg));
}
