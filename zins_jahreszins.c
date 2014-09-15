#include"zins_jahreszins.h"

void ausgabe_auswahl_jahreszins()
{
    int auswahljahreszins, gewaehltjareszins;

    gewaehltjareszins = auswahl_jahreszins(auswahljahreszins);

    switch(gewaehltjareszins)
    {
        case 1:
            ausgabe_zinsen_jahreszins();
            break;

        case 2:
            ausgabe_kapital_jahreszins();
            break;

        case 3:
            ausgabe_zinssatz_jahreszins();
            break;
    }
}

int auswahl_jahreszins(int auswahljahreszins)
{
    printf("\nBitte waehlen: \n");
    printf("1. Zinsen \n2. Kapital \n3. Zinssatz\n\n");
    scanf("%d", &auswahljahreszins);

    return auswahljahreszins;
}
