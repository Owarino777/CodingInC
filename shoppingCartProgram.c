/*
 * SHOPPING CART PROGRAM
 * 
 * This program simulates a simple shopping cart where the user can:
 * 1. Enter an item name they want to purchase
 * 2. Specify the price per unit of that item
 * 3. Indicate how many units they want to buy
 * 4. Calculate and display the total cost
 * 
 * Learning objectives:
 * - Using different data types (char array, float, int)
 * - Getting user input with fgets() and scanf()
 * - String manipulation to remove newline characters
 * - Basic arithmetic operations
 * - Formatted output with printf()
 */

#include <stdio.h>   // Standard input/output library for printf(), scanf(), fgets()
#include <string.h>  // String manipulation library for strlen()

int main() {

    //------***SHOPPING CART PROGRAM***------

    // Variable declarations and initialization
    char item[50] = "";     // Array to store the item name (up to 49 characters + null terminator)
    float price = 0.0f;     // Price per unit (floating-point number for decimal values)
    int quantity = 0;       // Number of items to purchase (integer)
    char currency = '$';    // Currency symbol to display (single character)
    float total = 0.0f;     // Total cost calculation result

    // Step 1: Get the item name from the user
    printf("What item would you like to buy?: ");
    fgets(item, sizeof(item), stdin);           // Read a line of text including spaces
    if (item[strlen(item) - 1] == '\n') {       // Only remove if the last character is a newline
        item[strlen(item) - 1] = '\0';
    }

    // Step 2: Get the price per unit
    printf("What is the price for each?: ");
    scanf("%f", &price);                        // Read a floating-point number from user input

    // Step 3: Get the quantity desired
    printf("How many would you like?: ");
    scanf("%d", &quantity);                     // Read an integer from user input

    // Step 4: Calculate the total cost
    total = price * quantity;                   // Basic multiplication: unit price × quantity

    printf("The total is: %c%.2f\n", currency, total);          // Show currency symbol and total (2 decimal places)
    printf("\nYou have bought %d %s(s)\n", quantity, item);    // Show quantity and item name
    printf("The total is: %c%.2f", currency, total);          // Show currency symbol and total (2 decimal places)

    return 0;   // Indicate successful program execution
}