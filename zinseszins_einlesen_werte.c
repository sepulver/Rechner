#include"zinseszins_einlesen_werte.h"

double einlesen_endkapital_zinseszins(double endkapital)
{
    printf("\nEndkapital --> ");
    scanf("%lf", &endkapital);

    return endkapital;
}

double einlesen_startkapital_zinseszins(double startkapital)
{
    printf("\nStartkapital --> ");
    scanf("%lf", &startkapital);

    return startkapital;
}

double einlesen_zinssatz_zinseszins(double zinssatz)
{
    printf("\nZinssatz (in %%) --> ");
    scanf("%lf", &zinssatz);

    return zinssatz;
}

double einlesen_jahre_zinseszins(double jahre)
{
    printf("\nJahre (in Jahren) --> ");
    scanf("%lf", &jahre);

    return jahre;
}

