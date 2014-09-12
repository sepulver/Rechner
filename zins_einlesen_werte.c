#include"zins_einlesen_werte.h"

double einlesen_zinsen(double zinsen)
{
    printf("\nZinsen --> ");
    scanf("%lf", &zinsen);

    return zinsen;
}

double einlesen_kapital(double kapital)
{
    printf("\nKapital --> ");
    scanf("%lf", &kapital);

    return kapital;
}

double einlesen_zinssatz(double zinssatz)
{
    printf("\nZinssatz (in %%) --> ");
    scanf("%lf", &zinssatz);

    return zinssatz;
}

double einlesen_jahre(double jahre)
{
    printf("\nJahre --> ");
    scanf("%lf", &jahre);

    return jahre;
}

double einlesen_monate(double monate)
{
    printf("\nMonate --> ");
    scanf("%lf", &monate);

    return monate;
}

double einlesen_tage(double tage)
{
    printf("\nTage --> ");
    scanf("%lf", &tage);

    return tage;
}
