#include<stdio.h>

int main(){
    int score;
    printf("Provide Score on scale of 1 to 3: ");
    scanf("%d",&score);
    
    switch(score){
        case 1:
            printf("Ecellent!");
            break;
        case 2:
          printf("Very Good!");
          break;
        case 3:
            printf("Good Good!");
            break;
            
        default:
            printf("Invalid Score!");
    }
    return 0;
}
