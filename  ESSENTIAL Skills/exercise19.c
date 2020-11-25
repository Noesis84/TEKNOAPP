/************************************************************************************************
 *  Program: exercise19
 *  Function: Program that adds the first 10 odd numbers.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_LOWERCASE_GRAVE_ACCENT 138
#define LOWER 1
#define UPPER 20
#define STEP 2

main()
{
    int oddNumber;
    int sumOdd = 0;

    printf("\n\t ADDIZIONA I PRIMI 10 NUMERI DISPARI\n");

    for (oddNumber = LOWER; oddNumber < UPPER; oddNumber = oddNumber + STEP)
        sumOdd += oddNumber;

    printf("\n La somma dei primi 10 numeri dispari %c %d", E_LOWERCASE_GRAVE_ACCENT, sumOdd);

    printf("\n\n");
}
