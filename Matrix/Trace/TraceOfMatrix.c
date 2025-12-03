#include <stdio.h>

int main() {
   
    int n;
    printf("--Trace of a square matrix--\n");
    printf("Enter the size of the square matrix:\n");
    scanf("%d",&n);
    
    int matrix[n][n];
    
    printf("Enter the elements of matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    int trace = 0;
    for(int i=0;i<n; i++){
        trace += matrix[i][i];
    }
    
    printf("Trace of matrix: %d\n",trace);
    return 0;
}