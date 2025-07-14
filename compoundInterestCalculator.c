#include <stdio.h>  // Standard input/output library for printf(), scanf()
#include <math.h>   // Math library for mathematical functions like sqrt(), pow()

int main() {

    //------***COMPOUND INTEREST CALCULATOR***------

    double principal = 0.0; // Initial amount of money (principal)
    double rate = 0.0;      // Annual interest rate (as a percentage)
    int years = 0;        // Number of years the money is invested or borrowed
    int timesCompounded = 0; // Number of times interest is compounded per year
    double total = 0.0; // Total amount after interest is applied

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (p): ");
    scanf("%lf", &principal); // Read the principal amount (using %lf for double)

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate); // Read the interest rate (using %lf for double)
    rate = rate / 100; // Convert percentage to decimal

    printf("Enter the # of years (t): ");
    scanf("%d", &years); // Read the number of years (using %d for integer)

    printf("Enter # of times compounded per year (n): ");
    scanf("%d", &timesCompounded); // Read the number of times interest is compounded

    total = principal * pow(1 + rate / timesCompounded, timesCompounded * years); // Calculate total amount using compound interest formula

    printf("After %d years, the total will be: $%.2lf\n", years, total); // Display the total amount with 2 decimal places

    return 0; // Return 0 to indicate successful program execution
}