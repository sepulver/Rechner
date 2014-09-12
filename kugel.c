#include"kugel.h"

void berechnung_kugel()
{
    int auswahlkugel, gewaehltkugel;

    gewaehltkugel = auswahl_berechnung_kugel(auswahlkugel);

    switch(gewaehltkugel)
    {
        case 1:
            ausgabe_oberflaeche_kugel();
            bildschirmloeschen();
            break;

        case 2:
            ausgabe_volumen_kugel();
            bildschirmloeschen();
            break;
    }
}

int auswahl_berechnung_kugel(int auswahlkugel)
{
    printf("\nBitte waehlen: \n");
    printf("1. Oberflaeche \n 2. Volumen \n\n");
    scanf("%d", &auswahlkugel);

    return auswahlkugel;
}
