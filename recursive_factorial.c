#include<stdio.h>

int factorial(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int num;
    
    printf("Provide the number you want to find the factorial: ");
    scanf("%d",&num);
    
    if(num<1 || num>10){
        printf("Invalid number range, submit again!");
    }
    else{
        int result = factorial(num);
        printf("The factorial of the number %d is:  %d\n",num, result);
    }
   return 0; 
}
