#include <stdio.h>

int main() {
    int sum=0;
    int n;
    printf("--Program to find the sum of all elements in array--\n");
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    printf("Sum of array elements = %d",sum);
    return 0;
}