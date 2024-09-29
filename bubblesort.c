#include<stdio.h>

int main(){
    int arr[10],i,j,temp;
    
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    
    
    //bubble sorting operation
    
    for(i=0;i<10-1;i++){
        for(j=0;j<10-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =temp;
                
            };
        };
    };
    //print the sorted values
    for(i=0;i<10;i++){
        printf("%d\t",arr[i]);
    }
}
