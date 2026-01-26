#include<stdio.h>
#include<stdlib.h> 


void horner_operation(int coffs[],int degree,int variable){
    int result = coffs[0]*variable+coffs[1];
    for(int i=2;i<degree+1;i++){
        result= result*variable+coffs[i];
    }
    
    printf("After evaluting the polynoimial with Horner's rule, the final outcome is: %d\n",result);
    
}

int main(){
    int coffs[] ={8,5,4,3,1};
    int degree = 4;
    int variable = 2;
    
    horner_operation(coffs,degree,variable);
    
    return 0;
    
}

