#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ptr;
    printf("--Dynamic memory allocation using calloc--\n");
    ptr= calloc(4,sizeof(*ptr));
    
    if(ptr == NULL){
    	printf("Memory allocation failed\n");
    }else{
    	*ptr = 2;
        ptr[1] = 4;
        ptr[2] = 6;
        printf("%d,%d,%d,%d\n",*ptr,ptr[1],ptr[2],ptr[3]);
        free(ptr);
    }
  return 0;
}