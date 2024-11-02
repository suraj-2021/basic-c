
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, MAX_LENGTH, stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Calculate the length of the string
    int length = strlen(str);

    // Print the string in reverse
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
