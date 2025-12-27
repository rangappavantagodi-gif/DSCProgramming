#include <stdio.h>
#include <stdlib.h>

//self referential node
struct NODE {
  int data;
  struct NODE * next;
};

struct NODE * top = NULL;       //top node of stack global variable
int maxStackMemory = 10;

//create new node
struct NODE * createNewNode(int value) {
  struct NODE * newNode = (struct NODE * ) malloc(sizeof(struct NODE));
  if (newNode == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
  }
  newNode -> next = NULL;
  newNode -> data = value;

  return newNode;
}

//is stack full
int isFull() {
  int stackElements = 0;
  struct NODE * temp = top;
  while (temp != NULL) {
    stackElements++;            //count number of elements presents in stack
    temp = temp -> next;
  }
  return stackElements == maxStackMemory; //returns 1 if equal
}

//is stack empty
int isEmpty() {
  return top == NULL; //returns 1 if null
}

//push function
void push(int value) {
  if (isFull()) {
    printf("Stack is full\n");
    return;
  }
  struct NODE * newNode = createNewNode(value);
  newNode -> next = top;
  top = newNode;
}

//pop function
void pop() {
  if (isEmpty()) {
    printf("Stack is empty\n");
    return;
  }
  struct NODE * temp = top;
  top = top -> next;
  printf("Popped value: %d\n", temp -> data);
  free(temp);
}

//display function
void display() {
  if (isEmpty()) {
    printf("Stack is empty\n");
    return;
  }

  struct NODE * temp = top;
  while (temp != NULL) {
    printf(" %d ->", temp -> data);
    temp = temp -> next;
  }
  printf(" NULL\n");
}

int main() {
  int choice, value;
  printf("--Max Stack memory is 10--");
  printf("\n--- Stack Menu ---\n");
  printf("1. Push\n");
  printf("2. Pop\n");
  printf("3. Display\n");
  printf("4. Exit\n");

  while (1) {
    printf("Enter your choice: ");
    scanf("%d", & choice);

    switch (choice) {
    case 1:
      printf("Enter value to push: ");
      scanf("%d", & value);
      push(value);
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
    default:
      printf("Invalid choice\n");
    }
  }
  return 0;
}