#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 100

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    char temp[MAX_LENGTH];

    // Input strings from the user
    printf("Enter %d strings:\n", MAX_STRINGS);
    for (int i = 0; i < MAX_STRINGS; i++) {
        printf("String %d: ", i + 1);
        fgets(strings[i], MAX_LENGTH, stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0'; // Remove newline
    }

    // Sort the strings using bubble sort
    for (int i = 0; i < MAX_STRINGS - 1; i++) {
        for (int j = i + 1; j < MAX_STRINGS; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                // Swap strings
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    // Display sorted strings
    printf("\nStrings in alphabetical order:\n");
    for (int i = 0; i < MAX_STRINGS; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
