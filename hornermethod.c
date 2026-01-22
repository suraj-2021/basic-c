#include<stdio.h>

double horner_method(double coffs[],int degree,double x){
       
       double result = coffs[0];
       int loop_count =0;
       
       for(int i=1;i<=degree;i++){
           result = result*x+coffs[i];
           loop_count++;
       }
       
       printf("The total time the loop ran was: %d\n",loop_count);
       return result;
}

int main(){
    double coffs[] = {4.0,3.0,2.0,1.0,0.0};
    int degree=5;
    double x = 2.0;
    
    double result = horner_method(coffs,degree,x);
    
    printf("The result is : %.2f\n",result);
    return 0;
    
}
