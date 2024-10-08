#include <stdio.h>

#define SIZE 6

// Function to multiply two matrices
void multiplyMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0; // Initialize the result cell
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to add two matrices
void addMatrices(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to input a matrix from the user
void inputMatrix(int matrix[SIZE][SIZE], char name) {
    printf("Enter elements of matrix %c (%dx%d):\n", name, SIZE, SIZE);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int A[SIZE][SIZE]; // Matrix A
    int B[SIZE][SIZE]; // Matrix B
    int C[SIZE][SIZE]; // Matrix C
    int AB[SIZE][SIZE]; // To store the result of A * B
    int D[SIZE][SIZE]; // To store the final result D = (A * B) + C

    // Input matrices A, B, and C from the user
    inputMatrix(A, 'A');
    inputMatrix(B, 'B');
    inputMatrix(C, 'C');

    // Multiply A and B
    multiplyMatrices(A, B, AB);

    // Add AB and C to get D
    addMatrices(AB, C, D);

    // Print the resulting matrix D
    printf("Resulting Matrix D:\n");
    printMatrix(D);

    return 0;
}
