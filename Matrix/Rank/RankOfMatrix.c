#include <stdio.h>
int main() {
    float matrix[2][2], determinant;
    int rank;
    
    printf("--Rank of 2X2 matrix--\n");
    printf("Enter 2X2 matrix elements\n");
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Matrix [%d][%d] : ",i,j);
            scanf("%f",&matrix[i][j]);
        }
    }
    
    determinant = matrix[0][0] *matrix[1][1] - matrix[0][1]*matrix[1][0];

    if(determinant !=0 ){
        printf("Rank of matrix is: 2\n");
    }else if(matrix[0][0]==0 && matrix[0][1]==0 && matrix[1][0]==0 && matrix[1][1]==0){
        printf("Rank of matrix is: 0\n");
    }else{
        printf("Rank of matrix is: 1\n");
    }
    
    return 0;   
}