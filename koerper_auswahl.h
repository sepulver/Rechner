#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

void berechnung_koerper();

int auswahl_koerperberechnung(int auswahlkoerperberechnung);

void berechnung_kreis();

int auswahl_flaeche_umfang_durchmesser_kreis(int auswahlkreis);

double einlesen_radius_kreis(double radius);

double berechnung_flaeche_kreis(double radius);
void ausgabe_flaeche_kreis();

double berechnung_umfang_kreis(double radius);
void ausgabe_umfang_kreis();

double berechnung_durchmesser_kreis(double radius);
void ausgabe_durchmesser_kreis();

void berechnung_quader();

int auswahl_volumen_grundflaeche_oberflaeche_quader(int auswahlquader);

double einlesen_laenge(double laenge);
double einlesen_breite(double breite);
double einlesen_hoehe(double hoehe);

double berechnug_volumen_quader(double laenge, double breite, double hoehe);
void ausgabe_volumen_quader();

double berechnung_grundflaeche_quader(double laenge, double breite);
void ausgabe_grundflaeche_quader();

double berechnung_oberflaeche_quader(double laenge, double breite, double hoehe);
void ausgabe_oberflaeche_quader();

void berechnung_kegel();

int auswahl_berechnung_kegel(int auswahlkegel);

double einlesen_radius_kegel(double radius);
double einlesen_hoehe_kegel(double hoehe);

double berechnung_grundflaeche_kegel(double radius);
void ausgabe_grundflaeche_kegel();

double berechnung_volumen_kegel(double radius, double hoehe);
void ausgabe_volumen_kegel();

double berechnung_seitenhoehe_kegel(double radius, double hoehe);
void ausgabe_seitenhoehe_kegel();

double berechnung_mantelflaeche_kegel(double radius, double hoehe);
void ausgabe_mantelflaeche_kegel();

double berechnung_oberflaeche_kegel(double radius, double hoehe);
void ausgabe_oberflaeche_kegel();

void bildschirmloeschen();
