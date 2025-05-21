
/*
 * Program: Age_Display.c
 * Author: Michael Guillory
 * Date: 5/20/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program prompts the user to enter Tom's age (an integer).
 * It then displays a formatted message on two lines, incorporating
 * the entered age.
*/

#include <stdio.h>    // standard input/output library

int main(void)
{
    int age;    // variable to store age

    age = 0;    // initialize age to 0

    printf("Please enter an age for Tom: ");    // prompt user for input
    scanf("%d", &age);                          // read age from user

    printf("\nThe man's name is Tom,\n");
    printf("\nhe is %d years old.\n", age);

return 0;
}