#include"quader_berechnung_oberflaeche.h"

double berechnung_oberflaeche_quader(double laenge, double breite, double hoehe)
{
    double Result = 2 * laenge * breite + 2 * laenge * hoehe + 2 * breite * hoehe;
    return Result;
}
