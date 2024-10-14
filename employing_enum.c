#include<stdio.h>

enum weekday {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

int main() {
    enum weekday today;
    printf("Provide the weeek day 0 for Sunday and 7 for Monday: ");
    scanf("%d",(int*)&today);
    
    //switch case statement
    switch(today) {
        case Sunday: printf("Today is Sunday\n"); break;
        case Monday: printf("Today is Monday\n"); break;
        case Tuesday: printf("Today is Tuesday\n"); break;
        case Thursday: printf("Today is Thursday\n"); break;
        case Friday: printf("Today is Friday\n"); break;
        case Saturday: printf("Today is Saturday\n"); break;
        case Wednesday: printf("Today is Wednesday\n"); break;
        
        default: printf("Invalid Day!");
    }
    return 0;
    
}
