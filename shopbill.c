#include<stdio.h>

struct item {
    char name[50];
    float price;
    int quantity;
};


void generatebill(struct item items[],int numitems){
    float itemtotal = 0.0;
    printf("<----SHOP BILL ----->\n");
    printf("%-20s %-10s %-10s %-10s\n","Item Name","Price","Quantity","Total");
    
    for(int i=0;i<numitems;i++){
        float total = items[i].price * items[i].quantity;
        itemtotal +=total;
        
        printf("%-20s %-10.2f %-10d %-10.2f\n",items[i].name,items[i].price,items[i].quantity,total);
    }
    printf("\nGrand Total: %.2f\n", itemtotal);
    printf("--- Thank You for Shopping! ---\n");
    
}


int main(){
    struct item items[50];
    int numitems;
    
    printf("How many items are there: ");
    scanf("%d",&numitems);
    
    for(int i=0;i<numitems;i++){
        printf("Your are providing the details for item:%d\n",i+1);
        
        printf("Item Name: ");
        scanf(" %[^\n]%*c", items[i].name);
        
        printf("Quantity: ");
        scanf( "%d",&items[i].quantity);
        
        printf("Price: ");
        scanf( "%f",&items[i].price);
        }
        
        
        generatebill(items,numitems);
        
        
        return 0;
    
}
