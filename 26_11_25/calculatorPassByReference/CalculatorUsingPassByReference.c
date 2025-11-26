#include <stdio.h>

  void add(float num1, float num2,float *result);
  void subtract(float num1,float num2, float *result);
  void multiply(float num1, float num2,float *result);
  void divide(float num1, float num2,float *result);
  
  int main(){
  float num1, num2, result;
  int choice;
  printf("Pass By Reference Calculator Program\n");
  printf("Enter first number: \n");
  scanf("%f",&num1);
  
  printf("Enter second number: \n");
  scanf("%f",&num2);
  
  printf("### Calculator menu ###\n");
  printf("Enter 1 for Addition\n");
  printf("Enter 2 for Subtraction\n");
  printf("Enter 3 for Multiplication\n");
  printf("Enter 4 for Division\n");
  printf("Enter your choice: \n");
  scanf("%d",&choice);
  
  switch(choice){
  
  case 1: add(num1,num2, &result);
    printf("Result = %.2f", result);
    break;
  case 2: subtract(num1,num2, & result);
    printf("Result = %.2f", result);
    break;
  case 3: multiply(num1,num2, & result);
    printf("Result = %.2f", result);
    break;
   case 4: 
     if(num2!=0){
     divide(num1, num2,&result);
     printf("Result =%.2f",result);
     }else{
      printf("Error division by zero");
      }
   	break;
   
   default: printf("Invalid choice");
   
  }
  return 0;
}

void add(float num1,float num2,float *result){
 *result = num1 + num2;
}
void subtract(float num1, float num2,float * result){
	*result = num1- num2;
}
void multiply(float num1 ,float num2, float * result){
	*result= num1 * num2;
}
void divide(float num1, float num2, float * result){
	*result= num1/num2;
}