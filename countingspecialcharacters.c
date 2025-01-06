#include<stdio.h>

int main(){
    char string[] = "This is a string!";
    char vowels[]= "aeiou";
    char characters[]= "~!@#$%^&*?()_-|/<>";
    int length =0;
    int i =0;
    int spacecount=0;
    int vowelscount=0;
    int characterscount=0;
    
    
    while(string[length]!='\0'){
        if(string[i]==' '){
            spacecount++;
        }
        i++;
        length++;
    }
    
    for(int i=0;i<length;i++){
        for(int j=0;j<5;j++){
            if(string[i]==vowels[j]){
                vowelscount++;
            }
            if(string[i] == characters[j]){
                characterscount++;
            }
        }
    }
    
    
  
  
    printf("Length of the string is: %d\n",length-spacecount);
    printf("Space count of the string is: %d\n",spacecount);
    printf("Vowels count of the string is: %d\n",vowelscount);
    printf("Character scount if the given string is :%d\n",characterscount);
    
    return 0;
}
