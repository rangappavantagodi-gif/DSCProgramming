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

//Function to insert node at end
struct NODE* insertEnd(struct NODE *head,int value){
    struct NODE *newNode = createNode(value);
    
    if(head == NULL){
        return newNode;
    }
    
    struct NODE *temp = head;
    while(temp->next !=NULL){   // Traverse until the last node
        temp=temp->next;    //Shift pointer to point next node
    }
    temp->next = newNode;
    return head;
}

// Move last node to front
struct NODE* moveLastToFront(struct NODE* head) {
    // If list is empty or has one node
    if (head == NULL || head->next == NULL)
        return head;

    struct NODE* secondLast = NULL;
    struct NODE* last = head;

    // Traverse to find last and second last
    while (last->next != NULL) {
        secondLast = last;
        last = last->next;
    }

    // Rearranging pointers
    secondLast->next = NULL;
    last->next = head;
    head = last;

    return head;
}

//Function to display the list
void display(struct NODE *head){
    struct NODE *temp = head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
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
    
    printf("Singly Linked List:\n");
    display(head);
    
    head = moveLastToFront(head);
    printf("After moving last node to front:\n");
    display(head);
    return 0;
}