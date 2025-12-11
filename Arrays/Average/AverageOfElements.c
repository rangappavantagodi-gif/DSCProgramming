#include <stdio.h>

int main() {
    float sum=0,average=0;
    int n;
    printf("--Program to find the average of elements in array--\n");
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }
    average = sum/n;
    printf("Average of array elements = %.2f",average);
    return 0;
}