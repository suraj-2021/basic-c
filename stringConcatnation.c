#include<stdio.h>

void concatnate(char *arr1, char *arr2){
    int iLength =0;
    int jLength =0;
    
    while(arr1[iLength]!='\0'){
        iLength++;
    }
    
    while(arr2[jLength]!='\0'){
        arr1[iLength] = arr2[jLength];
        iLength++;
        jLength++;
    }
    
    arr1[iLength] ='\0';
}


int main(){
    char arr1[100];
    char arr2[50];
    
    printf("Provide the first String:  ");
    scanf("%[^\n]%*c",arr1);
    
    printf("Provide the second String:  ");
    scanf("%[^\n]%*c",arr2);
    
    printf("First String: %s\n",arr1);
    printf("Second String: %s\n",arr2);
    
    concatnate(arr1,arr2);
    
    printf("Concatnated String is : %s\n",arr1);
    
    return 0;
}
