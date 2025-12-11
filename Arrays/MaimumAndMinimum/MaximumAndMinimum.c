#include <stdio.h>

int main() {
    int sum=0;
    int n;
    printf("--Program to find the maximum and minimum elements in array--\n");
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
     }
     
    int max = array[0];
    int min = array[0];
    for(int i=1;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    } 
    printf("Maximum element in array = %d\n",max);
    printf("Minimum element in array = %d\n",min);
    return 0;
}