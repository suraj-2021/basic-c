#include <stdio.h>

void decimalToBinary(int num) {
    int binary[32];  // Array to store binary digits
    int i = 0;

    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;  // Store remainder
        num = num / 2;        // Update the number
        i++;
    }

    // Print the binary number in reverse order
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimalToBinary(decimal);

    return 0;
}
