/************************************************************************************************
 *  Program: exercise20
 *  Function: Program that adds up the first 10 multiples of 3.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_LOWERCASE_GRAVE_ACCENT 138
#define LOWER 0
#define UPPER 30
#define STEP 3

main()
{
    int multipleThree;
    int sumMultiplesThree = 0;

    printf("\n\t VISUALIZZA I PRIMI 10 MULTIPLI DI 3\n");

    for (multipleThree = LOWER; multipleThree < UPPER; multipleThree += STEP)
        sumMultiplesThree += multipleThree;

    printf("\n La somma dei primi 10 multipli di 3 %c %d ", E_LOWERCASE_GRAVE_ACCENT, sumMultiplesThree);

    printf("\n\n");
}
