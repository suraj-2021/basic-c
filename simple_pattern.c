#include<stdio.h>

int main(){
    char infin[9]="INFINITY";
    int length = sizeof(infin);
    
    for(int i=0;i<length;i++){
        for(int j=0;j<i;j++){
            printf("%c",infin[j]);
        }
       printf("\n");
    }
  return 0;
}
