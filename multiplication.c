#include <stdio.h>

// Function to multiply two 3x3 matrices
void multiplyMatrices(int matrixA[3][3], int matrixB[3][3], int result[3][3]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (k = 0; k < 3; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
}

// Function to add two 3x3 matrices
void addMatrices(int matrixA[3][3], int matrixB[3][3], int result[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

// Function to print a 3x3 matrix
void printMatrix(int matrix[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrixA[3][3], matrixB[3][3], matrixC[3][3], product[3][3], result[3][3];

    // Input matrix A
    printf("Enter elements of matrix A (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }

    // Input matrix B
    printf("Enter elements of matrix B (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }

    // Input matrix C
    printf("Enter elements of matrix C (3x3):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrixC[i][j]);
        }
    }

    // Multiply A and B
    multiplyMatrices(matrixA, matrixB, product);

    // Add product and C
    addMatrices(product, matrixC, result);

    // Print result
    printf("Matrix A:\n");
    printMatrix(matrixA);
    printf("Matrix B:\n");
    printMatrix(matrixB);
    printf("Matrix C:\n");
    printMatrix(matrixC);
    printf("Result D = (A * B) + C:\n");
    printMatrix(result);

    return 0;
}
