/************************************************************************************************
 *  Program: exercise26
 *  Function: Program that reads a sequence of integers ending with a 0 and communicates which
 *            is the smallest number, which is the largest and the average value of the numbers
 *            read.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define U_CAPITAL_GRAVE_ACCENT 235
#define U_LOWERCASE_GRAVE_ACCENT 151
#define E_LOWERCASE_GRAVE_ACCENT 138
const int DIVISIBILITY_CRITERION = 10;

main()
{
    int number, smaller, bigger, sum = 0;
    float numberEntered = 0, averageValue = 0;

    printf("\n\t DATA UNA SEQUENZA IN INPUT DI NUMERI INTERI TERMINANTI CON ZERO\n\t    COMUNICA IL PI%c PICCOLO, IL PI%c GRANDE E IL VALORE MEDIO\n",
            U_CAPITAL_GRAVE_ACCENT, U_CAPITAL_GRAVE_ACCENT);

    printf("\n Inserisci un numero divisibile per 10 : ");
    scanf("%d", &number);

    if (number % DIVISIBILITY_CRITERION == 0){
        smaller = number;
        bigger = number;

        while (number % DIVISIBILITY_CRITERION == 0){
            sum += number;
            numberEntered += 1;
            averageValue = sum / numberEntered;

            if (smaller > number)
                smaller = number;
            if (bigger < number)
                bigger = number;

            printf(" Inserisci un numero divisibile per 10 : ");
            scanf("%d", &number);
        }

        printf("\n Il numero pi%c piccolo inserito %c %d", U_LOWERCASE_GRAVE_ACCENT, E_LOWERCASE_GRAVE_ACCENT, smaller);
        printf("\n Il numero pi%c grande inserito %c %d", U_LOWERCASE_GRAVE_ACCENT, E_LOWERCASE_GRAVE_ACCENT, bigger);
        printf("\n Il valore medio dei numeri inseriti %c %.1f", E_LOWERCASE_GRAVE_ACCENT, averageValue);
    }

    printf("\n\n");
}
