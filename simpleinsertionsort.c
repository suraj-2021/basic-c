#include<stdio.h>

void insertionsort(int arr[], int n){
    int i,key,j;
    
    for(i=1;i<n;i++){
        key = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
} 

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

//main driver function

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = 9;
    
    printf("Original Array: ");
    print(arr,n);
    printf("Sorted Array: ");
    insertionsort(arr,n);
    print(arr,n);
    
    return 0;
}
