#include <stdio.h>

int main() {
    int n;
    int evenSum = 0, oddSum = 0;
    
    printf("--- Program to find the sum of even-index and odd-index elements ---\n");
    printf("Enter the size of array:");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            evenSum+=arr[i];    //even index sum
        }else{
            oddSum+=arr[i];     //odd index sum
        }
    }
    
    printf("Sum of even-index elements: %d\n",evenSum);
    printf("Sum of odd-index elements: %d\n",oddSum);
    return 0;
}