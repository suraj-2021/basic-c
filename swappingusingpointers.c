#include<stdio.h>

void swap(int *a,int *b);

int main(){
    int a=5;
    int b=10;
    
    printf("Before swapping value: \n");
    
    printf("Value of A: %d\n",a);
    printf("Values of B: %d\n",b);
    
    swap(&a,&b);
    
    printf("After swapping the value: \n");
    printf("Value of A: %d\n",a);
    printf("Values of B: %d\n",b);
    
}

void swap(int *a,int *b){
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
}
