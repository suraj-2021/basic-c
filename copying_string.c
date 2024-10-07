#include<stdio.h>

void stringcopy(char *source, char *destination){
    int length =0;
    while(*source !='\0'){
        *destination=*source;
         destination++;
         source++;
         length++;
    }
    printf("The length of the copied string is: %d\n",length);
}

int main(){
    char source[100],destination[100];
    
    printf("Provide a string: ");
    scanf("%[^\n]%*c",source);
    
    stringcopy(source,destination);
    
    printf("The copied string is : %s\n",destination);
}
