/************************************************************************************************
 *  Program: exercise23
 *  Function: Program that reads a NUM number and prints its first multiple NUMs.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_LOWERCASE_ACUTE_ACCENT 130
#define A_LOWERCASE_GRAVE_ACCENT 133
#define E_LOWERCASE_GRAVE_ACCENT 138

main()
{
    int number, multiple, i;

    printf("\n\t DATO UN NUMERO IN INPUT VISUALIZZA I SUOI PRIMI n MULTIPLI\n\t\t\tCON n UGUALE AL NUMERO INSERITO\n");

    printf("\n Inserisci un numero naturale: ");
    scanf("%d", &number);

    if (number == 0)
        printf("\n Lo 0 ha un solo multiplo, se stesso, perch%c ogni numero moltiplicato per 0 d%c 0.", E_LOWERCASE_ACUTE_ACCENT, A_LOWERCASE_GRAVE_ACCENT);
    else if (number == 1)
        printf("\n Dato il numero 1 il suo primo 1 multiplo %c: 2", E_LOWERCASE_GRAVE_ACCENT);
    else if (number > 1){
        printf("\n Dato il numero %d i suoi primi %d multipli sono:", number, number);
        for (i = 2; i <= number + 1; i++){
            multiple = number * i;
            printf(" %d ", multiple);
        }
    }

    printf("\n\n");
}
