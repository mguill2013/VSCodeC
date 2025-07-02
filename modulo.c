#include <stdio.h>

int main() {

    // Write a program to determine if a user inputted number is divisible by 2, 3, or 5. 
    // The program should output whether the number is divisible by the numbers stated.
    // The outputs should be on a separate line for each true statement.

    int number;
    printf("Please enter a number: ");
    scanf("%d", &number);

    // Remainder can be used to check if a number is divisible by another number.
    // If there is no remainder, then the number is divisible by the other number.

    if (number % 2 == 0) 
        printf("%d is divisible by 2.\n", number);
    if (number % 3 == 0) 
        printf("%d is divisible by 3.\n", number);
    if (number % 5 == 0) 
        printf("%d is divisible by 5.\n", number);
    return 0;
}