#include <stdio.h>

int main(){

    int sizeOfArray;
    printf("Finding largest element in the array\n");
    printf("Enter the size of Array:\n");
    scanf("%d",&sizeOfArray);

    int array[sizeOfArray];   //Create array with the size entered by the user
    printf("Enter %d elements:\n", sizeOfArray);
    for(int i=0; i<sizeOfArray; i++){
        scanf("%d", &array[i]);
    }

    int maxValueInArray = array[0];     //Initially take first element as max value in array
    for(int i=1; i< sizeOfArray; i++){ 
      if(array[i]> maxValueInArray){    //compare each value
        maxValueInArray= array[i];      //If the current element is larger move that value to maxValueInArray
      }  
    }

    printf("Largest element in array: %d",maxValueInArray);
}