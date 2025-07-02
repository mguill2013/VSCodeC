/*
 * Program: breakStatementAverage.c
 * Author: Michael Guillory
 * Date: 07/02/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program calculates the average of a series of numbers entered by the user.
    * The user can enter numbers until they enter 0, which will exit the loop via a break statement.
    * The program then calculates and displays the average of the entered numbers.
*/

#include <stdio.h>

int main() {

    int total = 0, n = 0, user;                                     // Initialize variables
    
    while(1) {                                                      // Infinite loop to continuously ask for user input
        printf("Enter number %d (0 to exit): ", n + 1);             // Prompt user for input
        scanf("%d", &user);                                         // Read user input
        if (user == 0) {                                            // Check if user entered 0 to exit
            break;                                                  // Exit the loop if user enters 0
        }
        total += user;                                              // Add user input to total
        ++n;                                                        // Increment count of numbers entered
    }
    printf("\nThe average is: %.2f", total / ((float) (n)));        // Print the average 
}