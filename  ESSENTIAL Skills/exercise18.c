/************************************************************************************************
 *  Program: exercise18
 *  Function: Program that displays the first 20 integers.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define LOWER 0
#define UPPER 20

main()
{
    int number;

    printf("\n\t\t VISUALIZZA I PRIMI 20 NUMERI INTERI\n\n");

    for (number = LOWER; number < UPPER; number++)
        printf(" %d ", number);

    printf("\n\n");
}
