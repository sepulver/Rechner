#include"quader.h"

void quader()
{
    int auswahlquader, gewaehltquader;

    gewaehltquader = auswahl_volumen_grundflaeche_oberflaeche_quader(auswahlquader);

    switch(gewaehltquader)
    {
        case 1:
            ausgabe_volumen_quader();
            bildschirmloeschen();
            break;
        case 2:
            ausgabe_grundflaeche_quader();
            bildschirmloeschen();
            break;

        case 3:
            ausgabe_oberflaeche_quader();
            bildschirmloeschen();
            break;
    }
}

int auswahl_volumen_grundflaeche_oberflaeche_quader(int auswahlquader)
{
    printf("\nBitte waehlen:\n");
    printf("1. Volumen \n2. Grundflaeche \n3. Oberflaeche\n\n");
    scanf("%d", &auswahlquader);

    return auswahlquader;
}
