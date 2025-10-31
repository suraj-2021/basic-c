#include<stdio.h> 
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int array[], int n){
    int i,min,j;
    
    for (i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if (array[j]<array[min]){
                min = j;
            }
        }
        swap(&array[i],&array[min]);
    }
}

//utitlity funtion to print the array. 

void printArray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d  ",array[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("No of elements?: ");
    scanf("%d",&n);
    int array[n];
    
    for(int i=0;i<n;i++){
        printf("Element at index %d?  ",i);
        scanf("%d",&array[i]);
    }
    
    printf("Unsorted Array: ");
    printArray(array,n);
    selectionSort(array,n);
    printf("Sorted Array: ");
    printArray(array,n);
    
    return 0;
}
