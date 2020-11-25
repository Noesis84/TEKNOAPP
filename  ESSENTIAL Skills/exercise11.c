/************************************************************************************************
 *  Program: exercise11
 *  Function: Program that reads four numbers from the keyboard and finds the minor and major.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_LOWERCASE_GRAVE_ACCENT 138

main()
{
    int number1, number2, number3, number4;
    int major, minor;

    printf("\n\t DATI IN INPUT 4 NUMERI TROVA IL MINORE E IL MAGGIORE\n");

    printf("\n Inserisci il primo numero: ");
    scanf("%d", &number1);
    printf(" Inserisci il secondo numero: ");
    scanf("%d", &number2);
    printf(" Inserisci il terzo numero: ");
    scanf("%d", &number3);
    printf(" Inserisci il quarto numero: ");
    scanf("%d", &number4);

    if ((number1 < number2) && (number1 < number3) && (number1 < number4))
        minor = number1;
    if ((number2 < number1) && (number2 < number3) && (number2 < number4))
        minor = number2;
    if ((number3 < number1) && (number3 < number2) && (number3 < number4))
        minor = number3;
    if ((number4 < number1) && (number4 < number2) && (number4 < number3))
        minor = number4;

    if ((number1 > number2) && (number1 > number3) && (number1 > number4))
        major = number1;
    if ((number2 > number1) && (number2 > number3) && (number2 > number4))
        major = number2;
    if ((number3 > number1) && (number3 > number2) && (number3 > number4))
        major = number3;
    if ((number4 > number1) && (number4 > number2) && (number4 > number3))
        major = number4;

    printf("\n Dati i numeri %d, %d, %d, %d\n Il numero minore %c %d\n Il numero maggiore %c %d",
           number1, number2, number3, number4, E_LOWERCASE_GRAVE_ACCENT, minor, E_LOWERCASE_GRAVE_ACCENT, major);

    printf("\n\n");
}
