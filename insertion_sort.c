#include<stdio.h>

void insertionSort(int arr[],int n){
    int i,key,j;
    
    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j -=1;
        }
        
        arr[j+1] = key;
        
    }
}
//utility fuction to print array! 

void printArray(int array[],int n){
     for(int i=0;i<n;i++){
         printf("%d  ",array[i]);
     }
     printf("\n");
}

int main(){
    printf("How many elements are ther in your Array?: ");
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        printf("Element at index %d? ",i);
        scanf("%d",&array[i]);
    }
    
    printf("Original Array: ");
    printArray(array,n);
    
    insertionSort(array,n);
    printf("Sorted Array: ");
    printArray(array,n);
    
    return 0;
}

