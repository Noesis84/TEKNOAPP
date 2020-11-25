/************************************************************************************************
 *  Program: exercise2
 *  Function: Program that receives an integer x and increments x by 5% twice.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define PERCENT_SIGN 37
const float INCREASE = 1.05;

main()
{
    int number;
    float incrementedNumber;

    printf("\n\t INCREMENTA 2 VOLTE DEL 5%c UN NUMERO INTERO DATO IN INPUT\n", PERCENT_SIGN);

    printf("\n Inserisci un numero intero: ");
    scanf("%d", &number);

    incrementedNumber = number * INCREASE;
    incrementedNumber *= INCREASE;

    printf("\n Dato il numero intero %d\n Il numero incrementato vale %.2f", number, incrementedNumber);

    printf("\n\n");
}
