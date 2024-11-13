#include <stdio.h>
#include <ctype.h> // For using the tolower() function

void countVowels(const char str[]) {
    int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;
    int index = 0;

    // Loop through each character of the string
    while (str[index] != '\0') {
        char ch = tolower(str[index]); // Convert character to lowercase for case insensitivity

        // Count vowels
        switch (ch) {
            case 'a':
                aCount++;
                break;
            case 'e':
                eCount++;
                break;
            case 'i':
                iCount++;
                break;
            case 'o':
                oCount++;
                break;
            case 'u':
                uCount++;
                break;
        }
        index++;
    }

    // Display the count of each vowel
    printf("Count of 'a': %d\n", aCount);
    printf("Count of 'e': %d\n", eCount);
    printf("Count of 'i': %d\n", iCount);
    printf("Count of 'o': %d\n", oCount);
    printf("Count of 'u': %d\n", uCount);
}

int main() {
    char str[100];

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Call the function to count vowels
    countVowels(str);

    return 0;
}
