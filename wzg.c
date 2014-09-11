#include"wzg.h"

void berechnung_weg_zeit_geschwindigkeit()
{
    int auswahl_weg_zeit_geschwindigkeit, gewaehlt_weg_zeit_geschwindigkeit;

    gewaehlt_weg_zeit_geschwindigkeit = auswahl_berechnung_weg_zeit_geschwindigkeit(auswahl_weg_zeit_geschwindigkeit);

        switch(gewaehlt_weg_zeit_geschwindigkeit)
        {
            case 1:
                ausgabe_geschwindigkeit();
                bildschirmloeschen();
                break;

            case 2:
                ausgabe_zeit();
                bildschirmloeschen();
                break;

            case 3:
                ausgabe_weg();
                bildschirmloeschen();
                break;
        }
}

int auswahl_berechnung_weg_zeit_geschwindigkeit(int auswahl_weg_zeit_geschwindigkeit)
{
    printf("\nBitte waehlen:\n");
    printf("1. Geschwindigkeit \n2. Zeit \n3. Strecke\n\n");
    scanf("%d", &auswahl_weg_zeit_geschwindigkeit);

    return auswahl_weg_zeit_geschwindigkeit;
}

double einlesen_weg(double weg)
{
    printf("\nWeg (km)--> ");
    scanf("%lf", &weg);

    return weg;
}

double einlesen_zeit(double zeit)
{
    printf("\nZeit (Minuten)--> ");
    scanf("%lf", &zeit);

    return zeit;
}

double einlesen_geschwindigkeit(double geschwindigkeit)
{
    printf("\nGeschwindigkeit (km/h)--> ");
    scanf("%lf", &geschwindigkeit);

    return geschwindigkeit;
}

double berechnung_geschwindigkeit(double zeit,double weg)
{
    return weg / (zeit / 60);
}

void ausgabe_geschwindigkeit()
{
    double zeit, weg;

    weg = einlesen_weg(weg);
    zeit = einlesen_zeit(zeit);

    printf("\nDie Geschwindigkeit betraegt: %.2lf km/h", berechnung_geschwindigkeit(zeit, weg));
}

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

double berechnung_weg(double zeit,double geschwindigkeit)
{
    return (zeit / 60) * geschwindigkeit;
}

void ausgabe_weg()
{
    double zeit, geschwindigkeit;

    zeit = einlesen_zeit(zeit);
    geschwindigkeit = einlesen_geschwindigkeit(geschwindigkeit);

    printf("\nDie Strecke betraegt: %.2lf km", berechnung_weg(zeit, geschwindigkeit));
}
