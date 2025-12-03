#include <stdio.h>

int main() {
   
   int rows1, cols1, rows2, cols2;
   
   printf("--Matrix multiplication--\n");
   printf("Enter the rows and columns of matrix 1:");
   scanf("%d %d",&rows1,&cols1);
   
   printf("Enter the rows and columns of matrix 2:");
   scanf("%d %d",&rows2,&cols2);
   
   if(cols1 != rows2){
       printf("Matrix multplication is not possible because cols1 != rows2");
       return 0;
   }
   
   int matrix1[rows1][cols1];
   int matrix2[rows2][cols2];
   int result [rows1][cols2];
   
   printf("Enter the elements for matrix 1:\n");
   for (int i = 0; i < rows1; i++){
       for (int j = 0; j < cols1; j++){
           printf("Matrix1 [%d][%d]: ",i,j);
           scanf("%d",&matrix1[i][j]);
       }
   }
   
   printf("Enter the elements for matrix 2:\n");
   for (int i = 0; i < rows2; i++){
       for (int j = 0; j < cols2; j++){
        printf("Matrix1 [%d][%d]: ",i,j);
        scanf("%d",&matrix2[i][j]);
       }
   }
   //Initialize resulr matrix to 0
    for (int i = 0; i < rows1; i++){
        for (int j = 0; j < cols2; j++){
            result[i][j] = 0;
        }
    }
    
    //matrix multiplication
    for(int i=0;i<rows1;i++){
        for(int j=0;j<cols2;j++){
            for(int k=0;k<cols1;k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    printf("Resultant Matrix:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}