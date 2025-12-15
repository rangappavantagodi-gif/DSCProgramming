#include <stdio.h>
#include <stdlib.h>

// Self-referential structure for Doubly Linked List
struct NODE {
    int data;
    struct NODE *prev;   // Pointer to previous node
    struct NODE *next;   // Pointer to next node
};

// Function to create a new node
struct NODE* createNode(int value) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert node at the end
struct NODE* insertEnd(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);

    // If list is empty
    if (head == NULL) {
        return newNode;
    }

    struct NODE *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Function to display the list (forward)
void display(struct NODE *head) {
    struct NODE *temp = head;

    printf("NULL <-> ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

//Function to insert node at given position
struct NODE* insertAtPosition(struct NODE *head, int value, int position){
    struct NODE *newNode = createNode(value);
    if(1 == position){
        newNode->next = head;
        if (head != NULL) {
            head->prev = newNode;
        }
        return newNode;
    }
    
    struct NODE *temp = head;
    
    for(int i = 1; i < position-1 && temp != NULL; i++){
        temp = temp->next;
    }
    
    if(temp == NULL){
        printf("Position out of range, inserting node at end\n");
        return insertEnd(head, value);
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

// Main function
int main() {
    struct NODE *head = NULL;
    int n, value, i, position;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nDoubly Linked List (Forward Traversal):\n");
    display(head);
    
    printf("Enter the position where new node to be added:\n");
    scanf("%d", &position);
    printf("Enter the value of node:\n");
    scanf("%d",&value);
    head = insertAtPosition(head,value,position);
    printf("Updated Doubly Linked List:\n");
    display(head);

    return 0;
}
