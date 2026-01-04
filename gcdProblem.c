#include<stdio.h>

int gcd(int a,int b){
    int temp;
    int count =0;
    while(b!=0){
        temp = b;
        b = a%b;
        a = temp;
        count++;
    }
    printf("The gcd is %d\t",a);
    return count*3;
    
}


int main(){
    int a=10;
    int b=2;
    
    int count = gcd(a,b);
    printf("Count: %d\n",count);
}
