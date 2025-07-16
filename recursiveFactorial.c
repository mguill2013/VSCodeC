/*
 * Program: recursiveFactorial.c
 * Author: Michael Guillory
 * Date: 7/16/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program calculates the factorial of a positive integer using recursion.
 *  It prompts the user to enter a positive integer and then computes the factorial using a recursive function.
 *  The factorial of a number n is defined as the product of all positive integers up to n, and is denoted as n!.
*/

#include <stdio.h>
long fact(int n); // Function prototype for factorial

int main() {
    
    // Prompt user for input
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %d\n", number, fact(number));
    }

    return 0;
}

// Function to calculate factorial recursively
long fact(int n) {
    if (n == 0 || n == 1) {    // Base case: factorial of 0 or 1 is 1
        return 1;
    }
    else {
        return n * fact(n - 1);    // Recursive call
    }
}