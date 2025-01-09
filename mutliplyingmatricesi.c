#include<stdio.h>

void creatematrix(int rows, int column, int matrix[rows][column]){
      
      for(int i=0;i<rows;i++){
          for(int j=0;j<column;j++){
              printf("Provide element for [%d][%d]: ",i+1,j+1);
              scanf("%d",&matrix[i][j]);
          }
      }
}

void multiplymatrix(int m, int n, int p, int A[m][n], int B[n][p], int C[m][p]){
    for(int i=0; i<m; i++){
        for(int j=0;j<p;j++){
            C[i][j]=0;
        }
    }
    
    //multiplymatrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<p;k++)
            C[i][j] += A[i][k] * B[k][j];
        }
    }
}
    
void printmatrix(int m,int n,int A[m][n]){
    printf("The following the matrix: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d\t",A[i][j]);
        }
    }
}

int main(){
    int m, n, p;
    
    printf("Provide necessary deatils\n");
    
    printf("Rows of first matrix?: ");
    scanf("%d",&m);
    printf("Column of first matrix/Rows of second matrix: ");
    scanf("%d",&n);
    
    printf("Provide column of the second matrix: ");
    scanf("%d",&p);
    
    int A[m][n]; 
    int B[n][p];
    int C[m][p];
    
    //create matrix

    creatematrix(m,n,A);
    creatematrix(m,n,B);
    
    //multiply matrix
    multiplymatrix(m,n,p,A,B,C);
    
    //printmatrix
    printmatrix(m,p,C);
    return 0;
    
    
}
