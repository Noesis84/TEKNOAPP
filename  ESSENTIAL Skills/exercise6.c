/************************************************************************************************
 *  Program: exercise6
 *  Function: Program that reads the data needed to calculate the area and perimeter of a
 *            trapezoidal rectangle.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>
#include <math.h>

const int DENOMINATOR = 2;
const int EXPONENT = 2;

main()
{
    float majorBase, minorBase, height;
    float obliqueSide, area, perimeter;

    printf("\n\t DATI IN INPUT LA BASE MAGGIORE, LA BASE MINORE E L'ALTEZZA\n\t  CALCOLA L'AREA E IL PERIMETRO DI UN TRAPEZIO RETTANGOLO\n");

    printf("\n Inserisci il valore della base maggiore: ");
    scanf("%f", &majorBase);
    printf(" Inserisci il valore della base minore: ");
    scanf("%f", &minorBase);
    printf(" Inserisci il valore dell'altezza: ");
    scanf("%f", &height);

    area = ((minorBase + majorBase) * height) / DENOMINATOR;
    obliqueSide = sqrt(pow(height, EXPONENT) + pow((majorBase - minorBase), EXPONENT));
    perimeter = minorBase + majorBase + height + obliqueSide;

    printf("\n Dato il trapezio rettangolo di base maggiore = %.1f, base minore = %.1f e altezza = %.1f\n L'area vale %.1f e il perimetro vale %.1f",
           majorBase, minorBase, height, area, perimeter);

    printf("\n\n");
}
