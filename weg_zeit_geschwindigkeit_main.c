#include"weg_zeit_geschwindigkeit_auswahl.h"

int weg_zeit_geschwindigkeit_main()
{
    double weg, zeit, geschwindigkeit;

    int auswahl_weg_zeit_geschwindigkeit;

    berechnung_weg_zeit_geschwindigkeit();

    auswahl_berechnung_weg_zeit_geschwindigkeit(auswahl_weg_zeit_geschwindigkeit);

    einlesen_weg(weg);
    einlesen_zeit(zeit);
    einlesen_geschwindigkeit(geschwindigkeit);

    berechnung_geschwindigkeit(zeit, weg);
    ausgabe_geschwindigkeit();

    berechnung_zeit(geschwindigkeit, weg);
    ausgabe_zeit();

    berechnung_weg(zeit, geschwindigkeit);
    ausgabe_weg();

    return 0;
}

