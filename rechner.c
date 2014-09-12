#include"rechner.h"

void auswahl_test()
{
    int auswahlberechnung, gewaehltberechnung;
    bool ende = false;

    while(!ende)
    {
        gewaehltberechnung = auswahl_berechnung(auswahlberechnung);

        switch(gewaehltberechnung)
        {
        case 1:
            grundrechenarten();
            break;

        case 2:
            berechnung_weg_zeit_geschwindigkeit();
            break;

       case 3:
            berechnung_flaechen();
            break;

        case 4:
            berechnung_koerper();
            break;

        case 5:
            berechnung_prozent_zins();
            break;

        case 6:
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
    printf("1. Grundrechenarten \n2. Weg / Zeit / Geschwindigkeit \n3. Flaechenberechnung \n4. Koerperberechnung \n5. Prozente und Zinsen berechnen \n6. Beenden\n\n");
    scanf("%d", &auswahlberechnung);

    return auswahlberechnung;
}

