/************************************************************************************************
 *  Program: exercise24
 *  Function: Program that displays the first NUM even numbers or the first NUM odd numbers,
 *            after reading NUM from INPUT and asking the user which sequence to display.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define FIRST_EVEN_NUMBER 0
#define FIRST_ODD_NUMBER 1
#define STEP 2

main()
{
    int number, evenNumber, oddNumber;
    char selection;

    printf("\n\t DATO UN NUMERO IN INPUT VISUALIZZA I PRIMI NUMERI PARI O I PRIMI NUMERI DISPARI\n\t\t A SECONDA DELLA SCELTA DELL'UTENTE\n");

    printf("\n Inserisci un numero che sia maggiore o uguale a 0: ");
    scanf("%d", &number);

    if (number >= 0){
        printf("\n Digita 'p' per visualizzare i suoi primi numeri pari, digita 'd' per i primi numeri dispari: ");
        selection = getch();

        printf("\n\n");

        if (selection == 'p'){
            for (evenNumber = FIRST_EVEN_NUMBER; evenNumber <= number; evenNumber += STEP)
                printf(" %d ", evenNumber);
        }
        else if (selection == 'd'){
            for (oddNumber = FIRST_ODD_NUMBER; oddNumber <= number; oddNumber += STEP)
            printf(" %d ", oddNumber);
        }
    }

    printf("\n\n");
}
