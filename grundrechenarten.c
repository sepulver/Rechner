#include"grundrechenarten.h"

void grundrechenarten()
{
    int auswahlgrundrechenarten, gewaehltgrundrechenarten;
    int ende = 0;

    gewaehltgrundrechenarten = auswahl_grundrechenarten(auswahlgrundrechenarten);

        switch(gewaehltgrundrechenarten)
        {
            case 1:
                ausgabe_addition();
                bildschirmloeschen();
                break;

            case 2:
                ausgabe_subtraktion();
                bildschirmloeschen();
                break;

            case 3:
                ausgabe_multiplikation();
                bildschirmloeschen();
                break;

            case 4:
                ausgabe_division();
                bildschirmloeschen();
                break;
        }
}

int auswahl_grundrechenarten(int auswahlgrundrechenarten)
{
    printf("\nBitte waehlen: \n1. Addition \n2. Subtraktion \n3. Multiplikation \n4. Division \n5. Ende\n\n");
    scanf("%d", &auswahlgrundrechenarten);

    return auswahlgrundrechenarten;
}

double einlesen_zahl1(double zahl1)
{
    printf("\n1. Zahl --> ");
    scanf("%lf", &zahl1);

    return zahl1;
}

double einlesen_zahl2(double zahl2)
{
    printf("\n2. Zahl --> ");
    scanf("%lf", &zahl2);

    return zahl2;
}

double berechnung_addition(double zahl1, double zahl2)
{
    return zahl1 + zahl2;
}

void ausgabe_addition()
{
    double zahl1, zahl2;

    zahl1 = einlesen_zahl1(zahl1);
    zahl2 = einlesen_zahl2(zahl2);

    printf("\n%.2lf + %.2lf = %.2lf", zahl1, zahl2, berechnung_addition(zahl1, zahl2));
}

double berechnung_subtraktion(double zahl1, double zahl2)
{
    return zahl1 - zahl2;
}

void ausgabe_subtraktion()
{
    double zahl1, zahl2;

    zahl1 = einlesen_zahl1(zahl1);
    zahl2 = einlesen_zahl2(zahl2);

    printf("\n%.2lf - %.2lf = %.2lf", zahl1, zahl2, berechnung_subtraktion(zahl1, zahl2));
}

double berechnung_multiplikation(double zahl1, double zahl2)
{
    return zahl1 * zahl2;
}

void ausgabe_multiplikation()
{
    double zahl1, zahl2;

    zahl1 = einlesen_zahl1(zahl1);
    zahl2 = einlesen_zahl2(zahl2);

    printf("\n%.2lf * %.2lf = %.2lf", zahl1, zahl2, berechnung_multiplikation(zahl1, zahl2));
}

double berechnung_division(double zahl1, double zahl2)
{
    return zahl1 / zahl2;
}

void ausgabe_division()
{
    double zahl1, zahl2;

    zahl1 = einlesen_zahl1(zahl1);
    zahl2 = einlesen_zahl2(zahl2);

    printf("\n%.2lf / %.2lf = %.2lf", zahl1, zahl2, berechnung_division(zahl1, zahl2));
}
