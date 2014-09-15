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
