/*
 * Program: amcd_hosting_p3.c
 * Author: Michael Guillory
 * Date: 06/09/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program written for AMCD Hosting Inc.
    * is part three of a monthly billing program. The features
    * added in this part include new calculations for Subtotal,
    * Bundle Discounts, Taxes, and Total Amount Due. 

 *Student Assignment Submission Form
    I declare that the attached assignment is wholly my own work in accordance with UCF
    Academic Policy. No part of this assignment has been copied manually or electronically from
    any other source (including web sites) or distributed to other students. My name is: Michael
    Guillory, Date: 06/09/2025 */

#include <stdio.h>      // Standard input/output library (used for printf and scanf)
#include <ctype.h>      // Character handling library (used for 'Y' / 'N' input)

// Web Hosting Package Costs
#define WEB_HOST_SILVER_COST 39.01
#define WEB_HOST_GOLD_COST 59.99
#define WEB_HOST_ULTIMATE_COST 79.50

// IP Type Costs
#define IP_SHARED_COST 4.99
#define IP_DEDICATED_COST 9.99

// Email Marketing Package Costs
#define EMAIL_MARKETING_ECONOMY_COST 21.99
#define EMAIL_MARKETING_DELUXE_COST 50.00
#define EMAIL_MARKETING_PREMIUM_COST 65.75

// Internet Marketing Package Costs
#define INTERNET_MARKETING_BASIC_COST 77.77
#define INTERNET_MARKETING_SUPREME_COST 110.99

