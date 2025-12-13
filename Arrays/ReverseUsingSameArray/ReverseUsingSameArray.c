#include <stdio.h>

int main() {
    int n, temp;
    
    printf("--Reverse an array without using another array--\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse array in place
    for(int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    // Print reversed array
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
