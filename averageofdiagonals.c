#include <stdio.h>

#define SIZE 6

int main() {
    int m[SIZE][SIZE]; // Matrix
    int pdSum = 0, sdSum = 0; // Primary and Secondary Diagonal Sums
    float pdAvg, sdAvg; // Averages

    // Input the elements of the matrix
    printf("Enter the elements of a 6x6 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    // Calculate sums of the diagonals
    for (int i = 0; i < SIZE; i++) {
        pdSum += m[i][i]; // Primary diagonal
        sdSum += m[i][SIZE - 1 - i]; // Secondary diagonal
    }

    // Calculate averages
    pdAvg = pdSum / (float)SIZE;
    sdAvg = sdSum / (float)SIZE;

    // Output the results
    printf("Primary Diagonal Sum: %d\n", pdSum);
    printf("Secondary Diagonal Sum: %d\n", sdSum);
    printf("Average of Primary Diagonal: %.2f\n", pdAvg);
    printf("Average of Secondary Diagonal: %.2f\n", sdAvg);

    return 0;
}
