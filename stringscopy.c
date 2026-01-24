#include<stdio.h>

int main(){
    char string1[] = "Hello!";
    char string2[] = " World!";
    printf("Original String 1L:%s\n",string1);
    printf("String2 : %s\n",string2);
    int len1 = sizeof(string1)/sizeof(string1[0]);
    int len2 = sizeof(string2)/sizeof(string2[0]);
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            string1[i] = string2[i];
        }
    }
    
    printf("After Copying String2 and Pasting it on String 1, the result: \n");
    printf(string1);
    
    return 0;
}
