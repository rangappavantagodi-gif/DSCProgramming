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
    int n,value,i;
    
    printf("How many nodes?\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the value of node %d:",i+1);
        scanf("%d",&value);
        head = insertEnd(head,value);
    }
    
    printf("Circular Singly Linked List:\n");
    display(head);
    return 0;
}