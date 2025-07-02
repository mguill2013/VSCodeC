/*
 * Program: evenOrOdd.c
 * Author: Michael Guillory
 * Date: 07/02/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program checks if two numbers are even or odd.
  * It prompts the user to input two integers and then determines if each number is even or odd.
  * The program uses the modulus operator to check the parity of the numbers.
*/

#include <stdio.h>

int main() {

    int x, y;                                       // Declare variables for the two numbers

    printf("Input the first number: ");             // Prompt user for the first number
    scanf("%d", &x);                                // Read the first number

    printf("Input the second number: ");            // Prompt user for the second number
    scanf("%d", &y);                                // Read the second number   

    if(x % 2 == 0) {                                // Check if the first number is even
        y % 2 == 0 ? printf("Both numbers are even.\n") : printf("\nOne number is odd");    // If the first number is even, check if the second number is even or odd
    }
    else {
        y % 2 == 0 ? printf("\nOne number is odd") : printf("\nBoth numbers are odd");      // If the first number is odd, check if the second number is even or odd
    }
}