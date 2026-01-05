#include <stdio.h>
#define MAX 10  // maxium size of stack

int stack[MAX];
int top = -1;

//push operation
void push(){
    int value;
    if(top == MAX-1){       // check if stack is full
        printf("Stack overflow! Can not push.\n");
        return;
    }
    
    printf("Enter value to push: ");
    scanf("%d",&value);
    stack[++top] = value;
    printf("%d pushed into stack.\n");
}

//pop operation
void pop(){
    if(top == -1){
        printf("Stack is empty.\n");
        return;
    }
    printf("%d popped from stack.\n",stack[top--]);
}

//Display operation
void display(){
    if(top == -1){
        printf("Stack is empty.\n");
    }
    printf("Stack elements (top to bottom): ");
    for(int i=top; i>=0; i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    printf("\n--- Program to create stack using array ---\n");
    printf("\n--- STACK MENU ---\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    
    do{
        printf("Enter your choice: ");
        scanf("%d",&choice);
       
       switch(choice){
           case 1: push(); break;
           case 2: pop(); break;
           case 3: display(); break;
           case 4 : printf("Exiting program..\n"); break;
           
           default: printf("Invalid choice! Try again.\n");
            
       } 
    } while (choice != 4);
    
    return 0;
}