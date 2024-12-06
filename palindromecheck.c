#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
void isPalindrome(char *str) {
    char *start = str; // Pointer to the start of the string
    char *end = str + strlen(str) - 1; // Pointer to the end of the string

    // Run the loop until both pointers meet
    while (start < end) {
        // If characters don't match, it's not a palindrome
        if (*start != *end) {
            printf("\"%s\" is not a palindrome.\n", str);
            return;
        }
        start++; // Move start pointer forward
        end--;   // Move end pointer backward
    }
    // If all characters match, it's a palindrome
    printf("\"%s\" is a palindrome.\n", str);
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input string

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    isPalindrome(str); // Check if the input string is a palindrome

    return 0;
}
