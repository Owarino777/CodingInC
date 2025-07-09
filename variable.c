/*
 * VARIABLES AND DATA TYPES IN C
 * 
 * This program demonstrates all the fundamental data types in C programming:
 * - Integer types (int)
 * - Floating-point types (float, double)
 * - Character types (char, char arrays/strings)
 * - Boolean types (bool - requires stdbool.h)
 * 
 * Learning objectives:
 * - Understanding different data types and their memory sizes
 * - Learning proper variable declaration and initialization
 * - Using format specifiers for different data types
 * - Working with strings (character arrays)
 * - Understanding boolean logic and conditional statements
 * - Precision control in floating-point output
 */

#include <stdio.h>      // Standard input/output library for printf()
#include <stdbool.h>    // Boolean data type library (adds true/false keywords)

int main(){
    // WHAT IS A VARIABLE?
    // Variable = A reusable container for storing a value in memory
    //           It behaves as if it were the actual value it contains
    //           Each variable has a name, type, and value

    // DATA TYPES AND THEIR CHARACTERISTICS:
    // int = whole number (typically 4 bytes in modern 32/64-bit systems)
    // float = single-precision decimal number (4 bytes, ~7 decimal digits precision)
    // double = double-precision decimal number (8 bytes, ~15 decimal digits precision)
    // char = single character (1 byte, can store ASCII values 0-127)
    // char[] = array of characters forming a string (size varies)
    // bool = true or false value (1 byte, requires <stdbool.h> header)

/************************************************************/
    // INTEGER VARIABLES DEMONSTRATION
    // Integers store whole numbers without decimal points
    int age = 25;           // Person's age in years
    int year = 2025;        // Current year
    int quantity = 1;       // Number of items

    // %d is the format specifier for decimal integers
    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

/************************************************************/
    // FLOAT VARIABLES DEMONSTRATION
    // Floats store decimal numbers with single precision (about 7 digits)
    float gpa = 2.5;            // Grade point average
    float price = 19.99;        // Item price in dollars
    float temperature = -10.1;  // Temperature in Celsius

    // %f displays all decimal places, %.2f limits to 2 decimal places
    printf("Your gpa is %f\n", gpa);                    // Shows all default decimal places
    printf("The price is $%.2f\n", price);              // Shows exactly 2 decimal places
    printf("The temperature is %.1f°C \n", temperature); // Shows exactly 1 decimal place

/************************************************************/
    // DOUBLE VARIABLES DEMONSTRATION
    // Doubles store decimal numbers with double precision (about 15 digits)
    // Use doubles when you need higher precision than floats
    double pi = 3.141592653589793;  // Mathematical constant π
    double e = 2.718281828459045;   // Mathematical constant e (Euler's number)

    // %lf is the format specifier for doubles, %.15lf shows 15 decimal places
    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);

/************************************************************/
    // CHARACTER VARIABLES DEMONSTRATION
    // Characters store single ASCII characters (letters, numbers, symbols)
    char grade = 'A';       // Letter grade (note single quotes for characters)
    char symbol = '!';      // Exclamation mark
    char currency = '$';    // Dollar sign

    // %c is the format specifier for single characters
    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

/************************************************************/
    // STRING VARIABLES DEMONSTRATION
    // Strings are arrays of characters ending with null terminator '\0'
    char name[] = "Owarino";            // Person's name (note double quotes for strings)
    char food[] = "Pizza";              // Favorite food
    char email[] = "fake123@gmail.com"; // Email address

    // %s is the format specifier for strings (character arrays)
    printf("Hello, %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);

/************************************************************/
    // BOOLEAN VARIABLES DEMONSTRATION
    // Booleans store true/false values (requires #include <stdbool.h>)
    bool isOnline = true;   // User's online status
    bool isStudent = true;  // Educational status
    bool forSale = false;   // Item availability

    // When printed as integer: true = 1, false = 0
    printf("%d\n", isOnline); // prints 1 for true, 0 for false

    // CONDITIONAL STATEMENTS WITH BOOLEANS
    // if statements execute code blocks based on boolean conditions
    if(isOnline){           // if condition is true
        printf("You are online!\n");
    } else {                // if condition is false
        printf("You are offline!\n");
    }

    if(isStudent){
        printf("You are a student!\n");
    } else {
        printf("You are not a student!\n");
    }

    if(forSale){
        printf("This item is for sale!\n");
    } else {
        printf("This item is not for sale!\n");
    }

/************************************************************/

    return 0; // Return 0 to indicate successful program execution
}