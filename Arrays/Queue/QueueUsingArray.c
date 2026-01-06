#include <stdio.h>
#define MAX 3  // maxium size of queue

int queue[MAX];
int front = -1, rear = -1;

//Enqueue operation
void enqueue(){
    int value;
    if(rear == MAX-1){
        printf("Queue overflow! Can not insert.\n");
        return;
    }
    
    printf("Enter the value to enque: ");
    scanf("%d",&value);
    
    if(front == -1){    //first insertion
        front = 0;
    }
    
    queue[++rear] = value;
    printf("Inserted %d into queue.\n", value);
}

//Dequeue operation
void dequeue(){
    if(front == -1 || front > rear){
        printf("Queue is empty.\n");
        return;
    }
    
    printf("Deleted %d from queue.\n",queue[front]);
    front++;
    
    //Reset when queue becomes empty
    if(front > rear){
        front = rear = -1;
    }
}

//Display queue elements
void display(){
    if(front == -1){
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for(int i=front; i<=rear; i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    printf("\n--- Queue Menu ---\n");
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}