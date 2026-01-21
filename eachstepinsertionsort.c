/*Use Insertion Sort algorithm to sort the following list showing the list obtained 
at each step : 
20 10 5 7 3 30 40 15 
Calculate how many swap operations and the loop will execute. */

#include<stdio.h> 

void printarray(int array[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
    }
    printf("\n");
}


void insertionsort(int array[],int n){
    int i,key,j;
    
    for(int i=0;i<n;i++){
        key = array[i];
        j=i-1;
        
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
        printf("After swapping the %d with %d, the state of the array: ",array[j],key);
        printarray(array,n);
    }
}


int main(){
    int array[10]={0,9,8,7,6,5,4,3,2,1};
    int n=10;
    
    insertionsort(array,n);
    
    printf("Final Sorted Array: ");
    printarray(array,n);
    
    return 0;
}
