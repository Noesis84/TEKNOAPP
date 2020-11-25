/************************************************************************************************
 *  Program: exercise3
 *  Function: Program that reads a real number from the keyboard and calculates the reciprocal.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_LOWERCASE_GRAVE_ACCENT 138
const int NUMERATOR = 1;

main()
{
    float number;
    float reciprocal;

    printf("\n\t RECIPROCO DI UN NUMERO REALE DATO IN INPUT\n");

    printf("\n Inserisci un numero reale: ");
    scanf("%f", &number);

    reciprocal = NUMERATOR / number;

    printf("\n Dato il numero reale %.2f\n Il reciproco %c %.2f", number, E_LOWERCASE_GRAVE_ACCENT, reciprocal);

    printf("\n\n");
}
