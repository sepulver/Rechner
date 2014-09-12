#include"prozent_zins.h"

void berechnung_prozent_zins()
{
    int auswahlprozentzins, gewaehltprozentzins;

    gewaehltprozentzins = auswahl_prozent_zins(auswahlprozentzins);

    switch(gewaehltprozentzins)
    {
        case 1:
            berechnung_prozent();
            bildschirmloeschen();
            break;

       case 2:
            ausgabe_berechnung_zins();
            bildschirmloeschen();
            break;

        case 3:
            ausgabe_berechnung_zinseszins();
            bildschirmloeschen();
            break;
    }
}

int auswahl_prozent_zins(int auswahlprozentzins)
{
    printf("\nBitte waehlen: ");
    printf("\n1. Prozent \n2. Zins \n3. Zinseszins\n\n");
    scanf("%d", &auswahlprozentzins);

    return auswahlprozentzins;
}












void ausgabe_auswahl_jahreszins()
{
    int auswahljahreszins, gewaehltjareszins;

    gewaehltjareszins = auswahl_jahreszins(auswahljahreszins);

    switch(gewaehltjareszins)
    {
        case 1:
            ausgabe_zinsen_jahreszins();
            break;

        case 2:
            ausgabe_kapital_jahreszins();
            break;

        case 3:
            ausgabe_zinssatz_jahreszins();
            break;
    }
}

int auswahl_jahreszins(int auswahljahreszins)
{
    printf("\nBitte waehlen: \n");
    printf("1. Zinsen \n2. Kapital \n3. Zinssatz\n\n");
    scanf("%d", &auswahljahreszins);

    return auswahljahreszins;
}

double berechnung_zinsen_jahreszins(double kapital, double zinssatz, double jahre)
{
    double result;

    result = (kapital * zinssatz) / 100 * jahre;

    return result;
}

void ausgabe_zinsen_jahreszins()
{
    double kapital, zinssatz, jahre;

    kapital = einlesen_kapital(kapital);
    zinssatz = einlesen_zinssatz(zinssatz);
    jahre = einlesen_jahre(jahre);

    printf("\nDie Zinsen betragen: %.2lf", berechnung_zinsen_jahreszins(kapital, zinssatz, jahre));
}

double berechnung_kapital_jahreszins(double zinsen, double zinssatz, double jahre)
{
    double result;

    result = (zinsen * 100) / (zinssatz * jahre);

    return result;
}

void ausgabe_kapital_jahreszins()
{
    double zinsen, zinssatz, jahre;

    zinsen = einlesen_zinsen(zinsen);
    zinssatz = einlesen_zinssatz(zinssatz);
    jahre = einlesen_jahre(jahre);

    printf("\nDas Kapital betraegt: %.2lf", berechnung_kapital_jahreszins(zinsen, zinssatz, jahre));
}

double berechnung_zinssatz_jahreszins(double zinsen, double kapital, double jahre)
{
    double result;

    result = (zinsen * 100) / (kapital * jahre);

    return result;
}

void ausgabe_zinssatz_jahreszins()
{
    double zinsen, kapital, jahre;

    zinsen = einlesen_zinsen(zinsen);
    kapital = einlesen_kapital(kapital);
    jahre = einlesen_jahre(jahre);

    printf("\nDer Zinssatz betraegt: %.2lf %%", berechnung_zinssatz_jahreszins(zinsen, kapital, jahre));
}

void ausgabe_auswahl_monatszins()
{
    int auswahlmonatszins, gewaehltmonatszins;

    gewaehltmonatszins = auswahl_monatszins(auswahlmonatszins);

    switch(gewaehltmonatszins)
    {
        case 1:
            ausgabe_zinsen_monatszins();
            break;

        case 2:
            ausgabe_kapital_monatszins();
            break;

        case 3:
            ausgabe_zinssatz_monatszins();
            break;
    }
}

int auswahl_monatszins(int auswahlmonatszins)
{
    printf("\nBitte waehlen: \n");
    printf("1. Zinsen \n2. Kapital \n3. Zinssatz\n\n");
    scanf("%d", &auswahlmonatszins);

    return auswahlmonatszins;
}

