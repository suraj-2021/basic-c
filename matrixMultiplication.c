#include <stdio.h>

#define SIZE 3  // Define size of matrix as 3x3

void readMatrix(int matrix[SIZE][SIZE], char name) {
    printf("Enter the elements of matrix %c (3x3):\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c[%d][%d] = ", name, i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[SIZE][SIZE], char name) {
    printf("Matrix %c:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0; // Initialize the result element
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += A[i][k] * B[k][j];  // Matrix multiplication
            }
        }
    }
}

void addMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] + B[i][j];  // Matrix addition
        }
    }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE], D[SIZE][SIZE], temp[SIZE][SIZE];

    // Read matrices A, B, and C
    readMatrix(A, 'A');
    readMatrix(B, 'B');
    readMatrix(C, 'C');

    // Calculate A * B and store it in temp
    multiplyMatrices(A, B, temp);

    // Calculate (A * B) + C and store it in D
    addMatrices(temp, C, D);

    // Print matrices A, B, C, and D
    printMatrix(A, 'A');
    printMatrix(B, 'B');
    printMatrix(C, 'C');
    printMatrix(D, 'D');  // Resultant matrix D = (A * B) + C

    return 0;
}
