/*
 * Program: sort.c
 * Author: Michael Guillory
 * Date: 6/19/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: The following program implements a selection
    * sort algorithm to sort an array of double values in ascending order.
    * The selection sort algorithm works by repeatedly finding the minimum element 
    * from the unsorted portion of the array and swapping it with the first unsorted element.
    * The process continues until the entire array is sorted.
*/

#include <stdio.h>
#define N 8

int main() {

    double a [N] = {3.0, 21.0, 0.0, -3.0, 34.0, -14.0, 45.0, 18.0};
    double temp;                        // Temporarily holds a value when two elements of the array are swapped
    int i, j, imin;                     // Variables for array index

    // --- Output: The original data ---
    printf("The original data:\n");
    for (int k = 0; k < N; k++) {       // Loop to print each element of the array
        printf("%g ", a[k]);            // Print each element of the array using %g for concise output of double values
    }
    printf("\n");                       // Print a newline for better readability

    printf("The sorted data in each iteration:\n");     // Output header for the sorted data

    // --- Selection Sort Algorithm ---
    for(i = 0; i < N-1; i++) {          // Outer for loop controls the number of passes through the array
        imin = i;                       // Assume the first element is the minimum, imin stores the index of the minimum element
        for(j = i+1; j < N; j++) {      // Inner for loop finds the minimum element in the unsorted portion of the array
            if(a[imin] > a[j]) {        // if a[j] is less than the current minimum...
                imin = j;               // ...update imin
            }
        }
    
        if(imin != i) {                 // If a smaller element was found, swap it with the current element
            temp = a[i];                // Store the value of the element at the current [i] position in temp before overwriting it
            a[i] = a[imin];             // Overwrite the current element with the minimum element found
            a[imin] = temp;             // Place the value stored in temp into the position of the minimum element
        }

        // --- Output: The sorted data after each iteration ---
        for (int k = 0; k < N; k++) {   // Loop to print each element of the array after each iteration
            printf("%g ", a[k]);        // Print each element of the array using %g for concise output of double values
        }
        printf("\n");                   // Print a newline for better readability
    }
    return 0;
}