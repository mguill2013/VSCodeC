/*
 * Program: temperature_conversion_table.c
 * Author: Michael Guillory
 * Date: 5/29/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: The following program prints a Celsius-Fahrenheit
     table for temperatures from 0 to 300 degrees Fahrenheit
     in steps of 20 degrees. The formula used to convert
     Fahrenheit to Celsius is:
     Celsius = 5 * (Fahrenheit - 32) / 9
*/

#include <stdio.h>

#define LOWER 0		/* lower limit of table */
#define UPPER 300	/* upper limit */
#define STEP  20	/* step size */

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
	int fahr;
	
	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

return 0;
}