/************************************************************************************************
 *  Program: exercise15
 *  Function: Program that simulates a supermarket that applies a 20% discount on the amount
 *            exceeding € 200: the program, by reading the total amount of the shopping,
 *            calculates any discounted amount.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define DOLLAR_SYMBOL 36
#define E_LOWERCASE_GRAVE_ACCENT 138
const float FOR_DISCOUNT = 200;
const float DISCOUNT = 0.20;

main()
{
    float amount;
    float discountedAmount = 0;

    printf("\n\t DATO L'IMPORTO IN INPUT DI UNA SPESA CALCOLA L'EVENTUALE SCONTO\n");

    printf("\n Inserisci l'importo della spesa in %c: ", DOLLAR_SYMBOL);
    scanf("\%f", &amount);

    if (amount > FOR_DISCOUNT){
        discountedAmount = amount * DISCOUNT;
    }

    printf("\n L'importo scontato %c di %.2f %c", E_LOWERCASE_GRAVE_ACCENT, discountedAmount, DOLLAR_SYMBOL);

    printf("\n\n");
}
