#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


void selectionSort(int arr[],int n){
    int i,min,j;
    
    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}

//main 

int main(){
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    selectionSort(arr,n);
    
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
