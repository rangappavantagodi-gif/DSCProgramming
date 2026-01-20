#include <stdio.h>
#include <stdlib.h>
    
//self referential structure
struct NODE{
    int data;
    struct NODE *next; //self referential pointer
};

//Function to create a new node
struct NODE* createNode(int value){
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    if(newNode==NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

//Function to insert node at end (circular)
struct NODE* insertEnd(struct NODE *head,int value){
    struct NODE *newNode = createNode(value);
    
    if(head == NULL){
        newNode->next = newNode;    //points to itself
        return newNode;
    }
    
    struct NODE *temp = head;
    while(temp->next !=head){   // Traverse until the last node
        temp=temp->next;    //Shift pointer to point next node
    }
    temp->next = newNode;
    newNode->next = head;   //points to head, to make it circular
    return head;
}

// Insert at beginning (circular)
struct NODE* insertBegin(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);

    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    struct NODE *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    newNode->next = head;
    temp->next = newNode;
    head = newNode;

    return head;
}

// Insert at a given position (1-based index)
struct NODE* insertAtPosition(struct NODE *head, int value, int pos) {
    int i;
    struct NODE *temp;

    if (pos == 1) {
        return insertBegin(head, value);
    }

    if (head == NULL) {
        printf("List is empty. Cannot insert at position %d\n", pos);
        return head;
    }

    struct NODE *newNode = createNode(value);
    temp = head;

    for (i = 1; i < pos - 1; i++) {
        temp = temp->next;
        if (temp == head) {
            printf("Invalid position\n");
            free(newNode);
            return head;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

//Function to display the list
void display(struct NODE *head){
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    
    struct NODE *temp = head;
    do{
        printf("%d->",temp->data);
        temp = temp->next;
    }while(temp!=head);
    printf("back to head\n");
}
    
//Main function    
int main() {
    struct NODE *head = NULL;
    int n,value,i,pos;
    
    printf("How many nodes?\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the value of node %d:",i+1);
        scanf("%d",&value);
        head = insertEnd(head,value);
    }
    
    printf("Circular Singly Linked List:\n");
    display(head);
    
    printf("Enter the value of node to insert at begin:");
    scanf("%d",&value);
    head = insertBegin(head,value);
    
    printf("Enter the position to insert new node:");
    scanf("%d",&pos);
    
    printf("Enter the value of node to insert at position:");
    scanf("%d",&value);
    head = insertAtPosition(head,value,pos);
    
    printf("Circular Singly Linked List after insertion:\n");
    display(head);
    return 0;
}