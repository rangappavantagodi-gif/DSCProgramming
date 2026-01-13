#include <stdio.h>

int main() {
    int n;

    printf("--- Program to find the difference between two arrays (element-wise) ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], result[n];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    printf("Difference between two arrays (element-wise):\n");
    for(int i=0;i<n;i++){
        result[i] = arr1[i]- arr2[i];   //find the difference element-wise
        printf("%d ", result[i]);
    }
        
    return 0;
}
