/************************************************************************************************
 *  Program: exercise5
 *  Function: Program that receives as input a pair of integers x and y and decrements x by y%.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define PERCENT_SIGN 37
const float DENOMINATOR = 100;

main()
{
    int numberX, numberY;
    float decrease;

    printf("\n\t DATI 2 NUMERI INTERI x E y, DECREMENTI IL NUMERO x DEL y%c\n", PERCENT_SIGN);

    printf("\n Inserisci il numero intero x: ");
    scanf("%d", &numberX);
    printf(" Inserisci il numero intero y: ");
    scanf("%d", &numberY);

    decrease = numberX * (1 - (numberY / DENOMINATOR));

    printf("\n Dati i numeri interi x = %d e y = %d\n Il numero decremento vale %.2f", numberX, numberY, decrease);

    printf("\n\n");
}
