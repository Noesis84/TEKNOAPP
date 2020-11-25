/************************************************************************************************
 *  Program: exercise12
 *  Function: Program that reads two numbers and displays only the greater of them on the screen:
 *            if they are equal, it writes the sentence "the two numbers are equal”.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_LOWERCASE_GRAVE_ACCENT 138

main()
{
    int number1, number2;

    printf("\n\t DATI 2 NUMERI IN INPUT VISUALIZZA IL MAGGIORE O DICE CHE I NUMERI SONO UGUALI\n");

    printf("\n Inserisci il primo numero: ");
    scanf("%d", &number1);
    printf(" Inserisci il secondo numero: ");
    scanf("%d", &number2);

    if (number1 > number2)
        printf("\n Il numero maggiore %c il numero %d", E_LOWERCASE_GRAVE_ACCENT, number1);
    if (number1 < number2)
        printf("\n Il numero maggiore %c il numero %d", E_LOWERCASE_GRAVE_ACCENT, number2);
    if (number1 == number2)
        printf("\n I due numeri sono uguali");

    printf("\n\n");
}
