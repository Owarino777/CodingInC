#include <stdio.h>  // Standard input/output library for printf(), scanf()
#include <math.h>   // Math library for mathematical functions like sqrt(), pow()

int main() {

    //------***CIRCLE CALCULATOR PROGRAM***------

    // Variable declarations
    double radius = 0.0; // Radius of the circle (floating-point number)
    double area = 0.0;   // Area of the circle (floating-point number)
    double surfaceArea = 0.0; // Surface area of the circle (floating-point number)
    double volume = 0.0; // Volume of the circle (floating-point number)
    double PI = 3.14159; // Value of π (pi) with high precision

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius); // Read the radius from user input (using %lf for double)

    //area = PI * radius * radius; // Calculate the area using the formula A = πr²
    area = PI * pow(radius, 2); // Calculate the area using the pow() function for better readability
    surfaceArea = 2 * PI * radius; // Calculate the surface area using the formula SA = 2πr
    surfaceArea = 4 * PI * pow(radius, 2); // Calculate the surface area of a sphere
    volume = (4.0 / 3.0) * PI * pow(radius, 3); // Calculate the volume using the formula V = (4/3)πr³


    printf("Area: %.2lfcm\n", area); // Print the area of the circle with default precision
    printf("Surface Area: %.2lfcm\n", surfaceArea); // Print the surface area of the circle with default precision
    printf("Volume: %.2lfcm\n", volume); // Print the volume of the circle with default precision


    return 0; // Return 0 to indicate successful program execution
}
    