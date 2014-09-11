#include"kegel.h"

void berechnung_kegel()
{
    int auswahlkegel, gewaehltkegel;

    gewaehltkegel = auswahl_berechnung_kegel(auswahlkegel);

    switch(gewaehltkegel)
    {
        case 1:
            ausgabe_grundflaeche_kegel();
            bildschirmloeschen();
            break;

        case 2:
            ausgabe_volumen_kegel();
            bildschirmloeschen();
            break;

        case 3:
            ausgabe_seitenhoehe_kegel();
            bildschirmloeschen();
            break;

        case 4:
            ausgabe_mantelflaeche_kegel();
            bildschirmloeschen();
            break;

        case 5:
            ausgabe_oberflaeche_kegel();
            bildschirmloeschen();
            break;
    }
}

int auswahl_berechnung_kegel(int auswahlkegel)
{
    printf("\nBitte waehlen: \n");
    printf("1. Grundflaeche \n2. Volumen\n3. Seitenhoehe\n4. Mantelflaeche\n5. Oberflaeche\n\n");
    scanf("%d", &auswahlkegel);

    return auswahlkegel;
}

