#include <stdio.h>

int main() {
    int rows,cols;
    printf("--Matrix addition--\n");
    
    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    
    printf("Enter number of columns:\n");
    scanf("%d",&cols);
    
    if(rows<=0 || cols<=0){
        printf("Invalid rows or columns");
        return 0;
    }
    
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    
    printf("Enter elements of matrix one:\n");
    for(int i=0;i<rows; i++){
        for(int j=0;j<cols;j++){
            printf("Matrix one [%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }    
    }
    
    printf("Enter elements of matrix two:\n");
    for(int i=0;i<rows; i++){
        for(int j=0;j<cols;j++){
            printf("Matrix two [%d][%d]: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }    
    }
    
    
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            matrix1[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\n-- Matrix addition result--\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}