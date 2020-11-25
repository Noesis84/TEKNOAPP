/************************************************************************************************
 *  Program: exercise9
 *  Function: Program that reads a person's age value and determines if he is a minor.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define A_CAPITAL_GRAVE_ACCENT 183
#define E_CAPITAL_GRAVE_ACCENT 212
#define A_LOWERCASE_GRAVE_ACCENT 133
#define E_LOWERCASE_GRAVE_ACCENT 138
const int VALUE_TO_BE_OF_AGE = 18;

main()
{
    int years;

    printf("\n\t DATA UNA ET%c IN INPUT DETERMINA SE LA PERSONA %c MINORENNE\n", A_CAPITAL_GRAVE_ACCENT, E_CAPITAL_GRAVE_ACCENT);

    printf("\n Inserisci l'et%c della persona: ", A_LOWERCASE_GRAVE_ACCENT);
    scanf("%d", &years);

    if (years < VALUE_TO_BE_OF_AGE)
        printf("\n La persona %c minorenne", E_LOWERCASE_GRAVE_ACCENT);

    printf("\n\n");
}
