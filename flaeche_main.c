#include"flaeche.h"

int flaeche_main()
{
    double radius, breite, hoehe, laenge;
    int auswahlkreis;

    berechnung_kreis();

    auswahl_berechnung_kreis(auswahlkreis);

    einlesen_radius_kreis(radius);

    berechnung_flaeche_kreis(radius);
    ausgabe_flaeche_kreis();

    berechnung_umfang_kreis(radius);
    ausgabe_umfang_kreis();

    berechnung_durchmesser_kreis(radius);
    ausgabe_durchmesser_kreis();
}
