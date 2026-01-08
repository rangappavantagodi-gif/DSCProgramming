#include <stdio.h>

int main() {
    int n1, n2;
    
    printf("---Program to merge two arrays into a third array---\n");
    // Read sizes of arrays
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr1[n1], arr2[n2], arr3[n1 + n2];

    // Read first array
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];   // copy to third array
    }

    // Read second array
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
        arr3[n1 + i] = arr2[i];  // append to third array
    }

    // Print merged array
    printf("Merged array:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}
