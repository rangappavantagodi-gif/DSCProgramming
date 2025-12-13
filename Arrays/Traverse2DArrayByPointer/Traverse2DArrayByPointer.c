#include <stdio.h>

int main(){

    int array[3][3]= {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int rows = 3;
    int columns = 3;
    int *ptr = array; // Initialize the pointer to the first element of the array

    printf("Traversing 2D array using pointer:\n");

    //Traverse using pointer
    for(int i=0; i< rows * columns; i++){
        printf("%d ",*(ptr + i));
        if((i+1)% columns == 0){
            printf("\n");    //New line after each row
        }
    }
    return 0;
}