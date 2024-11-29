#include<stdio.h>

int main(){
    int arr[10];
    int num;
    int found=0;
    printf("Provide 10 numbers: ");
    for(int i=0;i<10;i++){
        printf("Provide number index[%d]",i+1);
        scanf("%i",&arr[i]);
    }
    
    printf("Which number you want to search?:  ");
    scanf("%d",&num);
    
    for(int i=0;i<10;i++){
        if(arr[i]==num){
            printf("Number found! the square of the provided number (%d) is : %d",num,arr[i]*arr[i]);
            
            found = 1;
        }
    }
    if(!found){
        printf("Number not found!");
    }
    return 0;
    
}
