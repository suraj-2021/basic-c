#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node {
       char data[100];
       struct node *link;
};


int main(){
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    
    strcpy(head ->data,"One");
    head -> link = NULL;
    
    struct node *current = malloc(sizeof(struct node));
    strcpy(current ->data,"Two");
    current ->link= NULL;
    
    head ->link= current;
    
    current = malloc(sizeof(struct node));
    strcpy(current ->data,"Three");
    current -> link = NULL;
    
    head ->link->link = current;
    
    printf("The third string is: %s\n",head->link->link->data);
    
    free(head);
    free(current);
    
    return 0;
    
}
