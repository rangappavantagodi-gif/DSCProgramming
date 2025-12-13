#include <stdio.h>

int main() {
    int n;
    int pos=0,neg=0,even=0,odd=0;
    
    printf("--Program to count positive, negative, even, odd numbers in an array--\n");
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // count positive, negative,even,odd numbers
    for(int i = 0; i < n; i++){
       if(arr[i]>0){
           pos++;
       }else if (arr[i] < 0){
           neg++;
       }
       if(arr[i]%2==0){
           even++;
       }else{
           odd++;
       }
    }

    // Print count
    printf("Positive numbers: %d\n",pos);
    printf("Negative numbers: %d\n",neg);
    printf("Even numbers: %d\n",even);
    printf("Odd numbers: %d\n",odd);
   
    return 0;
}
