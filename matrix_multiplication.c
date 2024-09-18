#include <stdio.h>
#define SIZE 4

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], result[SIZE][SIZE];

    // Taking the inputs from users to create matrix1
    printf("Provide Elements for matrix1:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix1[i][j]); // Corrected the scanf to use matrix1[i][j]
        }
    }

    // Taking inputs from users to populate matrix2
    printf("Provide Elements for matrix2:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            scanf("%d", &matrix2[i][j]); // Corrected the scanf to use matrix2[i][j]
        }
    }

    // Initializing the result matrix to 0
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
        }
    }

    // Multiplying matrix1 and matrix2 and adding them together
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j]; // Fixed variable name 'resul12t' to 'result'
            }
        }
    }

    // Printing the result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d\t", result[i][j]); // Removed '&' from result[i][j]
        }
        printf("\n"); // Added new line after each row
    }

    return 0;
}
