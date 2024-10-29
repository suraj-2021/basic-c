#include <stdio.h>

// Function to print a star pattern
void printStarPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

// Function to print a number pattern
void printNumberPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

// Function to print a pyramid pattern
void printPyramidPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("\nStar Pattern:\n");
    printStarPattern(n);

    printf("\nNumber Pattern:\n");
    printNumberPattern(n);

    printf("\nPyramid Pattern:\n");
    printPyramidPattern(n);

    return 0;
}
