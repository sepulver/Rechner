#include"prozent.h"

void berechnung_prozent()
{
    int auswahlprozent, gewaehltprozent;

    gewaehltprozent = auswahl_berechnung_prozent(auswahlprozent);

    switch(gewaehltprozent)
    {
        case 1:
            ausgabe_grundwert_prozent();
            break;

        case 2:
            ausgabe_prozentwert_prozent();
            break;

        case 3:
            ausgabe_prozentsatz_prozent();
            break;
    }
}

int auswahl_berechnung_prozent(int auswahlprozent)
{
    printf("\nBitte waehlen: ");
    printf("\n1. Grundwert \n2. Prozentwert \n3. Prozentsatz \n\n");
    scanf("%d", &auswahlprozent);

    return auswahlprozent;
}

