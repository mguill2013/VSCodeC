/*
 * Program: miles_to_kilometers.c
 * Author: Michael Guillory
 * Date: 5/29/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: The following program asks user input for
 * a distance in miles and converts it to kilometers.
 * The program then asks the user to continue or exit.
*/

#include <stdio.h>
#define KMS_PER_MILE 1.609

int main(void)
{
    double miles, kms;
    char choice;
    int input_status;      // Variable to store the status of input operations

    // Start a do-while loop to allow multiple conversions
    do
    {
        // --- Input validation for miles ---
        do
        {
            // Get the distance in miles from the user
            printf("Enter the distance in miles: ");
            input_status = scanf("%lf", &miles);

            // This buffer clearing is also crucial if scanf fails, to prevent infinite loops.
            int c;
            while ((c = getchar()) != '\n' && c != EOF);        // Clear the input buffer
            if (input_status != 1) {
                printf("Invalid input. Please enter a number.\n");      // Prompt user to re-enter input
            }
        } while (input_status != 1); // Loop continues if input_status is not 1 (meaning scanf failed)

        // Convert the distance to kilometers
        kms = KMS_PER_MILE * miles;

        // Display the distance in kilometers
        printf("That equals %.2f kilometers.\n", kms);

        // --- Ask user to continue or exit ---
        // Important: Clear the input buffer before asking for character input
        // This consumes any leftover newline character from previous scanf calls

        // --- Input validation for choice ---
        do
        {

            printf("\nConvert another distance? (Y/N): ");
            scanf(" %c", &choice);

            // Provide feedback based on user input
            if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n')
            {
                printf("Invalid input. Please enter 'Y' or 'N'.\n");
            }

            int c_after_choice;
            while ((c_after_choice = getchar()) != '\n' && c_after_choice != EOF);      // Clear the input buffer after reading choice
        } while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n');     // Loop continues if choice is not 'Y', 'y', 'N', or 'n'

    } while (choice == 'Y' || choice == 'y');      // Continue if user chooses 'Y' or 'y'

    printf("\nThank you for using and testing this converter!\n");

    return 0;
}