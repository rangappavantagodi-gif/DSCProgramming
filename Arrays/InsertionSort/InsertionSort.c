#include <stdio.h>

//Insertion sort function for sorting
void insertionSort(int arr[], int n){
    int j,key;
    for(int i = 1; i < n; i++){
        key = arr[i];       // Element to be inserted
        j = i - 1;
        
        // Move elements greater than key one position ahead
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = key;  // Insert key at correct position
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
    printf("--Program to sort array using insersion sort--\n");
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
    
    insertionSort(arr,n);
    printf("Array after sorting:\n");
    displayArray(arr, n);
    
    return 0;
}