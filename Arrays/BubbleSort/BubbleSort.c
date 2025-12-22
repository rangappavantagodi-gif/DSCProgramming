#include <stdio.h>

//bubble sort function for sorting
void bubbleSort(int arr[], int n){
    int temp,swapped;
    for(int i=0;i<n-1;i++){
        swapped = 0; // Optimization flag
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];          //swap elements
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
                swapped = 1;
            }
        }
        // If no elements were swapped, array is already sorted
        if (swapped == 0)
            break;
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
    printf("--Program to sort array using bubble sort--\n");
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
    
    bubbleSort(arr,n);
    printf("Array after sorting:\n");
    displayArray(arr, n);
    
    return 0;
}