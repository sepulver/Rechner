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

