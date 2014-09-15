#include"zins_tageszins.h"

void ausgabe_auswahl_tageszins()
{
    int auswahlttageszins, gewaehlttageszins;

    gewaehlttageszins = auswahl_tageszins(auswahlttageszins);

    switch(gewaehlttageszins)
    {
        case 1:
            ausgabe_zinsen_tageszins();
            break;

        case 2:
            ausgabe_kapital_tageszins();
            break;

        case 3:
            ausgabe_zinssatz_tageszins();
            break;
    }
}

int auswahl_tageszins(int auswahltageszins)
{
    printf("\nBitte waehlen: \n");
    printf("1. Zinsen \n2. Kapital \n3. Zinssatz\n\n");
    scanf("%d", &auswahltageszins);

    return auswahltageszins;
}
