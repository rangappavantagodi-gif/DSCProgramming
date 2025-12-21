#include <stdio.h>

int binarySearch(int arr[], int n, int element){
    int low = 0, high = n-1;
    
    while(low <= high){
        int mid = (low + high)/2;   // mid point for search
        if(arr[mid] == element){
            return mid;     //element found at mid
        }else if(arr[mid] < element){
            low = mid+1;    //search right half
        }else{
            high = mid-1;   //search left half
        } 
    }
    return -1;      //element not found
}

int main() {
    int n,element;
    
    printf("Program for binary search (array must be sorted)\n");
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    if(n <= 0){
        printf("Invalid array size\n");
        return 1;
    }
    
    int arr[n];
    printf("Enter %d sorted elements: \n",n);
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the element to search: \n");
    scanf("%d",&element);
    
    int result = binarySearch(arr,n,element);
    
    if(result == -1){
        printf("Element not found\n");
    }else{
        printf("Element found at index %d\n",result);
    }

    return 0;
}