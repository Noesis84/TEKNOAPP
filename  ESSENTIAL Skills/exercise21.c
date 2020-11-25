/************************************************************************************************
 *  Program: exercise21
 *  Function: Program that reads n numbers from the keyboard and determines the smallest.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define U_CAPITAL_GRAVE_ACCENT 235
#define U_LOWERCASE_GRAVE_ACCENT 151
#define E_LOWERCASE_GRAVE_ACCENT 138
const int NUMBER_NEEDED_TO_START_THE_PROGRAM = 1;

main()
{
    int i, numberToCompare, numberForComparison, smaller;

    printf("\n\t DATI IN INPUT n NUMERI NE DETERMINA IL PI%c PICCOLO\n", U_CAPITAL_GRAVE_ACCENT);

    printf("\n Inserisci quanti numeri vuoi confrontare: ");
    scanf("%d", &numberToCompare);

    if (numberToCompare < NUMBER_NEEDED_TO_START_THE_PROGRAM)
        printf("\n Hai deciso di non eseguire il programma.");
    else{
        printf("\n Inserisci il primo numero da confrontare: ");
        scanf("%d", &smaller);

        for (i = 0; i < numberToCompare - 1; i++){
            printf(" Inserisci il successivo numero da confrontare: ");
            scanf("%d", &numberForComparison);

            if (smaller > numberForComparison)
                smaller = numberForComparison;
        }
        printf("\n Il numero pi%c piccolo inserito %c %d", U_LOWERCASE_GRAVE_ACCENT, E_LOWERCASE_GRAVE_ACCENT, smaller);
    }

    printf("\n\n");
}
