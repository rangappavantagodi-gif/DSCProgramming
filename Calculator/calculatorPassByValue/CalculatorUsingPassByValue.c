#include <stdio.h>

  float add(float num1, float num2);
  float subtract(float num1,float num2);
  float multiply(float num1, float num2);
  float divide(float num1, float num2);
  
  int main(){
  float num1, num2, result;
  int choice;
  printf("Pass By Value Calculator Program\n");
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
  
  case 1: result= add(num1,num2);
    printf("Result = %.2f", result);
    break;
  case 2: result = subtract(num1,num2);
    printf("Result = %.2f", result);
    break;
  case 3: result = multiply(num1,num2);
    printf("Result = %.2f", result);
    break;
   case 4: 
     if(num2!=0){
     result = divide(num1, num2);
     printf("Result =%.2f",result);
     }else{
      printf("Error division by zero");
      }
   	break;
   
   default: printf("Invalid choice");
   
  }
  return 0;
}

float add(float num1,float num2){
return num1 + num2;
}
float subtract(float num1, float num2){
	return num1- num2;
}
float multiply(float num1 ,float num2){
	return num1 * num2;
}
float divide(float num1, float num2){
	return num1/num2;
}