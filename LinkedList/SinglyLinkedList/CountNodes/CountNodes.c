#include <stdio.h>
#include <stdlib.h>

// Self-referential structure
struct NODE{
    int data;
    struct NODE *next;
};

// Function to create a new node
struct NODE* createNode(int value){
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    
    if(newNode == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert at end
struct NODE* insertEnd(struct NODE *head,int value){
    struct NODE *newNode = createNode(value);
    if(head == NULL){
        return newNode;
    }
    
    struct NODE *temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

// Function to count nodes in the linked list
int countNodes(struct NODE *head) {
    int count = 0;
    struct NODE *temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Main function
int main() {
  struct NODE *head = NULL;
  int n,value,count;
  
  printf("Enter number of nodes: ");
  scanf("%d",&n);
  
  printf("Enter %d elements:\n",n);
  for(int i=0;i<n;i++){
      scanf("%d",&value);
      head = insertEnd(head,value);
  }
  count = countNodes(head);
  printf("The number of nodes in the list is: %d",count);
  return 0;
}