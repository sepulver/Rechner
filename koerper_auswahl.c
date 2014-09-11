#include"koerper_auswahl.h"

void berechnung_koerper()
{
    int auswahlkoerperberechnung, gewaehltkoerperberechnung;

    gewaehltkoerperberechnung = auswahl_koerperberechnung(auswahlkoerperberechnung);

    switch(gewaehltkoerperberechnung)
    {
        case 1:
            berechnung_kreis();
            break;

        case 2:
            quader();
            break;

        case 3:
            berechnung_kegel();
            break;
    }
}

int auswahl_koerperberechnung(int auswahlkoerperberechnung)
{

    printf("\nBitte waehlen:\n");
    printf("1. Kreisberechnung \n2. Quaderberechnung \n3. Kegelberechung \n\n");
    scanf("%d", &auswahlkoerperberechnung);

    return auswahlkoerperberechnung;
}

void berechnung_kreis()
{
    int auswahlkreis, gewaehltkreis;

    gewaehltkreis = auswahl_flaeche_umfang_durchmesser_kreis(auswahlkreis);

    switch(gewaehltkreis)
    {
    case 1:
        ausgabe_flaeche_kreis();
        bildschirmloeschen();
        break;

    case 2:
        ausgabe_umfang_kreis();
        bildschirmloeschen();
        break;

    case 3:
        ausgabe_durchmesser_kreis();
        bildschirmloeschen();
        break;
    }
}

int auswahl_flaeche_umfang_durchmesser_kreis(int auswahlkreis)
{
    printf("\nBitte waehlen: \n");
    printf("1. Flaeche \n2. Umfang \n3. Durchmesser\n\n");
    scanf("%d", &auswahlkreis);

    return auswahlkreis;
}

double einlesen_radius_kreis(double radius)
{
    printf("\nRadius --> ");
    scanf("%lf", &radius);

    return radius;
}

double berechnung_flaeche_kreis(double radius)
{
    return 3.14159 * radius * radius;
}

void ausgabe_flaeche_kreis()
{
    double radius;

    radius = einlesen_radius_kreis(radius);

    printf("Die Flaeche betraegt: %.2lf",  berechnung_flaeche_kreis(radius));
}

double berechnung_umfang_kreis(double radius)
{
    return 2 * 3.14159 * radius;
}

void ausgabe_umfang_kreis()
{
    double radius;

    radius = einlesen_radius_kreis(radius);

    printf("Der Umfang betraegt: %.2lf", berechnung_umfang_kreis(radius));
}

double berechnung_durchmesser_kreis(double radius)
{
    return 2 * radius;
}

void ausgabe_durchmesser_kreis()
{
    double radius;

    radius = einlesen_radius_kreis(radius);

    printf("Der Durchmesser betraegt: %.2lf", berechnung_durchmesser_kreis(radius));
}

void berechnung_kegel()
{
    int auswahlkegel, gewaehltkegel;

    gewaehltkegel = auswahl_berechnung_kegel(auswahlkegel);

    switch(gewaehltkegel)
    {
        case 1:
            ausgabe_grundflaeche_kegel();
            bildschirmloeschen();
            break;

        case 2:
            ausgabe_volumen_kegel();
            bildschirmloeschen();
            break;

        case 3:
            ausgabe_seitenhoehe_kegel();
            bildschirmloeschen();
            break;

        case 4:
            ausgabe_mantelflaeche_kegel();
            bildschirmloeschen();
            break;

        case 5:
            ausgabe_oberflaeche_kegel();
            bildschirmloeschen();
            break;
    }
}

int auswahl_berechnung_kegel(int auswahlkegel)
{
    printf("\nBitte waehlen: \n");
    printf("1. Grundflaeche \n2. Volumen\n3. Seitenhoehe\n4. Mantelflaeche\n5. Oberflaeche\n\n");
    scanf("%d", &auswahlkegel);

    return auswahlkegel;
}

double einlesen_radius_kegel(double radius)
{
    printf("\nRadius --> ");
    scanf("%lf", &radius);

    return radius;
}

double einlesen_hoehe_kegel(double hoehe)
{
    printf("\nHoehe --> ");
    scanf("%lf", &hoehe);

    return hoehe;
}

double berechnung_grundflaeche_kegel(double radius)
{
    return 3.14159 * radius * radius;
}

void ausgabe_grundflaeche_kegel()
{
    double radius;

    radius = einlesen_radius_kegel(radius);

    printf("\nDie Grundflaeche betraegt: %.2lf", berechnung_grundflaeche_kegel(radius));
}

double berechnung_volumen_kegel(double radius, double hoehe)
{
    double grundflaeche, result;

    grundflaeche = berechnung_grundflaeche_kegel(radius);

    result = grundflaeche / 3 * hoehe;

    return result;
}

void ausgabe_volumen_kegel()
{
    double hoehe, radius, grundflaeche;

    radius = einlesen_radius_kegel(radius);

    hoehe = einlesen_hoehe_kegel(hoehe);

    printf("\nDas Volumen betraegt: %.2lf", berechnung_volumen_kegel(radius, hoehe));
}

double berechnung_seitenhoehe_kegel(double radius, double hoehe)
{
    double result;

    result = sqrt((hoehe * hoehe) + radius * radius);

    return result;
}

void ausgabe_seitenhoehe_kegel()
{
    double radius, hoehe;

    radius = einlesen_radius_kegel(radius);
    hoehe = einlesen_hoehe_kegel(hoehe);

    printf("\nDie Seitenhoehe betraegt: %.2lf", berechnung_seitenhoehe_kegel(radius, hoehe));
}

double berechnung_mantelflaeche_kegel(double radius, double hoehe)
{
    double result;

    result = 3.14159 * radius * berechnung_seitenhoehe_kegel(radius, hoehe);

    return result;
}

void ausgabe_mantelflaeche_kegel()
{
    double radius, hoehe;

    radius = einlesen_radius_kegel(radius);
    hoehe = einlesen_hoehe_kegel(hoehe);

    printf("\nDie Mantelflaeche betraegt: %.2lf", berechnung_mantelflaeche_kegel(radius, hoehe));
}

double berechnung_oberflaeche_kegel(double radius, double hoehe)
{
    double result;

    result = berechnung_grundflaeche_kegel(radius) + berechnung_mantelflaeche_kegel(radius, hoehe);

    return result;
}

void ausgabe_oberflaeche_kegel()
{
    double radius, hoehe;

    radius = einlesen_radius_kegel(radius);
    hoehe = einlesen_hoehe_kegel(hoehe);

    printf("\nDie Oberflaeche betraegt: %.2lf", berechnung_oberflaeche_kegel(radius, hoehe));
}
