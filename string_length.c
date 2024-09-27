#include<stdio.h>

int stringLength(char *str){
    
    char *ptr = str;
    int length=0;
    
    while(*ptr =='\0'){
        ptr++;
        length++;
    }
    return length;
}

int main(){
    char arr[100];
    printf("Give me the String: ");
    scanf("%[^\n]%*c",arr);
    
    //printing the length 
    printf("%i",stringLength(arr));
    
    return 0;
}
