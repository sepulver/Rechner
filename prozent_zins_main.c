#include"prozent_zins.h"

int prozent_zins_main()
{
    double grundwert, prozentwert, prozentsatz, zinsen, kapital, zinssatz, jahre, tage, monate, endkapital, startkapital;

    int auswahlprozentzins, auswahlprozent, auswahlzinsart, auswahljahreszins, auswahlmonatszins, auswahltageszins, auswahlzinseszins;

    berechnung_prozent_zins();

    auswahl_prozent_zins(auswahlprozentzins);

    berechnung_prozent();

    auswahl_berechnung_prozent(auswahlprozent);

    einlesen_grundwert(grundwert);
    einlesen_prozentwert(prozentwert);
    einlesen_prozentsatz(prozentsatz);

    berechnung_grundwert_prozent(prozentwert, prozentsatz);
    ausgabe_grundwert_prozent();

    berechnung_prozentwert_prozent(grundwert, prozentsatz);
    ausgabe_prozentwert_prozent();

    berechnung_prozentsatz_prozent(grundwert, prozentwert);
    ausgabe_prozentsatz_prozent();

    ausgabe_berechnung_zins();
    auswahl_ausgabetyp_zins(auswahlzinsart);

    einlesen_zinsen(zinsen);
    einlesen_kapital(kapital);
    einlesen_zinssatz(zinssatz);
    einlesen_jahre(jahre);
    einlesen_monate(monate);
    einlesen_tage(tage);

    ausgabe_auswahl_jahreszins();
    auswahl_jahreszins(auswahljahreszins);

    berechnung_zinsen_jahreszins(kapital, zinssatz, jahre);
    ausgabe_zinsen_jahreszins();

    berechnung_kapital_jahreszins(zinsen, zinssatz, jahre);
    ausgabe_kapital_jahreszins();

    berechnung_zinssatz_jahreszins(zinsen, kapital, jahre);
    ausgabe_zinssatz_jahreszins();

    ausgabe_auswahl_monatszins();
    auswahl_monatszins(auswahlmonatszins);

    berechnung_zinsen_monatszins(kapital, zinssatz, monate);
    ausgabe_zinsen_monatszins();

    berechnung_kapital_monatszins(zinsen, zinssatz, monate);
    ausgabe_kapital_monatszins();

    berechnung_zinssatz_monatszins(zinsen, kapital, monate);
    ausgabe_zinssatz_monatszins();

    ausgabe_auswahl_tageszins();
    auswahl_monatszins(auswahltageszins);

    berechnung_zinsen_tageszins(kapital, zinssatz, tage);
    ausgabe_zinsen_tageszins();

    berechnung_kapital_tageszins(zinsen, zinssatz, tage);
    ausgabe_kapital_tageszins();

    berechnung_zinssatz_tageszins(zinsen, kapital, tage);
    ausgabe_zinssatz_tageszins();

    ausgabe_berechnung_zinseszins();

    auswahl_zinseszins(auswahlzinseszins);

    einlesen_endkapital_zinseszins(endkapital);
    einlesen_startkapital_zinseszins(startkapital);
    einlesen_zinssatz_zinseszins(zinssatz);
    einlesen_jahre_zinseszins(jahre);

    berechnung_endkaptial_zinseszins(startkapital, zinssatz, jahre);
    ausgabe_endkapital_zinseszins();

    berechnung_startkaptial_zinseszins(endkapital, zinssatz, jahre);
    ausgabe_startkapital_zinseszins();

    berechnung_zinssatz_zinseszins(endkapital, startkapital, jahre);
    ausgabe_zinssatz_zinseszins();

    berechnung_zaehler_jahre_zinseszins(endkapital, startkapital);
    berechnung_nenner_jahre_zinseszins(zinssatz);
    berechnung_ergebnis_jahre_zinseszins(endkapital, startkapital, jahre);
    ausgabe_jahre_zinseszins();

    return 0;
}