int main(void)
{
    
    // Variable Declarations and Initializations
    char web_hosting_choice;                    // Variable for Web Hosting
    int web_hosting_package;                    // Package choice (1, 2, or 3)
    int ip_type_choice;                         // IP Type choice (1 or 2)
    double web_hosting_cost = 0.0;              // Cost for Web Hosting Service
    double combined_web_hosting_cost = 0.0;        // This will hold package_cost + ip_cost
    double ip_cost = 0.0;                       // Cost for IP Type
    double total_bill = 0.0;                    // Total Monthly Bill
        
    // Email Marketing Variables
    char email_marketing_choice;                // Y/N choice for Email Marketing
    int email_marketing_package;                // Package choice for Email Marketing (1, 2, or 3)
    double email_marketing_cost = 0.0;          // Cost for Email Marketing Service

    // Internet Marketing Variables
    char internet_marketing_choice;              // Y/N choice for Internet Marketing
    int internet_marketing_package;              // Package choice for Internet Marketing (1 or 2)
    double internet_marketing_cost = 0.0;        // Cost for Internet Marketing Service

    int input_status = 0;                        // Variable to track input status for validation

    // NEW FEATURE! - Variables for Version 3 Calculations
    int services_subscribed_count = 0;           // Count of services subscribed to
    double subtotal_cost = 0.0;                  // Sum of all selected services' costs
    double discount_amount = 0.0;                // Amount of the 10% discount
    double total_before_tax = 0.0;               // Total before tax
    double tax_amount = 0.0;                     // Calculated tax (6.5%)
    double amount_due = 0.0;                     // Total amount due after tax

    // Welcome message
    printf("Welcome to AMCD Hosting Inc.\n");

    // Prompt and validate user's choice for Web Hosting Service
    do {
        printf("Would you like to subscribe to a Web Hosting Service?");
        printf("(Y/N): ");
        input_status = scanf(" %c", &web_hosting_choice);
        web_hosting_choice = toupper(web_hosting_choice);

        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        // Check if scanf failed to read 1 item OR if the choice is not 'Y' or 'N'
        if (input_status != 1 || (web_hosting_choice != 'Y' && web_hosting_choice != 'N')) {
            printf("Invalid input. Please enter 'Y' or 'N'.\n");
            input_status = 0; // Set status to 0 to force loop repetition
        } else {
            input_status = 1; // Set status to 1 to prevent loop repetition
        }
    } while (input_status != 1); // Loop continues as long as input_status is not 1
    // --- END: Input Validation for Web Hosting Service (Y/N) ---


    // --- START: Web Hosting Service Logic ---
    if (web_hosting_choice == 'Y') { // If user chooses Web Hosting Service
        // Prompt and validate user's package choice for Web Hosting Service
        do { // Loop until valid input is received
            printf("Choose package 1, 2, or 3: "); // Prompt for package choice
            input_status = scanf("%d", &web_hosting_package); // Read package choice

            int c; // Clear input buffer
            while ((c = getchar()) != '\n' && c != EOF);

            if (input_status != 1 || (web_hosting_package < 1 || web_hosting_package > 3)) { // Check if input is valid
                printf("Invalid package choice. Please enter 1, 2, or 3. \n"); // Print error message
                input_status = 0; // Set status to 0 to force loop repetition
            } else { // If input is valid
                input_status = 1;
            }
            } while (input_status != 1); // Loop continues as long as input_status is not 1

        // Determine Web Hosting Package Cost
        if (web_hosting_package == 1) {
            web_hosting_cost = WEB_HOST_SILVER_COST;
        } else if (web_hosting_package == 2) {
            web_hosting_cost = WEB_HOST_GOLD_COST;
        } else if (web_hosting_package == 3) {
            web_hosting_cost = WEB_HOST_ULTIMATE_COST;
        }
        

        // Prompt and validate user's IP Type choice
        do {
            printf("Choose IP type: Shared (1) or Dedicated (2): ");
            input_status = scanf("%d", &ip_type_choice);

            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            if (input_status != 1 || (ip_type_choice < 1 || ip_type_choice > 2)) {
                printf("Invalid IP type choice. Please enter 1 or 2. \n");
                input_status = 0; // Set status to 0 to force loop repetition
            } else {
                input_status = 1;
            }
        } while (input_status != 1);

        // Determine IP Type Cost
        if (ip_type_choice == 1) {
            ip_cost = IP_SHARED_COST;
        } else if (ip_type_choice == 2) {
            ip_cost = IP_DEDICATED_COST;
        }
        
        double combined_web_hosting_cost = web_hosting_cost + ip_cost;      // Combine web hosting cost with IP cost
        subtotal_cost += combined_web_hosting_cost;                         // Add combined cost to subtotal
        services_subscribed_count++;                                        // Increment services count for Web Hosting
    }
    // --- END: Web Hosting Service Logic ---


    // --- START: Email Marketing Service Logic ---
    // Prompt and validate user's Y/N choice for Email Marketing Service
    do {
        printf("Would you like to subscribe to an Email Marketing Service?");
        printf("(Y/N): ");
        input_status = scanf(" %c", &email_marketing_choice);
        email_marketing_choice = toupper(email_marketing_choice); // Convert to uppercase for consistency

        int c; // Variable for clearing input buffer
        while ((c = getchar()) != '\n' && c != EOF);

        if (input_status != 1 || (email_marketing_choice != 'Y' && email_marketing_choice != 'N')) {
            printf("Invalid input. Please enter 'Y' or 'N'.\n");
            input_status = 0; // Set status to 0 to force loop repetition
        } else {
            input_status = 1; // Set status to 1 to prevent loop repetition
        }
    } while (input_status != 1); // Loop continues as long as input_status is not 1

    if (email_marketing_choice == 'Y') {
        // Prompt for Email Marketing Package
        do {
            printf("Choose package 1, 2, or 3: ");
            input_status = scanf("%d", &email_marketing_package);

            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            if (input_status != 1 || (email_marketing_package < 1 || email_marketing_package > 3)) {
                printf("Invalid package choice. Please enter 1, 2, or 3.\n");
                input_status = 0; // Set status to 0 to force loop repetition
            } else {
                input_status = 1; // Set status to 1 to prevent loop repetition
            }
        } while (input_status != 1); // Loop continues as long as input_status is not 1

        // Determine Email Marketing Package Cost
        if (email_marketing_package == 1) {
            email_marketing_cost = EMAIL_MARKETING_ECONOMY_COST;
        } else if (email_marketing_package == 2) {
            email_marketing_cost = EMAIL_MARKETING_DELUXE_COST;
        } else if (email_marketing_package == 3) {
            email_marketing_cost = EMAIL_MARKETING_PREMIUM_COST;
        }

        subtotal_cost += email_marketing_cost; // Add Email Marketing cost to subtotal
        services_subscribed_count++; // Increment services count for Email Marketing
    }
    // --- END: Email Marketing Service Logic ---


    // --- START: Internet Marketing Service Logic ---
    // Prompt and validate user's Y/N choice for Internet Marketing Service
    do {
        printf("Would you like to subscribe to an Internet Marketing Service?");
        printf("(Y/N): ");
        input_status = scanf(" %c", &internet_marketing_choice);
        internet_marketing_choice = toupper(internet_marketing_choice); // Convert to uppercase for consistency

        int c; // Variable for clearing input buffer
        while ((c = getchar()) != '\n' && c != EOF);

        if (input_status != 1 || (internet_marketing_choice != 'Y' && internet_marketing_choice != 'N')) {
            printf("Invalid input. Please enter 'Y' or 'N'.\n");
            input_status = 0; // Set status to 0 to force loop repetition
        } else {
            input_status = 1; // Set status to 1 to prevent loop repetition
        }
    } while (input_status != 1); // Loop continues as long as input_status is not 1

    if (internet_marketing_choice == 'Y') {
        // Prompt and validate user's package choice for Internet Marketing Service
        do {
            printf("Choose package 1 or 2: ");
            input_status = scanf("%d", &internet_marketing_package);

            int c;
            while ((c = getchar()) != '\n' && c != EOF);

            if (input_status != 1 || (internet_marketing_package < 1 || internet_marketing_package > 2)) {
                printf("Invalid package choice. Please enter 1 or 2.\n");
                input_status = 0; // Set status to 0 to force loop repetition
            } else {
                input_status = 1; // Set status to 1 to prevent loop repetition
            }
        } while (input_status != 1); // Loop continues as long as input_status is not 1

        // Determine Internet Marketing Package Cost
        if (internet_marketing_package == 1) {
            internet_marketing_cost = INTERNET_MARKETING_BASIC_COST;
        } else if (internet_marketing_package == 2) {
            internet_marketing_cost = INTERNET_MARKETING_SUPREME_COST;
        }

        subtotal_cost += internet_marketing_cost; // Add Internet Marketing cost to subtotal
        services_subscribed_count++; // Increment services count for Internet Marketing
    }
    // --- END: Internet Marketing Service Logic ---


    // --- START: Final Calculations and Display ---
    // NEW FEATURE! - Calculating Subtotal, Discounts, Taxes, and Total Amount Due
    // Calculate Bundle Discount
    if (services_subscribed_count >= 2) {
        discount_amount = subtotal_cost * 0.10; // Discount applies if 2 or more services are subscribed
    }

    // Calculate Total Before Tax
    total_before_tax = subtotal_cost - discount_amount; // Subtract discount from subtotal

    // Calculate Tax (6.5%)
    tax_amount = total_before_tax * 0.065; // Calculate tax on the total before tax

    // Calculate Amount Due
    amount_due = total_before_tax + tax_amount; // Total amount due after adding tax

    // Displaying the Monthly Bill Details
    printf("-------------------------------------------\n");
    printf("AMCD HOSTING INC Bill Details\n");
    printf("-------------------------------------------\n");
    printf("%-20s %-10s %11s\n", "Service", "Package", "Cost"); // Header

    if (web_hosting_choice == 'Y') {
        printf("%-20s %-10d $%10.2f\n", "Web Hosting", web_hosting_package, web_hosting_cost);
        printf("%-20s %-10d $%10.2f\n", (ip_type_choice == 1) ? "    IP Shared" : "  IP Dedicated", ip_type_choice, ip_cost);
    }
    if (email_marketing_choice == 'Y') {
        printf("%-20s %-10d $%10.2f\n", "Email Marketing", email_marketing_package, email_marketing_cost);
    }
    if (internet_marketing_choice == 'Y') {
        printf("%-20s %-10d $%10.2f\n", "Internet Marketing", internet_marketing_package, internet_marketing_cost);
    }

    printf("\n"); // New line for better readability

    // Display Subtotal, Discounts, Taxes, and Total Amount Due
    printf("%-20s %-10s $%10.2f\n", "Subtotal", "", subtotal_cost);
    if (discount_amount > 0) {
        printf("%-20s %-10s $%10.2f\n", "Bundle Discount:", "10%", -discount_amount); // -discount_amount to show as a negative value
    } else {
        printf("%-20s %-10s $%10.2f\n", "Bundle Discount:", "0%", 0.00); // No discount applied
    }
    printf("%-20s %-10s $%10.2f\n", "Total Before Tax:", "", total_before_tax); // Display total before tax
    printf("%-20s %-10s $%10.2f\n", "Tax:", "6.5%", tax_amount); // Display tax amount
    printf("%-20s %-10s $%10.2f\n", "Amount Due:", "", amount_due); // Display total amount due
    
    return 0;
}