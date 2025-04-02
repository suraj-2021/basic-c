#include <stdio.h>

// Merges two sorted subarrays into one sorted array
void merge(int arr[], int left, int mid, int right) {
    int temp[right - left + 1]; // Temporary array to store merged result
    int i = left;    // Starting index of left subarray
    int j = mid + 1; // Starting index of right subarray
    int k = 0;       // Index for temp array

    // Compare elements from both halves and merge in sorted order
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    // Copy remaining elements from left half (if any)
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements from right half (if any)
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy merged elements back to original array
    for (int x = 0; x < k; x++) {
        arr[left + x] = temp[x];
    }
}

// Recursive function to sort array using merge sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;

        // Sort first half
        mergeSort(arr, left, mid);

        // Sort second half
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Helper function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {12, 5, 2, 15, 25, 30, 45, 8, 17, 50, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}
