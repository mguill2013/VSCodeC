/*
 * Program: switchPractice.c
 * Author: Michael Guillory
 * Date: 6/28/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program prompts the user to enter two integers and
 * then performs a selected arithmetic operation on them.
*/

#include <stdio.h>

int main() {

    int A, B, n;
    printf("Enter Two Integers separated by space: ");
    scanf("%d %d", &A, &B);

    printf("Select [1] Addition, [2] Subtraction, [3] Multiplication, [4] Division: ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            printf("A + B = %d\n", A + B);
            break;
        case 2:
            printf("A - B = %d\n", A - B);
            break;
        case 3:
            printf("A * B = %d\n", A * B);
            break;
        case 4:
            printf("A / B = %d\n", A / B);
            break;
    }

    printf("Thank you for using the program!\n");
    return 0;
}