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

// Function to search an element in the list
int search(struct NODE *head,int key){
    int position =1;
    struct NODE *temp = head;
    while(temp!=NULL){
        if(temp->data ==key){
            return position;  //Element found
        }
        temp=temp->next;
        position++;
    }
    return -1;  //Element not found
}

// Main function
int main() {
  struct NODE *head = NULL;
  int n,value,key;
  
  printf("Enter number of nodes: ");
  scanf("%d",&n);
  
  printf("Enter %d elements:\n",n);
  for(int i=0;i<n;i++){
      scanf("%d",&value);
      head = insertEnd(head,value);
  }
  
  printf("Enter the element to search: ");
  scanf("%d",&key);
  
  int result = search(head,key);
  
  if(result == -1){
      printf("Element %d not found in the list\n",key);
  }else{
      printf("Element %d found at position %d\n",key,result);
  }
    return 0;
}