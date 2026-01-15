#include<stdio.h>
#include<stdlib.h>
int main(){
    char str1[] = "hello, ";
    char str2[] = "world!";
    char* result = malloc(13*sizeof(char));
    int loop_count = 0;
    int len1 = 7;
    int len2 = 6;
    int k =0;
    for(int i=0;i<len1;i++){
        result[k] = str1[i];
        k++;
    }
    
    for(int i=0;i<len2;i++){
        result[k] = str2[i];
        k++;
    }
    
    printf("Strings Before concatnation: ");
    printf("String 1: ");
    for(int i=0;i<len1;i++){
        printf("%c",str1[i]);
    }
    
    printf("String 2: ");
    for(int i=0;i<len2;i++){
        printf("%c",str2[i]);
    }
    
    printf("Strings after concatnation: ");
    printf("Result: ");
    for(int i=0;i<len1+len2;i++){
        printf("%c",result[i]);
    }
    
    
    return 0;
}
