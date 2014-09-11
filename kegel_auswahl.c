#include"kegel_auswahl.h"

int auswahl_berechnung_kegel(int auswahlkegel)
{
    printf("\nBitte waehlen: \n");
    printf("1. Grundflaeche \n2. Volumen\n3. Seitenhoehe\n4. Mantelflaeche\n5. Oberflaeche\n\n");
    scanf("%d", &auswahlkegel);

    return auswahlkegel;
}
