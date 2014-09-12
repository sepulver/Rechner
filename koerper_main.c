#include"koerper.h"

int koerper_main()
{
    double radius, laenge, breite, hoehe;
    int auswahlkoerperberechnung, auswahlkugel, auswahlquader, auswahlkegel;

    berechnung_koerper();

    auswahl_koerperberechnung(auswahlkoerperberechnung);

    berechnung_kugel();

    auswahl_berechnung_kugel(auswahlkugel);

    einlesen_radius_kugel(radius);

    berechnung_oberflaeche_kugel(radius);
    ausgabe_oberflaeche_kugel();

    berechnung_volumen_kugel(radius);
    ausgabe_volumen_kugel();

    berechnung_quader();

    auswahl_berechnung_quader(auswahlquader);

    einlesen_laenge(laenge);
    einlesen_breite(breite);
    einlesen_hoehe(hoehe);

    berechnung_volumen_quader(laenge, breite, hoehe);
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
