#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

void berechnung_prozent_zins();

int auswahl_prozent_zins(int auswahlprozentzins);

void ausgabe_berechnung_prozent();

int auswahl_berechnung_prozent(int auswahlprozent);

double einlesen_grundwert(double grundwertt);
double einlesen_prozentwert(double prozentwert);
double einlesen_prozentsatz(double prozentsatz);

double berechnung_grundwert_prozent(double prozentwert, double prozentsatz);
void ausgabe_grundwert_prozent();

double berechnung_prozentwert_prozent(double grundwert, double prozentsatz);
void ausgabe_prozentwert_prozent();

double berechnung_prozentsatz_prozent(double grundwert, double prozentwert);
void ausgabe_prozentsatz_prozent();

void ausgabe_berechnung_zins();
int auswahl_ausgabetyp_zins(int auswahlzinsart);

double einlesen_zinsen(double zinsen);
double einlesen_kapital(double kapital);
double einlesen_zinssatz(double zinssatz);
double einlesen_jahre(double jahre);
double einlesen_monate(double monate);
double einlesen_tage(double tage);

void ausgabe_auswahl_jahreszins();
int auswahl_jahreszins(int auswahljahreszins);

double berechnung_zinsen_jahreszins(double kapital, double zinssatz, double jahre);
void ausgabe_zinsen_jahreszins();

double berechnung_kapital_jahreszins(double zinsen, double zinssatz, double jahre);
void ausgabe_kapital_jahreszins();

double berechnung_zinssatz_jahreszins(double zinsen, double kapital, double jahre);
void ausgabe_zinssatz_jahreszins();

void ausgabe_auswahl_monatszins();
int auswahl_monatszins(int auswahlmonatszins);

double berechnung_zinsen_monatszins(double kapital, double zinssatz, double monate);
void ausgabe_zinsen_monatszins();

double berechnung_kapital_monatszins(double zinsen, double zinssatz, double monate);
void ausgabe_kapital_monatszins();

double berechnung_zinssatz_monatszins(double zinsen, double kapital, double monate);
void ausgabe_zinssatz_monatszins();

void ausgabe_auswahl_tageszins();
int auswahl_monatszins(int auswahltageszins);

double berechnung_zinsen_tageszins(double kapital, double zinssatz, double tage);
void ausgabe_zinsen_tageszins();

double berechnung_kapital_tageszins(double zinsen, double zinssatz, double tage);
void ausgabe_kapital_tageszins();

double berechnung_zinssatz_tageszins(double zinsen, double kapital, double tage);
void ausgabe_zinssatz_tageszins();

void ausgabe_berechnung_zinseszins();

int auswahl_zinseszins(int auswahlzinseszins);

double einlesen_endkapital_zinseszins(double endkapital);
double einlesen_startkapital_zinseszins(double startkapital);
double einlesen_zinssatz_zinseszins(double zinssatz);
double einlesen_jahre_zinseszins(double jahre);

double berechnung_endkaptial_zinseszins(double startkapital, double zinssatz, double jahre);
void ausgabe_endkapital_zinseszins();

double berechnung_startkaptial_zinseszins(double endkapital, double zinssatz, double jahre);
void ausgabe_startkapital_zinseszins();

double berechnung_zinssatz_zinseszins(double endkapital, double startkapital, double jahre);
void ausgabe_zinssatz_zinseszins();

double berechnung_zaehler_jahre_zinseszins(double endkapital, double startkapital);
double berechnung_nenner_jahre_zinseszins(double zinssatz);
double berechnung_ergebnis_jahre_zinseszins(double endkapital, double startkapital, double jahre);
void ausgabe_jahre_zinseszins();

void bildschirmloeschen();
