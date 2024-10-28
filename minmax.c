#include <stdio.h>

int main() {
    int n, i;
    
    // Asking the user for the array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Getting the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initializing min and max with the first element of the array
    int min = arr[0];
    int max = arr[0];
    
    // Finding the minimum and maximum values
    for(i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Displaying the result
    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
    
    return 0;
}