double berechnung_zinsen_monatszins(double kapital, double zinssatz, double monate)
{
    double result;

    result = ((kapital * zinssatz) / 100) * monate / 12;

    return result;
}

void ausgabe_zinsen_monatszins()
{
    double kapital, zinssatz, monate;

    kapital = einlesen_kapital(kapital);
    zinssatz = einlesen_zinssatz(zinssatz);
    monate = einlesen_monate(monate);

    printf("\nDie Zinsen betragen: %.2lf", berechnung_zinsen_monatszins(kapital, zinssatz, monate));
}

double berechnung_kapital_monatszins(double zinsen, double zinssatz, double monate)
{
    double result;

    result = (zinsen * 100) / (zinssatz * (monate / 12));

    return result;
}

void ausgabe_kapital_monatszins()
{
    double zinsen, zinssatz, monate;

    zinsen = einlesen_zinsen(zinsen);
    zinssatz = einlesen_zinssatz(zinssatz);
    monate = einlesen_monate(monate);

    printf("\nDas Kapital betraegt: %.2lf", berechnung_kapital_monatszins(zinsen, zinssatz, monate));
}

double berechnung_zinssatz_monatszins(double zinsen, double kapital, double monate)
{
    double result;

    result = (zinsen * 100) / (kapital * (monate / 12));

    return result;
}

void ausgabe_zinssatz_monatszins()
{
    double zinsen, kapital, monate;

    zinsen = einlesen_zinsen(zinsen);
    kapital = einlesen_kapital(kapital);
    monate = einlesen_monate(monate);

    printf("\nDer Zinssatz betraegt: %.2lf %%", berechnung_zinssatz_monatszins(zinsen, kapital, monate));
}

void ausgabe_auswahl_tageszins()
{
    int auswahlttageszins, gewaehlttageszins;

    gewaehlttageszins = auswahl_tageszins(auswahlttageszins);

    switch(gewaehlttageszins)
    {
        case 1:
            ausgabe_zinsen_tageszins();
            break;

        case 2:
            ausgabe_kapital_tageszins();
            break;

        case 3:
            ausgabe_zinssatz_tageszins();
            break;
    }
}

int auswahl_tageszins(int auswahltageszins)
{
    printf("\nBitte waehlen: \n");
    printf("1. Zinsen \n2. Kapital \n3. Zinssatz\n\n");
    scanf("%d", &auswahltageszins);

    return auswahltageszins;
}

double berechnung_zinsen_tageszins(double kapital, double zinssatz, double tage)
{
    double result;

    result = (kapital * zinssatz) / 100 * (tage / 360);

    return result;
}

void ausgabe_zinsen_tageszins()
{
    double kapital, zinssatz, tage;

    kapital = einlesen_kapital(kapital);
    zinssatz = einlesen_zinssatz(zinssatz);
    tage = einlesen_tage(tage);

    printf("\nDie Zinsen betragen: %.2lf", berechnung_zinsen_tageszins(kapital, zinssatz, tage));
}

double berechnung_kapital_tageszins(double zinsen, double zinssatz, double tage)
{
    double result;

    result = (zinsen * 100) / (zinssatz * (tage / 360));

    return result;
}

void ausgabe_kapital_tageszins()
{
    double zinsen, zinssatz, tage;

    zinsen = einlesen_zinsen(zinsen);
    zinssatz = einlesen_zinssatz(zinssatz);
    tage = einlesen_tage(tage);

    printf("\nDas Kapital betraegt: %.2lf", berechnung_kapital_tageszins(zinsen, zinssatz, tage));
}

double berechnung_zinssatz_tageszins(double zinsen, double kapital, double tage)
{
    double result;

    result = (zinsen * 100) / (kapital * (tage / 360));

    return result;
}

void ausgabe_zinssatz_tageszins()
{
    double zinsen, kapital, tage;

    zinsen = einlesen_zinsen(zinsen);
    kapital = einlesen_kapital(kapital);
    tage = einlesen_tage(tage);

    printf("\nDer Zinssatz betraegt: %.2lf %%", berechnung_zinssatz_tageszins(zinsen, kapital, tage));
}

