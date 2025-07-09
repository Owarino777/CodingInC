/*
 * FORMAT SPECIFIERS AND ARITHMETIC OPERATORS IN C
 * 
 * This program demonstrates the comprehensive use of:
 * 1. Format specifiers for different data types
 * 2. Width and precision control in output formatting
 * 3. Special flags for customizing number display
 * 4. Arithmetic operators and their operations
 * 5. Assignment operators and shortcuts
 * 
 * Learning objectives:
 * - Understanding how to control output formatting with printf()
 * - Learning width and precision specifications
 * - Using flags to modify number display
 * - Mastering arithmetic operations
 * - Understanding operator precedence and assignment shortcuts
 */

#include <stdio.h>  // Standard input/output library for printf()

int main(){

    // WHAT ARE FORMAT SPECIFIERS?
    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data is displayed or interpreted in printf().

/******************************************************************************/
    // BASIC FORMAT SPECIFIERS DEMONSTRATION
    // Each data type has its own format specifier for proper display
    int age = 25;                   // Integer value
    float price = 19.99;            // Single-precision floating-point
    double pi = 3.14159265;         // Double-precision floating-point
    char currency = '$';            // Single character
    char name[] = "Owarino";        // String (character array)

    // BASIC FORMAT SPECIFIERS:
    // printf("%d\n", age);         // %d = decimal integer
    // printf("%f\n", price);       // %f = float (default 6 decimal places)
    // printf("%lf\n", pi);         // %lf = double (default 6 decimal places)
    // printf("%c\n", currency);    // %c = single character
    // printf("%s\n", name);        // %s = string (character array)

/******************************************************************************/
    // WIDTH SPECIFICATION DEMONSTRATION
    // Width = Minimum number of characters to display (adds padding if needed)
    // Useful for aligning output in columns or creating formatted tables
    
    int num1 = 1;       // Single digit
    int num2 = 10;      // Two digits
    int num3 = -100;    // Three digits with negative sign

    // Width of 4 characters - adds spaces to the left for right-alignment
    // printf("%+4d\n", num1);  // "   1" (3 spaces before 1)
    // printf("%+4d\n", num2);  // "  10" (2 spaces before 10)
    // printf("%+4d\n", num3);  // "-100" (no padding needed, already 4 chars)

/******************************************************************************/
    // PRECISION SPECIFICATION DEMONSTRATION
    // Precision = Number of decimal places to display for floating-point numbers
    // Controls how many digits appear after the decimal point
    
    float price1 = 19.99;     // Price with 2 decimal places
    float price2 = 1.50;      // Price that might display as 1.5
    float price3 = -100.00;   // Negative price with trailing zeros

    // .2f means exactly 2 decimal places (adds zeros if needed)
    // printf("%.2f\n", price1);  // "19.99" (exactly as stored)
    // printf("%.2f\n", price2);  // "1.50" (adds trailing zero)
    // printf("%.2f\n", price3);  // "-100.00" (adds trailing zeros)

/******************************************************************************/
    // FLAGS DEMONSTRATION
    // Flags = Special characters that modify the output format
    // Common flags: + (show sign), - (left-align), 0 (zero-padding)
    
    int num4 = 42;   // Positive number
    int num5 = -7;   // Negative number

    // + flag: Always show the sign (+ for positive, - for negative)
    // printf("%+d\n", num4);  // "+42" (shows plus sign for positive)
    // printf("%+d\n", num5);  // "-7" (shows minus sign for negative)

/******************************************************************************/
    // ARITHMETIC OPERATORS DEMONSTRATION
    // Arithmetic operators = Used to perform mathematical calculations
    // These are the fundamental operations in programming
    
    int x = 10;  // First operand
    int y = 3;   // Second operand
    int z = 0;   // Result variable

    // BASIC ARITHMETIC OPERATIONS:
    //z = x + y;  // Addition: 10 + 3 = 13
    //z = x - y;  // Subtraction: 10 - 3 = 7
    //z = x * y;  // Multiplication: 10 * 3 = 30
    //z = x / y;  // Division: 10 / 3 = 3 (integer division - no decimals)
    //z = x % y;  // Modulus: 10 % 3 = 1 (remainder after division)

    // INCREMENT AND DECREMENT OPERATORS:
    //x++;        // Post-increment: use current value, then add 1
    //++x;        // Pre-increment: add 1 first, then use new value
    //y--;        // Post-decrement: use current value, then subtract 1
    //--y;        // Pre-decrement: subtract 1 first, then use new value

    // COMPOUND ASSIGNMENT OPERATORS (shortcuts):
    // x += 5;     // Add and assign: equivalent to x = x + 5
    // y -= 2;     // Subtract and assign: equivalent to y = y - 2
    // z *= 2;     // Multiply and assign: equivalent to z = z * 2
    // z /= 3;     // Divide and assign: equivalent to z = z / 3
    // z %= 4;     // Modulus and assign: equivalent to z = z % 4

    // Display the result of our operations
    printf("%d", z);  // Print the final value of z

/******************************************************************************/

    return 0;  // Return 0 to indicate successful program execution
}