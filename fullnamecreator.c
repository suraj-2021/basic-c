#include<stdio.h>
#include<string.h>

int stringcat(char first[], char second[]){
    int  len=0;
    int i=0;
     while(first[len] != '\0'){
         len++;
     }
     
     while(second[i] !='\0'){
         first[len] = second[i];
         
         len++;
         i++;
         }
    
    printf("Your Full Name is : %s\n",first);
    
    return 0;
}


int main(){
    char first[100];
    char second[50];
    
    printf("Provide First Name: ");
    scanf("%[^\n]%*c",first);
    
    printf("Provide Second Name: ");
    scanf("%[^\n]%*c",second);
    
    stringcat(first,second);
    
    return 0;
    
}
    
