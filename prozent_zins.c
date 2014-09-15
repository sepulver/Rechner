#include"prozent_zins.h"

void berechnung_prozent_zins()
{
    int auswahlprozentzins, gewaehltprozentzins;

    gewaehltprozentzins = auswahl_prozent_zins(auswahlprozentzins);

    switch(gewaehltprozentzins)
    {
        case 1:
            berechnung_prozent();
            bildschirmloeschen();
            break;

       case 2:
            ausgabe_berechnung_zins();
            bildschirmloeschen();
            break;

        case 3:
            ausgabe_berechnung_zinseszins();
            bildschirmloeschen();
            break;
    }
}

int auswahl_prozent_zins(int auswahlprozentzins)
{
    printf("\nBitte waehlen: ");
    printf("\n1. Prozent \n2. Zins \n3. Zinseszins\n\n");
    scanf("%d", &auswahlprozentzins);

    return auswahlprozentzins;
}
