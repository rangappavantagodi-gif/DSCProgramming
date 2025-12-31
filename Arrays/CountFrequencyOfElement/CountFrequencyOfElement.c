#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n], freq[n];
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;   // initialize frequency array
    }

    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // mark duplicate
            }
        }

        if(freq[i] != 0) {
            freq[i] = count;
        }
    }

    printf("\nElement  Frequency\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d        %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
