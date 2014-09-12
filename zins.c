#include"zins.h"

void ausgabe_berechnung_zins()
{
    int auswahlzinsart, gewaehltzinsart;

    gewaehltzinsart = auswahl_ausgabetyp_zins(auswahlzinsart);

    switch(gewaehltzinsart)
    {
        case 1:
            ausgabe_auswahl_jahreszins();
            break;

        case 2:
            ausgabe_auswahl_monatszins();
            break;

        case 3:
            ausgabe_auswahl_tageszins();
            break;
    }
}

int auswahl_ausgabetyp_zins(int auswahlzinsart)
{
    printf("\nBitte waehlen: \n");
    printf("1. Jahreszins \n2. Monatszins \n3. Tageszins\n\n");
    scanf("%d", &auswahlzinsart);

    return auswahlzinsart;
}

