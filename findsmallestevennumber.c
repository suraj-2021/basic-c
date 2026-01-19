#include<stdio.h>
#include<stdlib.h> 

int main(){
    int n;
    printf("How many integers are there?:");
    scanf("%d",&n);
    int arr[n];
    int evens=0;
    int j=0;
    for(int i=0;i<n;i++){
        printf("Provide the element at index %d\n: ",i);
        scanf("%d",&arr[i]);
    }
    //loop to count evens in the array
    for(int i=0;i<n;i++){
        if((arr[i]%2) == 0){
            evens++;
        }
    }
    
    //creating array of even numbers 
    int evenarr[evens];
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
        evenarr[j]=arr[i];
        j++;
    }
    }
    //sorting the elements in the evenarr with bubble sort 
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(evenarr[j]>evenarr[j+1]){
                int temp = evenarr[j];
                evenarr[j] = evenarr[j+1];
                evenarr[j+1] = temp;
            }
        }
    }
    
    //printing the smallest even element in the input list
    printf("The smallest even element in the input array is: %d\n",evenarr[0]);
    
    }
