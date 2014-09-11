#include"koerper_auswahl.h"
#include"quader.h"

int koerper_main()
{
    double radius, laenge, breite, hoehe;
    int auswahlkoerperberechnung, auswahlkreis, auswahlquader, auswahlkegel;

    berechnung_koerper();

    auswahl_koerperberechnung(auswahlkoerperberechnung);

    berechnung_kreis();

    auswahl_flaeche_umfang_durchmesser_kreis(auswahlkreis);

    einlesen_radius_kreis(radius);

    berechnung_flaeche_kreis(radius);
    ausgabe_flaeche_kreis();

    berechnung_umfang_kreis(radius);
    ausgabe_umfang_kreis();

    berechnung_durchmesser_kreis(radius);
    ausgabe_durchmesser_kreis();

    quader();

    auswahl_volumen_grundflaeche_oberflaeche_quader(auswahlquader);

    einlesen_laenge(laenge);
    einlesen_breite(breite);
    einlesen_hoehe(hoehe);

    berechnug_volumen_quader(laenge, breite, hoehe);
    ausgabe_volumen_quader();

    berechnung_grundflaeche_quader(laenge, breite);
    ausgabe_grundflaeche_quader();

    berechnung_oberflaeche_quader(laenge, breite, hoehe);
    ausgabe_oberflaeche_quader();

    berechnung_kegel();

    auswahl_berechnung_kegel(auswahlkegel);

    einlesen_radius_kegel(radius);
    einlesen_hoehe_kegel(hoehe);

    berechnung_grundflaeche_kegel(radius);
    ausgabe_grundflaeche_kegel();

    berechnung_volumen_kegel(radius, hoehe);
    ausgabe_volumen_kegel();

    berechnung_seitenhoehe_kegel(radius, hoehe);
    ausgabe_seitenhoehe_kegel();

    berechnung_mantelflaeche_kegel(radius, hoehe);
    ausgabe_mantelflaeche_kegel();

    berechnung_oberflaeche_kegel(radius, hoehe);
    ausgabe_oberflaeche_kegel();
}
