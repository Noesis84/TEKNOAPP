/************************************************************************************************
 *  Program: exercise17
 *  Function: Program that simulates a supermarket that applies a discount based on the total
 *            amount of the shopping.
 *
 *		            Spending amount < 50 €		        0% discount
 *          		50 € < Spending amount < 80 €		5% discount
 *          		Over 80 €			               10% discount
 *
 *            The program reads the total price of the expense and displays the discount amount
 *            and the net amount to be paid in OUTPUT.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define DOLLAR_SYMBOL 36
#define E_LOWERCASE_GRAVE_ACCENT 138
const float FOR_FIRST_LEVEL_DISCOUNT = 50;
const float FOR_SECOND_LEVEL_DISCOUNT = 80;
const float FIRST_LEVEL_DISCOUNT = 0.05;
const float SECOND_LEVL_DISCOUNT = 0.10;

main()
{
    float grossAmount = 0, amountOfTheDiscount= 0, netAmount = 0;

    printf("\n\t IN BASE AL TOTALE DELLA SPESA IN UN SUPERMERCATO, DATO IN INPUT, EFFETTUA LO SCONTO\n");

    printf("\n Inserisci l'importo lordo della spesa in %c: ", DOLLAR_SYMBOL);
    scanf("%f", &grossAmount);

    if (grossAmount > FOR_SECOND_LEVEL_DISCOUNT)
        amountOfTheDiscount = grossAmount * SECOND_LEVL_DISCOUNT;
    else if (grossAmount >= FOR_FIRST_LEVEL_DISCOUNT)
        amountOfTheDiscount = grossAmount * FIRST_LEVEL_DISCOUNT;
    else
        amountOfTheDiscount = amountOfTheDiscount;

    netAmount = grossAmount - amountOfTheDiscount;

    printf("\n L'importo dello sconto %c di %.2f %c", E_LOWERCASE_GRAVE_ACCENT, amountOfTheDiscount, DOLLAR_SYMBOL);
    printf("\n L'importo netto che deve essere pagato %c di %.2f %c", E_LOWERCASE_GRAVE_ACCENT, netAmount, DOLLAR_SYMBOL);

    printf("\n\n");
}
