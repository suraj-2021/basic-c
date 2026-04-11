#include<stdio.h>
#include<math.h>
int main(){
    double x;
    double term = 1.0;
    double sum = 1.0;
    
    int n =1;
    printf("Provide the angle in radians: ");
    scanf("%lf",&x);
    
    do{
        term = term * (-1*(x*x)/(((2*n)-1)*(2*n)));
        sum = sum+term;
        
        n++;
    }while(fabs(term)>=0.0001);
    
    printf("The result is: %.4f\n",sum);
    
}
