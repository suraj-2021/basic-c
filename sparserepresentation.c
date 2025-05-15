#include<stdio.h>
//function which accept the matrix of size 6X5
void readmatrix(int matrix[6][5]){
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            printf("Element at [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
//function for representing the taken sparse matrix in 3 tuple represntation 
void tuplerepresentation(int matrix[6][5]){
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            if(matrix[i][j]!=0){
                printf("%d--%d--%d\n",i+1,j+1,matrix[i][j]);
            }
        }
    }
}
void printmatrix(int matrix[6][5]){
    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matrix[6][5];
    
    readmatrix(matrix);
    
    printf("Tuple representation: \n");
    tuplerepresentation(matrix);
    
    printmatrix(matrix);
    
    return 0;
}
