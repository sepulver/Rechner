#include"zins_monatszins.h"

void ausgabe_auswahl_monatszins()
{
    int auswahlmonatszins, gewaehltmonatszins;

    gewaehltmonatszins = auswahl_monatszins(auswahlmonatszins);

    switch(gewaehltmonatszins)
    {
        case 1:
            ausgabe_zinsen_monatszins();
            break;

        case 2:
            ausgabe_kapital_monatszins();
            break;

        case 3:
            ausgabe_zinssatz_monatszins();
            break;
    }
}

int auswahl_monatszins(int auswahlmonatszins)
{
    printf("\nBitte waehlen: \n");
    printf("1. Zinsen \n2. Kapital \n3. Zinssatz\n\n");
    scanf("%d", &auswahlmonatszins);

    return auswahlmonatszins;
}
