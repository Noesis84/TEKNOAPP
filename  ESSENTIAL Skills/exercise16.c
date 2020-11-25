/************************************************************************************************
 *  Program: exercise16
 *  Function: Program that reads the temperature of a greenhouse and indicates the state of the
 *            greenhouse. In a greenhouse the temperature of 18° is considered normal, below 5°
 *            there is irreparable damage, between 5° and 18° there is a dangerous situation.
 ************************************************************************************************
 *  Author: Guido Marinelli
 ***********************************************************************************************/

#include <stdio.h>

#define DEGREE_SYMBOL 248
const float NORMAL_TEMPERATURE = 18;
const float MINIMUM_TEMPERATURE_FOR_DAMAGE = 5;

main()
{
    float temperature;

    printf("\n\t DATA UNA TEMPERATURA IN INPUT IN UNA SERRA NE INDICA LO STATO\n");

    printf("\n Inserisci il valore della temperatura in %cC: ", DEGREE_SYMBOL);
    scanf("%f", &temperature);

    if (temperature < MINIMUM_TEMPERATURE_FOR_DAMAGE)
        printf("\n Danni irreparabili");
    else if (temperature < NORMAL_TEMPERATURE)
        printf("\n Situazione di pericolo");
    else
        printf("\n Temperatura nella norma");

    printf("\n\n");
}
