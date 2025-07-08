#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[50] = "";

    // Prompt user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    // Space before %c consumes any leftover whitespace (including newline) from previous input
    printf("Enter your grade (A, B, C, etc.): ");
    scanf(" %c", &grade);

    // For string input with spaces, we use %[^\n] which reads until newline
    // The space before %[^\n] skips any leftover whitespace from previous input
    // Unlike %s which stops at first whitespace, %[^\n] captures the entire line
    printf("Enter your name: ");
    scanf(" %[^\n]", name);
    // or fgets(name, sizeof(name), stdin); // Alternative using fgets

    name[strlen(name) - 1] = '\0'; // Remove newline character if fgets was used

    // Display the input values
    printf("You entered:\n");
    printf("%d\n", age);
    printf("%f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}