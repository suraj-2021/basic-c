#include<stdio.h>
#include<stdlib.h> 

int main(){
    //creating an array 
    int numbers[9]={9,8,7,6,5,4,3,2,1};
    
    //sorting the array in deceding order using bubble sort 
    for(int i= 0;i<9-1;i++){
        for(int j=0;j<9;j++){
            if(numbers[j]>numbers[j+1]){
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
    
    //printing the second largest and second smallest numbers from the sorted array 
    printf("Second Largest: %d\n",numbers[7]);
    printf("Second Smallest: %d\n",numbers[1]);
    
    return 0;
    
}
