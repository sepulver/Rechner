#include"koerper.h"

void berechnung_koerper()
{
    int auswahlkoerperberechnung, gewaehltkoerperberechnung;

    gewaehltkoerperberechnung = auswahl_koerperberechnung(auswahlkoerperberechnung);

    switch(gewaehltkoerperberechnung)
    {
        case 1:
            berechnung_kugel();
            break;

        case 2:
            berechnung_quader();
            break;

        case 3:
            berechnung_kegel();
            break;
    }
}

int auswahl_koerperberechnung(int auswahlkoerperberechnung)
{

    printf("\nBitte waehlen:\n");
    printf("1. Kugelberechnung \n2. Quaderberechnung \n3. Kegelberechung \n\n");
    scanf("%d", &auswahlkoerperberechnung);

    return auswahlkoerperberechnung;
}
