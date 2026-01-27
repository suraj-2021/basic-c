#include<stdio.h>
#include<stdlib.h>


int main(){
    int data[] = {1,3,5,7,9,11,13,15,19,20};
    int n = sizeof(data)/sizeof(data[0]);
    
    int loop_count =0;
    int operation_count =0;
    int index;
    
    for(int i=0;i<n;i++){
        if(data[i]%2==0){
            index =i;
            loop_count++;
            operation_count++;
        }
        loop_count++;
        operation_count++;
    }
    printf("The loop count: %d\n",loop_count);
    printf("The Operation Count: %d\n",operation_count);
    printf("The index of the last even entity is: %d\n",index);
    
    return 0;
}
