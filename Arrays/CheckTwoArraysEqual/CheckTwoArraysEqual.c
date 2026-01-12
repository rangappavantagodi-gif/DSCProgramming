#include <stdio.h>

int main() {
    int n, flag = 1;

    printf("--- Program to check if two arrays are equal ---\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Compare arrays
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1){
        printf("Both arrays are equal.\n");
    }
    else{
        printf("Arrays are not equal.\n");
    }
        
    return 0;
}
