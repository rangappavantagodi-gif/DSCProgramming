#include <stdio.h>

int main() {
    
    int rows,cols;
    printf("--Program to read and print matrix--\n");
    
    printf("Enter number of rows:\n");
    scanf("%d",&rows);
    
    printf("Enter number of columns:\n");
    scanf("%d",&cols);
    
    if(rows<=0 || cols<=0){
        printf("Invalid rows or columns");
        return 0;
    }
    
    int matrix[rows][cols];
    
    printf("Enter elements of matrix:\n");
    //Read matrix elements
    for(int i=0;i<rows; i++){
        for(int j=0;j<cols;j++){
            printf("Matrix element [%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }    
    }
    
    printf("%d X %d Matrix:\n", rows, cols);
    //Print matrix elements
    for(int i=0;i<rows; i++){
        for(int j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }    
        printf("\n");
    }
    
    return 0;
}
