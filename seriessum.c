#include <stdio.h>

int main() {
    int n, sum = 0;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check for valid input
    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    // Calculate the sum using a loop
    for (int i = 1; i <= n; i++) {
        sum += i; // Add each number to sum
    }

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; // Successful execution
}
