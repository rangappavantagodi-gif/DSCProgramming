#include <stdio.h>

int main() {
    int array [10]= {1,2,3,4,5,6,7,8,9,10};
    int lengthOfArray = sizeof(array)/sizeof(array[0]); // size of array is 40/ size of array[0] is 4= length of array 10
    printf("Length of integer array: %d\n",lengthOfArray);
    return 0;
}
