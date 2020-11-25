/************************************************************************************************
 *  Program: exercise7
 *  Function: Program that reads five data and calculates the average.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

const int NUMBER_OF_VALUES_ENTERED = 5;

main()
{
    float number1, number2, number3, number4, number5;
    float average;

    printf("\n\t DATI IN INPUT 5 NUMERI CALCOLA LA MEDIA\n");

    printf("\n Inserisci il primo numero: ");
    scanf("%f", &number1);
    printf(" Inserisci il secondo numero: ");
    scanf("%f", &number2);
    printf(" Inserisci il terzo numero: ");
    scanf("%f", &number3);
    printf(" Inserisci il quarto numero: ");
    scanf("%f", &number4);
    printf(" Inserisci il quinto numero: ");
    scanf("%f", &number5);

    average = (number1 + number2 + number3 + number4 + number5) / NUMBER_OF_VALUES_ENTERED;

    printf("\n Dati i numeri %.1f, %.1f, %.1f, %.1f, %.1f\n La media aritmetica vale %.1f",
           number1, number2, number3, number4, number5, average);

    printf("\n\n");
}
