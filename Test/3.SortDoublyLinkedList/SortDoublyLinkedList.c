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

//Sort Ascending
struct NODE* sortAscedning(struct NODE* head,int n){
    struct NODE *temp = head;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(temp->data > temp->next->data){
                int value = temp->data;
                temp->data = temp->next->data;
                temp->next->data = value;
            }
            temp = temp->next;
        }
        temp = head;
    }
    return head;
}

//Sort Descending
struct NODE* sortDescedning(struct NODE* head,int n){
    struct NODE *temp = head;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            if(temp->data < temp->next->data){
                int value = temp->data;
                temp->data = temp->next->data;
                temp->next->data = value;
            }
            temp = temp->next;
        }
        temp = head;
    }
    return head;
}

// Main function
int main() {
    struct NODE *head = NULL;
    int n, value, i;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nDoubly Linked List (Forward Traversal):\n");
    display(head);
    
    head = sortAscedning(head,n);
    printf("Ascending order Doubly Linked List:\n");
    display(head);
    
    head = sortDescedning(head,n);
    printf("Descending order Doubly Linked List:\n");
    display(head);
    return 0;
}
