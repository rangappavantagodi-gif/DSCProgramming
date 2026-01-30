#include <stdio.h>
#include <stdlib.h>

// Self referential structure
struct NODE {
    int data;
    struct NODE *next; // self referential pointer
};

// Function to create a new node
struct NODE* createNode(int value) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert node at end
struct NODE* insertEnd(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);

    if (head == NULL) {
        return newNode;
    }

    struct NODE *temp = head;
    while (temp->next != NULL) {   // Traverse until the last node
        temp = temp->next;          // Shift pointer to point next node
    }
    temp->next = newNode;
    return head;
}

// Function to display the list
void display(struct NODE *head) {
    struct NODE *temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to copy one linked list into another
struct NODE* copyList(struct NODE *head) {
    if (head == NULL)
        return NULL;

    struct NODE *newHead = NULL;
    struct NODE *temp = head;

    while (temp != NULL) {
        newHead = insertEnd(newHead, temp->data);
        temp = temp->next;
    }

    return newHead;
}

// Main function    
int main() {
    struct NODE *head = NULL;
    struct NODE *copyHead = NULL;  // Pointer for copied list
    int n, value, i;

    printf("How many nodes?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the value of node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("Original Singly Linked List:\n");
    display(head);

    // Copy list
    copyHead = copyList(head);

    printf("Copied Singly Linked List:\n");
    display(copyHead);

    return 0;
}
