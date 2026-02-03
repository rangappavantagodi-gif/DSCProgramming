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

//Function to reverse the doubly linked list
struct NODE* reverseDLL(struct NODE *head) {
    struct NODE *current = head;
    struct NODE *temp = NULL;

    while (current != NULL) {
        // Swap prev and next
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;

        // Move to next node (which is previous in original list)
        current = current->prev;
    }

    // Update head
    if (temp != NULL) {
        head = temp->prev;
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

    //Reverse the list
    head = reverseDLL(head);

    printf("\nDoubly Linked List After Reversal:\n");
    display(head);

    return 0;
}
