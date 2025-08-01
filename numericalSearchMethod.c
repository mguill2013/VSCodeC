/*
 * Program: numericalSearchMethod.c
 * Author: Michael Guillory
 * Date: 7/31/2023
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This is a simple program that demonstrates how to find a root of a function
 * using a numerical search method. It prints the values of the function at specified intervals
 * and identifies where a sign change occurs, indicating the presence of a root.
 * The function used in this example is f(x) = x^2 - 4,
 * which has roots at x = -2 and x = 2.
 * The program can be modified to search for roots of other functions by changing the definition of f(x).
*/

#include <stdio.h>

// The function we want to find the root of
double f(double x) { // Example function: f(x) = x^2 - 4
    return x * x - 4.0; // This function has roots at x = -2 and x = 2
}

int main() {
    double x_start = 0.0; // Starting point
    double x_end = 3.0; // Ending point
    double interval = 1.0; // Interval size

    printf("X\t\tf(x)\n");
    printf("---------------\n");
    
    // Loop through the range with the specified interval
    for (double x = x_start; x <= x_end; x += interval) { // This will print values from 0 to 3 with an interval of 1
        printf("%lf\t%lf\n", x, f(x)); // This will print the value of x and f(x)
    }

    printf("\nBased on the output:\n");
    printf("A sign change occurs between x = 1.0 and x = 3.0, so a root is in that range.\n");
    printf("We can now 'zoom in' by using a smaller interval.\n");
}