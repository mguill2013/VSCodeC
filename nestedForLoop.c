/*
 * Program: nestedForLoop.c
 * Author: Michael Guillory
 * Date: 6/28/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program checks for prime numbers between 1 and 100.
*/

#include <stdio.h>

int main() {
    int number, prime = 0;                                      // Variable to hold the number being checked
    for(number = 1; number <= 100; number++) {                  // Loop through numbers 1 to 100
        prime = 0;                                              // Reset prime count for each number
        for(int count = 1; count <= number; count++) {          // Loop to check divisibility
            if(number % count == 0) {                           // If number is divisible by count
                prime += 1;                                     // Increment prime count
            }
        }
        if(prime == 2) {                                        // If the number has exactly two divisors (1 and itself)
            printf("%d, ", number);                             // Print the prime number
        }
    }
    printf("\b\b ");                                            // Remove the last comma and space for cleaner output

    return 0;
}