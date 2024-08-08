#include<stdio.h>
#include<string.h>

int main(void)

{   
    char s[] = {"Hi!"};
    int x=strlen(s);
    printf("%i\n",x);
    
    for(int i=0;i<x;i++)
        printf("%c",s[i]);
    
}
