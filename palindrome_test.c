#include<stdio.h>

int ispalindrome(char *str){
    char *start = str;
    char *end = str;
    
    while(*end!='\0'){
        end++;
    }
    end--;
    
    while(*start<*end){
        if(*start!=*end){
            return 0;
        }
        end--;
        start++;
    }
    return 1;
    
}

int main(){
    char arr[100];
    printf("Give me a string to check if it's a palindrome: ");
    scanf("%s",arr);
    
    if(ispalindrome(arr)){
        printf("This is a palindrome!");
        
    }
    else{
        printf("This is not a plaindrome!");
    }
    return 0;
}
