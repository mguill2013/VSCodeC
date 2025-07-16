/*
 * Program: alternator.c
 * Author: Michael Guillory
 * Date: 7/16/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program implements a simple alternator function that toggles its state
 * using a static variable. Each time the function is called, it alternates between returning 0 and 1.
 * The main function demonstrates this by calling the alternator function five times and printing the result. 
*/

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        printf("Alternator state: %d\n", alternator());
    }
    return 0;
}

int alternator() {
    static int state = 0;
    state = 1 - state;
    return state;
}