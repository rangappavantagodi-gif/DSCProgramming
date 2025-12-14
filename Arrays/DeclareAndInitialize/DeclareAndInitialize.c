#include <stdio.h>

int main() {
    printf("--Program to declare and initialize 1D array--\n");
    
    //1.Declare first, then initialize later
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    
    printf("Array 1:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    //2.Declare and initialize at the same time
    int arr2[5] = {100, 200, 300, 400, 500};
    
    printf("\nArray 2:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }
    
    //3.Let compiler count the size automatically
    int arr3[] = {1, 2, 3, 4, 5};
    
    printf("\nArray 3:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr3[i]);
    }
    
    //4.Partial initialization (remaining elements become 0)
    int arr4[5] = {1, 2};
    
    printf("\nArray 4:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr4[i]);
    }

    return 0;
}
