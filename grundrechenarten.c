#include"grundrechenarten.h"

void berechnung_grundrechenarten()
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
