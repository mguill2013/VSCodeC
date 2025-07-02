/*
 * Program: forLoopPractice1.c
 * Author: Michael Guillory
 * Date: 6/28/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program demonstrates the use of a for loop
 * to print a vertical line of asterisks.
*/

#include <stdio.h>

int main() {

    int counter = 0;
    // For loop that iterates 20 times and prints a vertical line of 20 asterisks
    for(counter = 0; counter < 20; counter++) {
        printf("*\n");
    }

    return 0;
}