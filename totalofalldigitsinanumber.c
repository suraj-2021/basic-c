#include<stdio.h>
#define MAX 5

int main(){
    int digits[5];
    int digit;
    int value;
    int total;
    printf("Provide a digit: ");
    scanf("%d",&digit);
    
    for(int i=0;i<MAX;i++){
        value = digit %10;
        digit = digit/10;
        digits[i] = value;
        }
        

    for(int i=0;i<5;i++){
        total += digits[i];
    }
    
    printf("Total: %d\n",total);
    return 0;
}
