#include"quader_auswahl.h"

int auswahl_volumen_grundflaeche_oberflaeche_quader(int auswahlquader)
{
    printf("\nBitte waehlen:\n");
    printf("1. Volumen \n2. Grundflaeche \n3. Oberflaeche\n\n");
    scanf("%d", &auswahlquader);

    return auswahlquader;
}
