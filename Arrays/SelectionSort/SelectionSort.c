#include <stdio.h>

//Selection sort function for sorting
void selectionSort(int arr[], int n){
    int temp;
    
    // Loop through all elements except the last
    for(int i = 0; i < n-1; i++){
        int min = i;    // Assume current index has the minimum element
        // Find the index of the minimum element in the unsorted part
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        // Swap the found minimum element with the first element of unsorted part
        if(min != i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}


//Function to display array
void displayArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){
    int n;
    printf("--Program to sort array using selection sort--\n");
    printf("Enter number of array elements:\n");
    scanf("%d",&n);
    
    if(n<=0){
        printf("Invalid array size\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d array elements:\n",n);
    
    for(int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);    
    }
    
    printf("Array before sorting:\n");
    displayArray(arr, n);
    
    selectionSort(arr,n);
    printf("Array after sorting:\n");
    displayArray(arr, n);
    
    return 0;
}