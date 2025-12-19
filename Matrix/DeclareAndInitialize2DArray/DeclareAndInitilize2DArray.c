#include <stdio.h>

int main() {
    printf("--Program to declare and initialize 2D array--\n");
    
    //1.Declare first, then initialize later
    int arr[2][2];
    arr[0][0] = 10;
    arr[0][1] = 20;
    arr[1][0] = 30;
    arr[1][1] = 40;
    
    printf("Array 1:\n");
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j<2; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //2.Declare and initialize at the same time
    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    printf("\nArray 2:\n");
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j<3; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    
    //3.Declaration with initialization in one line
    int arr3[2][2] = {1, 2, 3, 4};
    
    printf("\nArray 3:\n");
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j<2; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    //4.Partial initialization (remaining elements become 0)
    int arr4[2][3] = {
        {1, 2},
        {4}
    };
    
    printf("\nArray 4:\n");
    for (int i = 0; i < 2; i++) {
        for(int j = 0; j<3; j++){
            printf("%d ", arr4[i][j]);
        }
        printf("\n");
    }

    return 0;
}
