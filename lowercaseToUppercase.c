#include <stdio.h>

void toUpper(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]  = str[i]-32;
        }
        i++;
    }
}


int main() {
    char str[100];
    printf("Enter a line of text: ");
    scanf("%[^\n]%*c", str); // Read until newline and discard it
    toUpper(str);
    printf("You entered: %s\n", str);
    
    return 0;
}
