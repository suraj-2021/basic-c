#include <stdio.h>

int main() {
    char source[100];       // Source string
    char destination[100];  // Destination string
    int i;

    // Prompt user for input
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin); // Read string input

    // Remove newline character if present
    for (i = 0; source[i] != '\0'; i++) {
        if (source[i] == '\n') {
            source[i] = '\0'; // Replace newline with null terminator
            break;
        }
    }

    // Copy characters from source to destination
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    
    // Add null terminator to the end of the destination string
    destination[i] = '\0';

    // Print both strings
    printf("Source string: %s\n", source);
    printf("Destination string: %s\n", destination);

    return 0;
}
