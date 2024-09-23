#include<stdio.h>

int main(){
    int arr[10];
    int input;
    int flag=0;
    int output;
    for(int i=0;i<10;i++) {
        scanf("%d",&arr[i]);
    }

   printf("What you want to search: ");
   scanf("%d",&input);
   
  
  for(int i=0;i<10;i++){
      if(arr[i]== input){
         output  = input*input;
         
         printf("The square of the provied number is : %d\n",output);
          flag=1;
      }
  }

   if(!flag){
       printf("Number not found!");
   }
   
    return 0;
}
