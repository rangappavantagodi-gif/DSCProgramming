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

// Function to check if linked list is sorted
int isSorted(struct NODE *head) {
    // Empty list or single node is always sorted
    if (head == NULL || head->next == NULL)
        return 1;

    while (head->next != NULL) {
        if (head->data > head->next->data)
            return 0;   // Not sorted
        head = head->next;
    }
    return 1;   // Sorted
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
    
    if (isSorted(head))
        printf("Linked list is sorted\n");
    else
        printf("Linked list is not sorted\n");
    return 0;
}