void ausgabe_berechnung_zinseszins()
{
    int auswahlzinseszins, gewaehltzinseszins;

    gewaehltzinseszins = auswahl_zinseszins(auswahlzinseszins);

    switch(gewaehltzinseszins)
    {
        case 1:
            ausgabe_endkapital_zinseszins();
            break;

        case 2:
            ausgabe_startkapital_zinseszins();
            break;

        case 3:
            ausgabe_zinssatz_zinseszins();
            break;

        case 4:
            ausgabe_jahre_zinseszins();
            break;
    }
}

int auswahl_zinseszins(int auswahlzinseszins)
{
    printf("\nBitte waehlen: \n");
    printf("1. Endkapital \n2. Startkapital \n3. Zinssatz \n4. Jahre  \n\n");
    scanf("%d", &auswahlzinseszins);

    return auswahlzinseszins;
}

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

double berechnung_endkaptial_zinseszins(double startkapital, double zinssatz, double jahre)
{
    double result;

    result = startkapital * pow(1 + (zinssatz / 100), jahre);

    return result;
}

void ausgabe_endkapital_zinseszins()
{
    double startkapital, zinssatz, jahre;

    startkapital = einlesen_startkapital_zinseszins(startkapital);
    zinssatz = einlesen_zinssatz_zinseszins(zinssatz);
    jahre = einlesen_jahre_zinseszins(jahre);

    printf("\nDas Endkapital betraegt: %.2lf", berechnung_endkaptial_zinseszins(startkapital, zinssatz, jahre));
}

double berechnung_startkaptial_zinseszins(double endkapital, double zinssatz, double jahre)
{
    double result;

    result = endkapital / pow(1 + (zinssatz / 100), jahre);

    return result;
}

void ausgabe_startkapital_zinseszins()
{
    double endkapital, zinssatz, jahre;

    endkapital = einlesen_endkapital_zinseszins(endkapital);
    zinssatz = einlesen_zinssatz_zinseszins(zinssatz);
    jahre = einlesen_jahre_zinseszins(jahre);

    printf("\nDas Startkapital betraegt: %.2lf", berechnung_startkaptial_zinseszins(endkapital, zinssatz, jahre));
}

double berechnung_zinssatz_zinseszins(double endkapital, double startkapital, double jahre)
{
    double result;

    result = 100 * (pow((endkapital / startkapital), (1 / jahre)) - 1);

    return result;
}

void ausgabe_zinssatz_zinseszins()
{
    double endkapital, startkapital, jahre;

    endkapital = einlesen_endkapital_zinseszins(endkapital);
    startkapital = einlesen_startkapital_zinseszins(startkapital);
    jahre = einlesen_jahre_zinseszins(jahre);

    printf("\nDer Zinssatz betraegt: %.2lf %%", berechnung_zinssatz_zinseszins(endkapital, startkapital, jahre));
}

double berechnung_zaehler_jahre_zinseszins(double endkapital, double startkapital)
{
    double result;

    result = log10(endkapital / startkapital);

    return result;
}

double berechnung_nenner_jahre_zinseszins(double zinssatz)
{
    double result;

    result = log10(1 + zinssatz/ 100);

    return result;
}

double berechnung_ergebnis_jahre_zinseszins(double endkapital, double startkapital, double zinssatz)
{
    double result;

    result = berechnung_zaehler_jahre_zinseszins(endkapital, startkapital) / berechnung_nenner_jahre_zinseszins(zinssatz);

    return result;
}

void ausgabe_jahre_zinseszins()
{
    double endkapital, startkapital, zinssatz;

    endkapital = einlesen_endkapital_zinseszins(endkapital);
    startkapital = einlesen_startkapital_zinseszins(startkapital);
    zinssatz = einlesen_zinssatz_zinseszins(zinssatz);

    printf("\nDie Zeit betraegt: %.2lf Jahre", berechnung_ergebnis_jahre_zinseszins(endkapital, startkapital, zinssatz));
}
