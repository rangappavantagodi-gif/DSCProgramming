#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr1,*ptr2,size;
    //allocate memory for 4 integers
    printf("--Dynamic memory allocation using malloc--\n");
	size = 4*sizeof(*ptr1);
    ptr1 = malloc(size);
    if(ptr1 == NULL) {
    	printf("Memory allocation failed\n");
	}else{
    	printf("%d bytes allocated at address %p\n",size,ptr1);
    }
    
    //Resize the memory to hold 6 integers
    size = 6*sizeof(*ptr1);
    ptr2 = realloc(ptr1,size);
    if(ptr2 == NULL){
    	printf("Memory reallocation failed\n");
        free(ptr1);
    }else{
    	printf("%d bytes reallocated at address %p",size,ptr2);
        free(ptr2); 
        }
  return 0;
}