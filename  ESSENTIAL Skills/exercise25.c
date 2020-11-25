/************************************************************************************************
 *  Program: exercise25
 *  Function: Program that reads a sequence of integers ending with a 0 and communicates their
 *            sum.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_CAPITAL_ACUTE_ACCENT 144
#define E_LOWERCASE_GRAVE_ACCENT 138
const int DIVISIBILITY_CRITERION = 10;

main()
{
    int number = 0, sum = 0;

    printf("\n\t RESTITUISCI UNA SOMMA FINCH%c SI INSERISCO NUMERI INTERI TERMINANTI CON ZERO\n\n", E_CAPITAL_ACUTE_ACCENT);

    while (number % DIVISIBILITY_CRITERION == 0){
        sum += number;
        printf(" Inserisci un numero divisibile per 10 : ");
        scanf("%d", &number);
    }

    printf("\n La somma dei numeri inseriti %c %d", E_LOWERCASE_GRAVE_ACCENT, sum);

    printf("\n\n");
}
