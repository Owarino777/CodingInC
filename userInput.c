/*
 * USER INPUT HANDLING IN C
 * 
 * This program demonstrates how to properly handle different types of user input:
 * 1. Reading integers with scanf()
 * 2. Reading floating-point numbers with scanf()
 * 3. Reading single characters with scanf()
 * 4. Reading strings (with spaces) using scanf() advanced patterns
 * 5. Handling input buffer issues and whitespace
 * 
 * Learning objectives:
 * - Understanding scanf() function and its format specifiers
 * - Learning how to handle different data types from user input
 * - Managing input buffer issues (leftover newlines and whitespace)
 * - Using advanced scanf() patterns for string input with spaces
 * - Understanding the difference between scanf() and fgets() for strings
 */

#include <stdio.h>   // Standard input/output library for printf(), scanf()
#include <string.h>  // String manipulation library for strlen()

int main(){

    // VARIABLE DECLARATIONS
    // Initialize variables to store different types of user input
    int age = 0;            // Integer for age (initialized to 0)
    float gpa = 0.0f;       // Float for GPA (initialized to 0.0)
    char grade = '\0';      // Character for grade (initialized to null character)
    char name[50] = "";     // String array for name (initialized to empty string)

    // READING INTEGER INPUT
    // scanf() reads formatted input from the user
    printf("Enter your age: ");
    scanf("%d", &age);      // %d reads a decimal integer
                           // &age gives the memory address where to store the value

    // READING FLOATING-POINT INPUT
    printf("Enter your GPA: ");
    scanf("%f", &gpa);      // %f reads a floating-point number
                           // &gpa gives the memory address for the float variable

    // READING SINGLE CHARACTER INPUT
    // IMPORTANT: Space before %c is crucial!
    // The space consumes any leftover whitespace (including newline) from previous input
    // Without it, scanf might read the newline character instead of waiting for new input
    printf("Enter your grade (A, B, C, etc.): ");
    scanf(" %c", &grade);   // Space before %c skips whitespace, then reads one character

    // READING STRING INPUT WITH SPACES
    // METHOD 1: Using advanced scanf() pattern
    // %[^\n] reads everything until it encounters a newline character
    // This allows spaces within the string, unlike %s which stops at first whitespace
    // The space before %[^\n] skips any leftover whitespace from previous input
    printf("Enter your name: ");
    scanf(" %[^\n]", name); // Reads entire line including spaces until newline
    
    // ALTERNATIVE METHOD: Using fgets() (commented out)
    // fgets(name, sizeof(name), stdin); // More robust for string input
    // fgets() is often preferred because:
    // - It's safer (prevents buffer overflow)
    // - It includes the newline in the string
    // - It's more predictable with whitespace handling

    // If using fgets(), you'd need to remove the trailing newline:
    // name[strlen(name) - 1] = '\0'; // Remove newline character if fgets was used

    // DISPLAYING THE COLLECTED INPUT
    // Show all the values that were entered by the user
    printf("\n--- INPUT SUMMARY ---\n");
    printf("Age: %d years old\n", age);           // Display integer with descriptive text
    printf("GPA: %.2f\n", gpa);                   // Display float with 2 decimal places
    printf("Grade: %c\n", grade);                 // Display single character
    printf("Name: %s\n", name);                   // Display string

    // ADDITIONAL INPUT VALIDATION NOTES:
    // In real programs, you should validate input:
    // - Check if scanf() successfully read the expected data type
    // - Handle cases where user enters invalid data (letters when expecting numbers)
    // - Ensure strings don't exceed array bounds
    // - Clear input buffer if errors occur

    return 0;  // Return 0 to indicate successful program execution
}