#include<stdio.h>

#define CUBE(x) ((x)*(x)*(x))

int main(){
    int in;
    printf("Provide the number you want to cube: ");
    scanf("%i",&in);
    //Printing the cubed number using the macro!
    printf("The cubed number is :%i",CUBE(in));
    
}
