#include <stdio.h>

#define SIZE 3

// Function to multiply two matrices
void multiplyMatrices(int firstMatrix[SIZE][SIZE], int secondMatrix[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0; // Initialize the result matrix
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

// Function to add two matrices
void addMatrices(int firstMatrix[SIZE][SIZE], int secondMatrix[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
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

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE], tempResult[SIZE][SIZE], D[SIZE][SIZE];

    // Input for matrix A
    printf("Enter elements of matrix A (3x3):\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &A[i][j]);

    // Input for matrix B
    printf("Enter elements of matrix B (3x3):\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &B[i][j]);

    // Input for matrix C
    printf("Enter elements of matrix C (3x3):\n");
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &C[i][j]);

    // Multiply A and B, store the result in tempResult
    multiplyMatrices(A, B, tempResult);

    // Add tempResult and C, store the result in D
    addMatrices(tempResult, C, D);

    // Print the resulting matrix D
    printf("Resulting matrix D = (A * B) + C:\n");
    printMatrix(D);

    return 0;
}
