/************************************************************************************************
 *  Program: exercise22
 *  Function: Program that reads a number from the keyboard and determines all its divisors.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_LOWERCASE_ACUTE_ACCENT 130
#define E_LOWERCASE_GRAVE_ACCENT 138
#define DIVISOR_OF_ALL_NUMBERS 1

main()
{
    int number, divisor;

    printf("\n\t   DATO UN NUMERO INTERO IN INPUT NE DETERMINA TUTTI I DIVISORI\n");

    printf("\n Inserisci un numero: ");
    scanf("%d", &number);

    if (number == 0)
        printf("\n Lo 0 ha infiniti divisori perch%c zero %c diviso esattamente da ogni altro numero.", E_LOWERCASE_ACUTE_ACCENT, E_LOWERCASE_GRAVE_ACCENT);
    else if (number == 1)
        printf("\n Il numero 1 nell'insieme dei suoi divisori ha un solo singolo elemento, s%c stesso.", E_LOWERCASE_ACUTE_ACCENT);
    else{
        printf("\n I divisori di %d sono:", number);

        for (divisor = number; divisor >= DIVISOR_OF_ALL_NUMBERS; divisor--){
            if (number % divisor == 0)
                printf(" %d ", divisor);
        }
    }

    printf("\n\n");
}
