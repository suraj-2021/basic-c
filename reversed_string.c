#include <stdio.h>

int main() {
    char str[100];  
    int length = 0; 

    // Taking input
    printf("Enter a string: ");
    scanf("%s", str); // Reading the string until a newline is encountered

    // Finding the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Printing the string in reverse order
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
