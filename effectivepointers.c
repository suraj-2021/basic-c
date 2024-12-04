#include <stdio.h>
#include <stdlib.h>

// Function to input elements into the array
void inputArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", (arr + i)); // Using pointer arithmetic
    }
}

// Function to print the array
void printArray(int *arr, int size) {
    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i)); // Using pointer dereferencing
    }
    printf("\n");
}

// Function to sort the array using pointers (Bubble Sort)
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap using pointers
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamic memory allocation for the array
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input, sort, and display the array
    inputArray(arr, size);
    printf("Original ");
    printArray(arr, size);

    sortArray(arr, size);
    printf("Sorted ");
    printArray(arr, size);

    // Free the allocated memory
    free(arr);
    return 0;
}
