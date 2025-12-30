#include<stdio.h>
#include<stdlib.h>

double average(int arr[],int n){
    double sum=0.0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}

void main(){
    int arr1[]={5,7,9,11,13};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {2.5,5.7,8.9,7.7};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    
    printf("Array1 Average: %.2f\n",average(arr1,size1));
    printf("Arr2 Average: %.2f\n",average(arr2,size2));
}
