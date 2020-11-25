/************************************************************************************************
 *  Program: exercise13
 *  Function: Program that reads three numbers, displays them sorted and calculates the average
 *            value.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_LOWERCASE_GRAVE_ACCENT 138
const int NUMBER_OF_VALUES_ENTERED = 3;

main()
{
    int number1, number2, number3;
    int first, second, third, temp;
    float averageValue;

    printf("\n\t DATI 3 NUMURI IN INPUT LI VISUALIZZA ORDINATI E DETERMINA IL VALORE MEDIO\n");

    printf("\n Inserisci il primo numero: ");
    scanf("%d", &number1);
    printf(" Inserisci il secondo numero: ");
    scanf("%d", &number2);
    printf(" Inserisci il terzo numero: ");
    scanf("%d", &number3);

    first = number1;
    second = number3;
    third = number2;
    temp = number1;

    if (first > third){
        first = third;
        third = temp;
    }
    if (second > third){
        temp = second;
        second = third;
        third = temp;
    }
    if (second < first){
        temp = second;
        second = first;
        first = temp;
    }

    averageValue = (number1 + number2 + number3) / NUMBER_OF_VALUES_ENTERED;

    printf("\n I tre numeri ordinati sono %d %d %d", first, second, third);
    printf("\n Il loro valore medio %c %.2f", E_LOWERCASE_GRAVE_ACCENT, averageValue);

    printf("\n\n");
}
