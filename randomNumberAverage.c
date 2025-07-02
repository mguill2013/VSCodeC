/*
 * Program: randomNumberAverage.c
 * Author: Michael Guillory
 * Date: 07/02/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program generates 10 random numbers between 0 and 100, 
 * calculates their average, and prints the numbers along with the average.
*/

#include <stdio.h>                                      // This header file is included to use printf and scanf functions
#include <stdlib.h>                                     // This header file is included to use rand and srand functions
#include <time.h>                                       // This header file is included to use time function for seeding the random number generator

int main() {

    srand(time(NULL));                                  // Seed the random number generator with the current time 
    int random, total = 0;                              // Declare variables for random number and total sum

    for(int counter = 0; counter < 10; ++counter) {     // Loop 10 times to generate 10 random numbers
        random = rand() % 101;                          // Generate a random number between 0 and 100
        total += random;                                // Add the random number to the total sum
        printf("%d, ", random);                         // Print the random number followed by a comma and space
    }
    printf("\b\b ");                                    // Remove the last comma and space from the output

    printf("\n\nThe average is: %.2f", total / 10.0);   // Calculate and print the average of the random numbers, formatted to two decimal places

    return 0;
}