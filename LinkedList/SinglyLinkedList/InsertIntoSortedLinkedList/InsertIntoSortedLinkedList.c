#include <stdio.h>
#include <stdlib.h>

// Self-referential structure
struct NODE {
    int data;
    struct NODE *next;
};

// Create a new node
struct NODE* createNode(int value) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert into sorted singly linked list (ascending order)
struct NODE* insertSorted(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);

    // Case 1: Empty list or insert at beginning
    if (head == NULL || value < head->data) {
        newNode->next = head;
        return newNode;
    }

    // Case 2: Insert in middle or end
    struct NODE *temp = head;
    while (temp->next != NULL && temp->next->data < value) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Display linked list
void display(struct NODE *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct NODE *head = NULL;
    int n, value, i;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        head = insertSorted(head, value);
    }

    printf("\nSorted Singly Linked List:\n");
    display(head);

    printf("\nEnter new value to insert: ");
    scanf("%d", &value);
    head = insertSorted(head, value);

    printf("\nAfter Insertion:\n");
    display(head);

    return 0;
}
