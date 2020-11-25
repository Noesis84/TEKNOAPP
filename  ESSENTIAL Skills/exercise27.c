/************************************************************************************************
 *  Program: exercise27
 *  Function: Program that reads a NUM number of numbers and determines the largest value and
 *            how many times it occurs.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_LOWERCASE_GRAVE_ACCENT 138

main()
{
    int numbersToEnter, number, greater;
    int i, count = 0;

    printf("\n\t DATI IN INPUT NUM NUMERI  DETERMINA IL MAGGIORE E QUANTE VOLTE ESSO RICORRE\n");

    printf("\n Inserisci il numero di numeri per il confronto: ");
    scanf("%d", &numbersToEnter);

    if (numbersToEnter > 0){
        printf("\n Inserisci un numero: ");
        scanf("%d", &number);

        greater = number;

        while (i < numbersToEnter -1){
            printf(" Inserisci un numero: ");
            scanf("%d", &number);

            if (number == greater)
                count++;
            if (greater < number)
                greater = number;

            i++;
        }

        printf("\n Il maggiore %c %d", E_LOWERCASE_GRAVE_ACCENT, greater);
        printf("\n Il maggiore ricorre %d", count);
    }

    printf("\n\n");
}
