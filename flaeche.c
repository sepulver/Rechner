#include"flaeche.h"

void berechnung_flaeche()
{
    int auswahlflaechenberechnung, gewaehltflaechenberechnung;

    gewaehltflaechenberechnung = auswahl_flaechenberechnung(auswahlflaechenberechnung);

    switch(gewaehltflaechenberechnung)
    {
        case 1:
            berechnung_kreis();
            break;

     /*   case 2:
            berechnung_viereck();
            break;

        case 3:
            berechnung_dreieck();
            break;*/
    }
}

int auswahl_flaechenberechnung(int auswahlflaechenberechnung)
{

    printf("\nBitte waehlen:\n");
    printf("1. Kreisberechnung \n2. Vierecksberechnung \n3. Dreiecksberechung \n\n");
    scanf("%d", &auswahlflaechenberechnung);

    return auswahlflaechenberechnung;
}
