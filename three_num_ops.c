/*
 * Program: three_num_ops.c
 * Author: Michael Guillory
 * Date: 5/21/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program prompts the user to enter three
 * INT type numbers and prints the sum of the first and third
 * number, the product of the second and third number, 
 * and the difference of the first and second number.
*/

#include <stdio.h>    // standard input/output library

int main(void)
{
	// Declare variables
	int num1, num2, num3;
	int sum, product, difference;
	
	// Prompt user for input num1
	printf("Please enter the first number: ");
    scanf("%d", &num1);

    // Prompt user for input num2
	printf("Please enter the second number: ");
    scanf("%d", &num2);

    // Prompt user for input num3
	printf("Please enter the third number: ");
	scanf("%d", &num3);
	
	// Calculate sum, product, and difference
	sum = num1 + num3;
	product = num2 * num3;
	difference = num1 - num2;
	
	// Print results
	printf("\nThe sum of the first and third number is: %d\n", sum);
	printf("The product of the second and third number is: %d\n", product);
	printf("The difference of the first and second number is: %d\n", difference);
	
	return 0; // Indicate successful completion
	
}