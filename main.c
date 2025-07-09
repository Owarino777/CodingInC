/*
 * BASIC C PROGRAM - HELLO WORLD WITH COMMENTS
 * 
 * This is a fundamental C program that demonstrates:
 * 1. Basic program structure (includes, main function, return statement)
 * 2. Different types of comments (single-line and multi-line)
 * 3. Simple output using printf()
 * 4. Escape sequences (\n for newline)
 * 
 * Learning objectives:
 * - Understanding the basic structure of a C program
 * - Learning how to write comments for code documentation
 * - Using printf() for console output
 * - Understanding escape sequences
 */

#include <stdio.h>  // Standard input/output library - needed for printf()

int main(){  // Main function - entry point of every C program

    // Single-line comment: This type of comment is used for brief explanations
    // Everything after "//" on the same line is ignored by the compiler

    /*
     * Multi-line comment: This type of comment spans multiple lines
     * It starts with "/*" and ends with */
     
     /* Useful for longer explanations, program descriptions, or temporarily
     * disabling blocks of code during development and debugging
     */

    // Output text to the console using printf()
    printf("I like Pizza!\n");        // \n creates a new line after the text
    printf("It's really good!");      // This text will appear on the next line
    
    return 0;  // Return 0 to indicate successful program execution to the operating system
}