/************************************************************************************************
 *  Program: exercise10
 *  Function: Program that reads three numbers and indicates if equal numbers have been entered.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

main()
{
    float number1, number2, number3;

    printf("\n\t DATI 3 NUMERI IN INPUT INDICA SE SONO STATI INTRODOTI NUMERI UGUALI\n");

    printf("\n Inserisci il primo numero: ");
    scanf("%f", &number1);
    printf(" Inserisci il secondo numero: ");
    scanf("%f", &number2);
    printf(" Inserisci il terzo numero: ");
    scanf("%f", &number3);

    if ((number1 == number2) || (number1 == number3) || (number2 == number3))
        printf("\n Sono stati introdotti numeri uguali");

    printf("\n\n");
}
