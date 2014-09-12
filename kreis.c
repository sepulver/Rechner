#include"kreis.h"

void berechnung_kreis()
{
    int auswahlkreis, gewaehltkreis;

    gewaehltkreis = auswahl_berechnung_kreis(auswahlkreis);

    switch(gewaehltkreis)
    {
    case 1:
        ausgabe_flaeche_kreis();
        bildschirmloeschen();
        break;

    case 2:
        ausgabe_umfang_kreis();
        bildschirmloeschen();
        break;

    case 3:
        ausgabe_durchmesser_kreis();
        bildschirmloeschen();
        break;
    }
}

int auswahl_berechnung_kreis(int auswahlkreis)
{
    printf("\nBitte waehlen: \n");
    printf("1. Flaeche \n2. Umfang \n3. Durchmesser\n\n");
    scanf("%d", &auswahlkreis);

    return auswahlkreis;
}
