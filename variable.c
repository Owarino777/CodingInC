#include <stdio.h>
#include <stdbool.h>

int main(){
    // variale = A reusable container for a value.
    //           Behaves as if it where the value it contains. 

    // int = whole number (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (string and size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)
/************************************************************/
    int age = 25; // integer variable
    int year = 2025;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

/************************************************************/

    float gpa = 2.5; // float variable
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %f\n", gpa);
    printf("The price is $%.2f\n", price);
    printf("The temperature is %.1f°C \n", temperature);

/************************************************************/

    double pi = 3.141592653589793; // double variable
    double e = 2.718281828459045;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);

/************************************************************/

    char grade = 'A'; // char variable
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

/************************************************************/

    char name[] = "Owarino"; // string variable
    char food[] = "Pizza";
    char email[] = "fake123@gmail.com";

    printf("Hello, %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);

/************************************************************/

    bool isOnline = true; // boolean variable
    bool isStudent = true;
    bool forSale = false;

    printf("%d\n", isOnline); // prints 1 for true, 0 for false

    if(isOnline){
        printf("You are online!\n");
    } else {
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

    return 0; // return statement
}