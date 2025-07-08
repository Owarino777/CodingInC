#include <stdio.h>

int main(){

    // Format specifier = Special token that begin with a % symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    They control how data is displayed or interpreted.

/******************************************************************************/
    int age = 25;
    float price = 19.99;
    double pi = 3.14159265;
    char currency = '$';
    char name[] = "Owarino";

    // printf("%d\n", age); // %d = decimal integer
    // printf("%f\n", price); // %f = float (default 6 decimal places)
    // printf("%lf\n", pi); // %lf = double (default 6 decimal places)
    // printf("%c\n", currency); // %c = character
    // printf("%s\n", name); // %s = string (character array)

/******************************************************************************/

    // width = Minimum number of characters to display

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;
    
    // printf("%+4d\n", num1); // 1 is displayed as "  1" (2 spaces before)
    // printf("%+4d\n", num2); // 10 is displayed as " 10" (1 space before)
    // printf("%+4d\n", num3); // 100 is displayed as "100"

/******************************************************************************/

    // precision = Number of decimal places for floating-point numbers

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    // printf("%.2f\n", price1); // 19.99 is displayed as "19.99"
    // printf("%.2f\n", price2); // 1.50 is displayed as "1.50"
    // printf("%.2f\n", price3); // -100.00 is displayed as "-

/******************************************************************************/

    // flags = Special characters that modify the output format

    int num4 = 42;
    int num5 = -7;

    // printf("%+d\n", num4); // +42 (shows sign for positive numbers)
    // printf("%+d\n", num5); // -7 (shows sign for negative numbers

/******************************************************************************/

    // arithmetic operators = Used to perform mathematical operations

    int x = 10;
    int y = 3;
    int z = 0;

    //z = x + y; // addition
    //z = x - y; // subtraction
    //z = x * y; // multiplication
    //z = x / y; // division (integer division, result is 0)
    //z = x % y; // modulus (remainder of division)

    //x++; // increment x by 1
    //y--; // decrement y by 1
    // x+=5; // add 5 to x
    // y-=2; // subtract 2 from y
    // z*= 2; // multiply z by 2
    // z/= 3; // divide z by 3

    printf("%d", z);

/******************************************************************************/

    return 0;
}