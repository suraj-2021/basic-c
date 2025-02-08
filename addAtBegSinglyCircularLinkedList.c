#include<stdio.h>
#include<stdlib.h>


struct node {
      int data;
      struct node *link;
};

struct node *addToEmpty(int data);
struct node*addAtBeg(struct node *tail,int data);

int main(){
    struct node *tail = NULL;
    
    tail =  addToEmpty(999);
    
    tail = addAtBeg(tail,99);
    
    printf("%d\n",tail->data);
    printf("%d\n",tail->link->data);
    
    
    return 0;
    
    
}

struct node *addToEmpty(int data){
      struct node *temp =malloc(sizeof(struct node));
      temp ->data = data;
      temp ->link = temp;
      
      return temp;

} 

struct node*addAtBeg(struct node *tail,int data){
       struct node *temp = malloc(sizeof(struct node));
       temp ->data = data;
       temp ->link = NULL;
       
       temp->link  = tail->link;
       tail->link = temp;
       
       return tail;
}


