/************************************************************************************************
 *  Program: exercise4
 *  Function: Program that receives as input a pair of integers x and y and increments x by y%.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define PERCENT_SIGN 37
const float DENOMINATOR = 100;

main()
{
    int numberX, numberY;
    float increase;

    printf("\n\t DATI 2 NUMERI INTERI x E y, INCREMENTA IL NUMERO x DEL y%c\n", PERCENT_SIGN);

    printf("\n Inserisci il numero intero x: ");
    scanf("%d", &numberX);
    printf(" Inserisci il numero intero y: ");
    scanf("%d", &numberY);

    increase = numberX * (1 + (numberY / DENOMINATOR));

    printf("\n Dati i numeri interi x = %d e y = %d\n Il numero incrementato vale %.2f", numberX, numberY, increase);

    printf("\n\n");
}
