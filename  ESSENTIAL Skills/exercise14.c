/************************************************************************************************
 *  Program: exercise14
 *  Function: Program that reads the value of a side and calculates the area and perimeter of a
 *            square only if this number is different from 0.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>
#include <math.h>

#define E_LOWERCASE_GRAVE_ACCENT 138
#define NUMBER_SQUARE_SIDES 4
const int NECESSARY_CONDITION = 0;
const int EXPONENT = 2;

main()
{
    float side;
    float area, perimeter;

    printf("\n\t DATO IN INPUT IL VALORE DI UN LATO DI UN QUADRATO CALCOLA L'AREA E IL PERIMETRO\n");

    printf("\n Inserisci il valore del lato: ");
    scanf("%f", &side);

    if (side > NECESSARY_CONDITION){
        area = pow(side, EXPONENT);
        perimeter = side * NUMBER_SQUARE_SIDES;

        printf("\n Dato il lato %.1f\n L'area del quadrato %c %.1f\n Il perimetro %c %.1f",
               side, E_LOWERCASE_GRAVE_ACCENT, area, E_LOWERCASE_GRAVE_ACCENT, perimeter);
    }

    printf("\n\n");
}
