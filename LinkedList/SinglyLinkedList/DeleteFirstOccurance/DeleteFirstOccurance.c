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

// Function to delete first occurrence of a given value
struct NODE* deleteFirstOccurrence(struct NODE *head, int key) {
    struct NODE *temp = head, *prev = NULL;

    // Case 1: Empty list
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    // Case 2: First node contains the key
    if (temp->data == key) {
        head = temp->next;
        free(temp);
        return head;
    }

    // Case 3: Search for the key
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If value not found
    if (temp == NULL) {
        printf("Value %d not found in the list.\n", key);
        return head;
    }

    // Delete the node
    prev->next = temp->next;
    free(temp);

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
    int n, value, i, key;

    printf("How many nodes?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the value of node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nSingly Linked List:\n");
    display(head);

    // Delete first occurrence
    printf("\nEnter the value to delete (first occurrence): ");
    scanf("%d", &key);

    head = deleteFirstOccurrence(head, key);

    printf("\nList after deletion:\n");
    display(head);

    return 0;
}
