#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300; floating-point version */
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;    // lower limit of temperature table
    upper = 300;  // upper limit
    step = 20;   // step size

    printf("Fahrenheit\tCelsius\n");    // Print the heading
    printf("---------\t-------\n");    // Print the separator

    fahr = lower;    // Initialize fahr variable to the lower limit
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
return 0;    // Return 0 to indicate successful
}

/* 
    The program prints a Fahrenheit-Celsius table for temperatures from 0 to 300 degrees Fahrenheit in steps of 20 degrees.
    The formula used to convert Fahrenheit to Celsius is:
    Celsius = 5 * (Fahrenheit - 32) / 9
*/