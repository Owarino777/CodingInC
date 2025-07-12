#include <stdio.h>  // Standard input/output library for printf(), scanf()
#include <string.h> // String manipulation library for strlen()

int main() {

    //------***MAD LIBS GAME***------

    // Variable declarations
    char noun[50] = "";       // Array to store the noun (up to 49 characters + null terminator)
    char verb[50] = "";       // Array to store the verb (up to 49 characters + null terminator)
    char adjective1[50] = "";  // Array to store the adjective (up to 49 characters + null terminator)
    char adjective2[50] = "";  // Array to store the second adjective (up to 49 characters + null terminator)
    char adjective3[50] = "";  // Array to store the third adjective (up to 49 characters + null terminator)


    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin); // Read a line of text including spaces
    adjective1[strlen(adjective1) - 1] = '\0'; // Remove newline character if present

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin); // Read a line of text including spaces
    noun[strlen(noun) - 1] = '\0'; // Remove newline character if present

    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin); // Read a line of text including spaces
    adjective2[strlen(adjective2) - 1] = '\0'; // Remove newline character if present

    printf("Enter a verb (ending w/ -ing): ");
    fgets(verb, sizeof(verb), stdin); // Read a line of text including spaces
    verb[strlen(verb) - 1] = '\0'; // Remove newline character if present

    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin); // Read a line of text including spaces
    adjective3[strlen(adjective3) - 1] = '\0'; // Remove newline character if present

    // printf("%s\n", noun);
    // printf("%s\n", verb);
    // printf("%s\n", adjective1);
    // printf("%s\n", adjective2);
    // printf("%s\n", adjective3);

    printf("\nToday I went to a %s zoo.\n", adjective1);
    printf("In a exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adjective2, verb);
    printf("It was %s!\n", adjective3);

    return 0; // Indicate successful program execution
}