/************************************************************************************************
 *  Program: exercise28
 *  Function: Program that finds the quotient and the remainder of an integer division by
 *            successive differences.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define E_LOWERCASE_ACUTE_ACCENT 138

main()
{
    int dividendInserted, divisorInsered, dividend, divisor, quotient, divisorForQuotient, remainder;

    printf("\n\t DIVISIONE INTERA PER DIFFERENZE SUCCESSIVE\n");

    printf("\n Inserisci il dividendo: ");
	scanf("%d", &dividendInserted);
    printf(" Inserisci il divisore: ");
	scanf("%d", &divisorInsered);

	dividend = dividendInserted;
	divisor = divisorInsered;



    if (divisor == 0 || (dividend == 0 && divisor == 0))
        printf("\n La divisione non %c definita.", E_LOWERCASE_ACUTE_ACCENT);
    else if (dividend == 0 && divisor != 0){
        quotient = 0;
        remainder = 0;
        printf("\n %d : %d = %d con resto %d", dividend, divisor, quotient, remainder);
    }
    else{
        if (dividendInserted < 0)
            dividend *= -1;
        if (divisorInsered < 0)
            divisor *= -1;

        while (dividend >= divisor){
            dividend = dividend - divisor;
            quotient = quotient + 1;
        }

        if (dividendInserted < 0)
            quotient *= -1;

        divisorForQuotient = quotient * divisor;
        remainder = dividendInserted - divisorForQuotient;

        if (divisorInsered < 0)
            quotient *= -1;

        printf("\n %d : %d = %d con resto %d", dividendInserted, divisorInsered, quotient, remainder);
        }

    printf("\n\n");
}
