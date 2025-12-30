#include <stdio.h>
#include <stdlib.h>

//self referential node
struct NODE {
  int data;
  struct NODE * next;
};

struct NODE *front = NULL; //front of queue
struct NODE *rear = NULL; //rear of queue
int maxQueueMemory = 10;

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

//is queue full
int isFull() {
  int count = 0;
  struct NODE * temp = front;
  while (temp != NULL) {
    count++;        //count number of elements presents in queue
    temp = temp -> next;
  }
  return count == maxQueueMemory; //returns 1 if equal
}

//is queue empty
int isEmpty() {
  return front == NULL; //returns 1 if null
}

//enqueue function
void enqueue(int value) {
  if (isFull()) {
    printf("Queue is full\n");
    return;
  }
  struct NODE * newNode = createNewNode(value);
  if(isEmpty()){
      front = rear = newNode;
  }else{
      rear->next = newNode;
      rear = newNode;
  }
}

//dequeue function
void dequeue() {
  if (isEmpty()) {
    printf("Queue is empty\n");
    return;
  }
  struct NODE * temp = front;
  front = front->next;
  
  if(front == NULL){    //queue become empty
      rear = NULL;
  }
  printf("Dequeued value: %d\n", temp->data);
  free(temp);
}

//display function
void display() {
  if (isEmpty()) {
    printf("Queue is empty\n");
    return;
  }

  struct NODE * temp = front;
  while (temp != NULL) {
    printf(" %d ->", temp -> data);
    temp = temp -> next;
  }
  printf(" NULL\n");
}

int main() {
  int choice, value;
  printf("--Max Queue memory is 10--");
  printf("\n--- Queue Menu ---\n");
  printf("1. Enqueue\n");
  printf("2. Dequeue\n");
  printf("3. Display\n");
  printf("4. Exit\n");

  while (1) {
    printf("Enter your choice: ");
    scanf("%d", & choice);

    switch (choice) {
    case 1:
      printf("Enter value to enqueue: ");
      scanf("%d", & value);
      enqueue(value);
      break;
    case 2:
      dequeue();
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