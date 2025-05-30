/*
 * Program: pythagorast.c
 * Author: Michael Guillory
 * Date: 5/29/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: The following program asks user input for
    two sides of a right-angled triangle. It
    then computes the base and prints it to
    the monitor. It uses a 'sqrt' from the 
    standard library, so the user does not
    have to find a way to do square root.
*/

#include <math.h>
#include <stdio.h>

int main()
{
    
    float side1, side2, base, temp;
    char choice;        // variable to store user choice

    // Start a do-while loop to allow multiple calculations
    do
    {
        // Prompt user for 1st input
        printf("Enter side 1: ");
        scanf("%f", &side1);

        // Prompt user for 2nd input
        printf("Enter side 2: ");
        scanf("%f", &side2);

        temp = (side1 * side1) + (side2 * side2);       // calculate the square of the hypotenuse 
        base = sqrt(temp);                              // calculate the hypotenuse using square root

        // Print the result
        printf("The base length is: %.2f\n", base);

        // --- Ask user to continue or exit ---
        // Important: Clear the input buffer before asking for character input
        // This consumes any leftover newline character from previous scanf calls
        int c;
        while ((c = getchar()) != '\n' && c != EOF);    // Clear the input buffer

        printf("\nCalculate another triangle? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');           // Continue if user enters 'Y' or 'y'
    
    printf("\nThank you for using and testing this calculator!\n");
    
    return 0; // exit the program
}
