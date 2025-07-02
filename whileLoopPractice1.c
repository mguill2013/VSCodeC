/*
 * Program: whileLoopPractice1.c
 * Author: Michael Guillory
 * Date: 6/28/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program demonstrates the use of a while loop
 * to print multiples of 5 from 0 to 100.
*/

#include <stdio.h>

int main() {

    int x = 0;
    // While loop goes until x > 100
    while(x <= 100) {
        printf("%d, ", x);
        x += 5; // Add 5 to x each loop iteration
    }
    printf("\b\b "); // Remove the last comma and space

    return 0;
}