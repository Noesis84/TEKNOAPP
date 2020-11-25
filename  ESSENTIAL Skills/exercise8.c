/************************************************************************************************
 *  Program: exercise8
 *  Function: Program that reads an integer indicating the minutes elapsed after midnight and
 *            transforms it into hours and minutes.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define MINUTES_IN_AN_HOUR 60

main()
{
    int minutesToDivide;
    int hours, minutes;

    printf("\n\t DATO IN INPUT UN NUMERO INTERO CHE INDICA I MINUTI PASSATI DOPO LA MEZZANOTTE\n\t\t\t\t TRASFORMA IN ORE E MINUTI\n");

    printf("\n Inserisci il numero di minuti passati la mezzanotte: ");
    scanf("%d", &minutesToDivide);

    hours = minutesToDivide / MINUTES_IN_AN_HOUR;
    minutes = minutesToDivide % MINUTES_IN_AN_HOUR;

    printf("\n Dati %d minuti abbiamo %d ore e %d minuti", minutesToDivide, hours, minutes);

    printf("\n\n");
}
