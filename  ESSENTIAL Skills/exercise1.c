/************************************************************************************************
 *  Program: exercise1
 *  Function: Program that reads an integer and calculates the successor and predecessor.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

const int VALUE_FOR_NEXT_NUMBER = +1;
const int VALUE_FOR_PREVIOUS_NUMBER = -1;

main()
{
    int number;
    int successor, predecessor;

    printf("\n\t CALCOLO SUCCESSORE E PREDECESSORE DI UN NUMERO INTERO DATO IN INPUT\n");

    printf("\n Inserisci un numero intero: ");
    scanf("%d", &number);

    successor = number + VALUE_FOR_NEXT_NUMBER;
    predecessor = number + VALUE_FOR_PREVIOUS_NUMBER;

    printf("\n Dato il numero %d\n Il successore vale %d\n Il predecessore vale %d", number, successor, predecessor);

    printf("\n\n");
}
