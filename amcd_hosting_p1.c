/*
 * Program: amcd_hosting_p1.c
 * Author: Michael Guillory
 * Date: 6/5/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: This program written for AMCD Hosting Inc.
    * prompts the user to subscribe to a Web Hosting Service,
    * allows them to choose a package and IP type,
    * calculates the total monthly bill,
    * and displays the bill details.
*/

/*Student Assignment Submission Form
I declare that the attached assignment is wholly my own work in accordance with UCF
Academic Policy. No part of this assignment has been copied manually or electronically from
any other source (including web sites) or distributed to other students. My name is: Michael
Guillory, Date: 06/05/2025 */

#include <stdio.h>      // Standard input/output library (used for printf and scanf)
#include <ctype.h>      // Character handling library (used for 'Y' / 'N' input)

// Web Hosting Package Costs
#define WEB_HOST_SILVER_COST 39.01
#define WEB_HOST_GOLD_COST 59.99
#define WEB_HOST_ULTIMATE_COST 79.50

// IP Type Costs
#define IP_SHARED_COST 4.99
#define IP_DEDICATED_COST 9.99

int main()
{
    
    // Variable Declarations and Initializations
    char web_hosting_choice;                    // Variable for Web Hosting
    int web_hosting_package;                    // Package choice (1, 2, or 3)
    int ip_type_choice;                         // IP Type choice (1 or 2)
    double web_hosting_cost = 0.0;              // Cost for Web Hosting Service
    double ip_cost = 0.0;                       // Cost for IP Type
    double total_bill = 0.0;                    // Total Monthly Bill

    // Welcome message
    printf("Welcome to AMCD Hosting Inc.\n");

    // Prompt for Web Hosting Service
    printf("Would you like to subscribe to a Web Hosting Service?");
    printf("(Y/N): ");
    scanf(" %c", &web_hosting_choice);
    web_hosting_choice = toupper(web_hosting_choice);       // Convert to uppercase for consistency

    // Clear input buffer (after scanf)
    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    // If Web Hosting Service is chosen
    if (web_hosting_choice == 'Y') {
        // Prompt for Web Hosting Package
        printf("Choose package 1, 2, or 3: ");
        scanf("%d", &web_hosting_package);

        // Clear input buffer (after scanf)
        while ((c = getchar()) != '\n' && c != EOF);

        // Determine Web Hosting Package Cost
        if (web_hosting_package == 1) {
            web_hosting_cost = WEB_HOST_SILVER_COST;
        } else if (web_hosting_package == 2) {
            web_hosting_cost = WEB_HOST_GOLD_COST;
        } else if (web_hosting_package == 3) {
            web_hosting_cost = WEB_HOST_ULTIMATE_COST;
        } else {
            // Handle invalid package choice (print error and default to $0.0 cost)
            printf("Invalid package choice. Cost set to $0.00.\n");
            web_hosting_cost = 0.0;
        }
    

        // Prompt for IP Type
        printf("Choose IP type: Shared (1) or Dedicated (2): ");
        scanf("%d", &ip_type_choice);

        // Clear input buffer (after scanf)
        while ((c = getchar()) != '\n' && c != EOF);

        // Determine IP Type Cost
        if (ip_type_choice == 1) {
            ip_cost = IP_SHARED_COST;
        } else if (ip_type_choice == 2) {
            ip_cost = IP_DEDICATED_COST;
        } else {
            // Handle invalid IP Type choice (print error and default to $0.0 cost)
            printf("Invalid IP Type. Cost set to $0.00.\n");
            ip_cost = 0.0;
        }

    // Calculate Total Web Hosting cost (Package + IP Type)
    web_hosting_cost += ip_cost;        // Add IP cost to Web Hosting cost
    } 

    // Displaying the Total Monthly Bill
    printf("\nAMCD HOSTING INC Bill Details\n");
    printf("%-20s %-10s %s%9s\n", "Service", "Package", "Cost", "");        // Header row with use of string format specifiers
    printf("%-20s %10s %s%9s\n", "--------------------", "----------", "----------", ""); // Separator row

    if (web_hosting_choice == 'Y') {
        // Print Web Hosting Service Line
        printf("%-20s %10d $ %8.2f\n", "Web Hosting", web_hosting_package, web_hosting_cost - ip_cost);

        // Print IP Type Line
            // In line 95, the IP Cost is already included in web_hosting_cost, so subtract it back for the correct display output
                // Furthermore, the IP Type is displayed based on the user's choice (1 for Shared, 2 for Dedicated)
        const char* ip_type_name = (ip_type_choice == 1) ? "Shared" : "Dedicated";        // Determine IP Type name based on choice
        printf("%-20s %10d $ %8.2f\n", (ip_type_choice == 1) ? "    IP Shared" : "    IP Dedicated", ip_type_choice, ip_cost);

        total_bill = web_hosting_cost;      // Total Bill for Part 1 of this program
    } else {
        // If no Web Hosting Service is chosen, notify the user and set total_bill to $0.0 cost
        printf("No Web Hosting Service selected.\n");
        total_bill = 0.0;
    }
    return 0;
}