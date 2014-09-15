#include"rechner.h"

void auswahl_rechner()
{
    int auswahlberechnung, gewaehltberechnung;
    bool ende = false;

    while(!ende)
    {
        gewaehltberechnung = auswahl_berechnung(auswahlberechnung);

        switch(gewaehltberechnung)
        {
        case 1:
            berechnung_grundrechenarten();
            break;

        case 2:
            berechnung_weg_zeit_geschwindigkeit();
            break;

     /*  case 3:
            berechnung_flaeche();
            break;*/

        case 3:
            berechnung_koerper();
            break;

        case 4:
            berechnung_prozent_zins();
            break;

        case 5:
            printf("Das Programm wird beendet.");
            ende = true;
            break;
        }
    }
}

int auswahl_berechnung(int auswahlberechnung)
{
    printf("Rechner\n\n");
    printf("Bitte waehlen:\n");
    printf("1. Grundrechenarten \n2. Weg / Zeit / Geschwindigkeit berechnen ");
    printf("\n3. Koerperberechnung \n4. Prozente und Zinsen berechnen \n5. Beenden\n\n");
    scanf("%d", &auswahlberechnung);

    return auswahlberechnung;
}

