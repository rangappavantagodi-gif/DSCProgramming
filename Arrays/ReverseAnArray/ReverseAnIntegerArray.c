#include <stdio.h>

int main() {
    int sizeOfArray;
    
    printf("---Reverse an integer array---\n");
    printf("Enter the size of array:\n");
    scanf("%d",&sizeOfArray);
    
    int array[sizeOfArray];
    int reverseArray[sizeOfArray];
    
    printf("Enter the numbers for array:\n");
    for(int i=0; i<sizeOfArray; i++){
        scanf("%d",&array[i]);
    }
    for(int i=sizeOfArray; i>0;i--){
        reverseArray[sizeOfArray-i] = array[i-1]; //Move the elements from array to reverse array in reverse order
    }
    
    printf("---Reverse Array---\n");
    for(int i=0; i<sizeOfArray; i++){
        printf("%d\n",reverseArray[i]);
    }
    return 0;
}
