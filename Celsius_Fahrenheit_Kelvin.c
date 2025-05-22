/*
 * Program: Celsius_Fahrenheit_Kelvin.c
 * Author: Michael Guillory
 * Date: 5/21/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program converts a temperature in degrees
 * Celsius to Fahrenheit and Kelvin temperatures on separate
 * lines. 
*/

#include <stdio.h>
#define CONVERT_TO_FAHRENHEIT(c) ((c * 9.0 / 5.0) + 32)    // Celsius to Fahrenheit conversion
#define CONVERT_TO_KELVIN(c) (c + 273.15)                  // Celsius to Kelvin conversion

int main(void)
{
    // Declare variables
    int celsius;
    double fahrenheit;
    double kelvin;

    celsius = 0;

    // Prompt user for input
    printf("Please enter the temperature in Celsius: ");
    scanf("%d", &celsius);

    // Convert Celsius to Fahrenheit and Kelvin
    fahrenheit = CONVERT_TO_FAHRENHEIT(celsius);
    kelvin = CONVERT_TO_KELVIN(celsius);

    // Print the results
    printf("\nThe temperature in Fahrenheit is %.6f\n", fahrenheit);
    printf("\nThe temperature in Kelvin is %.6f\n", kelvin);

    // Return success
    return 0;
}