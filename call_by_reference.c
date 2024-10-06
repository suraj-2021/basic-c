#include<stdio.h>


int add(int *a){
     *a= *a+2;
     return printf("Inside the function the value of a is : %d\n",*a);
    
}

int main(){
    int a;
    printf("Give me a random Integer: ");
    scanf("%i",&a);
    
    add(&a);
    
    printf("The value of a after passing to the function:%d\n",a);
    
}
