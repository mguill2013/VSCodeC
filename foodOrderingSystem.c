/*
 * Program: foodOrderingSystem.c
 * Author: Michael Guillory
 * Date: 07/02/2025
 * Course: EGN 3211: Engineering Analysis and Computation

 * Description: A restaurant has tasked me to build a food ordering software.
  * The program displays their menu and lets the user order food.
  * For certain food items, the user can make combo meals for an additional cost.
  * The program calculates the total of all food items ordered and adds a 6% sales tax.
*/

#include <stdio.h>

int main() {

    int c = 0, o = 0, s = 0;
    float total = 0.0;

    // Menu Printing
    printf("----------------------------------------");
    printf("\n|%21s%17s|\n", "Menu", " ");
    printf("----------------------------------------");
    printf("\n|%-30s%-8s|", "1: Burger:", "$4.99");
    printf("\n|%-30s%-8s|", "2: Cheeseburger:", "$5.99");
    printf("\n|%-30s%-8s|", "3: Chicken Tenders:", "$7.99");
    printf("\n|%-30s%-8s|", "4: Hotdog:", "$2.99");
    printf("\n|%-30s%-8s|", "", " ");
    printf("\n|%-30s%-8s|", "Make it a Combo:", "$1.99");
    printf("\n|%-30s%-8s|", "", " ");
    printf("\n|%-30s%-8s|", "5: Fries:", "$1.99");
    printf("\n|%-30s%-8s|", "6: Drinks:", "$0.99");
    printf("\n----------------------------------------");
    // End Menu Printing

    while(c == 0) {
        printf("\n\nWhat would you like to order? ");
        scanf("%d", &o);
        if(o == 1) {
            total += 4.99;
            printf("You ordered a Burger.\n");
        } else if(o == 2) {
            total += 5.99;
            printf("You ordered a Cheeseburger.\n");
        } else if(o == 3) {
            total += 7.99;
            printf("You ordered Chicken Tenders.\n");
        } else if(o == 4) {
            total += 2.99;
            printf("You ordered a Hotdog.\n");
        } else if(o == 5) {
            total += 1.99;
            printf("You ordered Fries.\n");
        } else if(o == 6) {
            total += 0.99;
            printf("You ordered a Drink.\n");
        }
        if(o >= 1 && o <= 4) {
            printf("Would you like to make it a combo for an additional $1.99? ([1] Yes / [0] No): ");
            scanf("%d", &s);
            if(s != 0) {
                total += 1.99;
            }
        }
        printf("Is your order complete? ([1] Yes / [0] No): ");
        scanf("%d", &c);
        if(c != 0) {
            printf("Thank you for your order!\n");
            break;
        } else {
            printf("You can continue ordering.\n");
            continue;
        }
    }
    printf("\n%-15s$%-12.2f", "Subtotal: ", total);
    printf("\n%-15s$%-12.2f", "Tax: ", total * 0.06);
    printf("\n%-15s$%-12.2f", "Total: ", total + (total * 0.06));

    return 0;
}