#include"zinseszins.h"

void ausgabe_berechnung_zinseszins()
{
    int auswahlzinseszins, gewaehltzinseszins;

    gewaehltzinseszins = auswahl_zinseszins(auswahlzinseszins);

    switch(gewaehltzinseszins)
    {
        case 1:
            ausgabe_endkapital_zinseszins();
            break;

        case 2:
            ausgabe_startkapital_zinseszins();
            break;

        case 3:
            ausgabe_zinssatz_zinseszins();
            break;

        case 4:
            ausgabe_jahre_zinseszins();
            break;
    }
}

int auswahl_zinseszins(int auswahlzinseszins)
{
    printf("\nBitte waehlen: \n");
    printf("1. Endkapital \n2. Startkapital \n3. Zinssatz \n4. Jahre  \n\n");
    scanf("%d", &auswahlzinseszins);

    return auswahlzinseszins;
}
