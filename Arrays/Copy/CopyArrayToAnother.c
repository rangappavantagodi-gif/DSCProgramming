#include <stdio.h>

int main() {
    int n;
    printf("--Program to copy elements from one array to another--\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    // Read elements of first array
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Copy elements
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Print copied array
    printf("Elements of second array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}
