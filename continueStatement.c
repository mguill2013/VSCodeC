/*
 * Program: ContinueStatement.c
 * Author: Michael Guillory
 * Date: 6/28/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program demonstrates the use of the continue statement in a loop.
    * It prints numbers from 1 to 100, skipping those that are divisible by 11.
    * The continue statement is used to skip the current iteration of the loop
    * when the condition is met, allowing the loop to continue with the next iteration.
*/

#include <stdio.h>

int main() {

    int x = 0;                                      // Loop variable

    for(x = 1; x <= 100; ++x) {                     // Loop from 1 to 100
        if(x % 11 == 0)                             // If x is divisible by 11
            continue;                               // Skip the rest of the loop iteration
        printf("%d, ", x);                          // Print the current value of x
    }
    printf("\b\b ");                                // Remove the last comma and space from the output
}