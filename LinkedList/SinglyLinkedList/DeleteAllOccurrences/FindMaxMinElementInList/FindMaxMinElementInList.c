#include <stdio.h>
#include <stdlib.h>

// Structure for singly linked list
struct Node {
    int data;
    struct Node *next;
};

// Create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert node at end
struct Node* insertEnd(struct Node *head, int value) {
    struct Node *newNode = createNode(value);

    if (head == NULL)
        return newNode;

    struct Node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Find minimum and maximum
void findMinMax(struct Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    int min = head->data;
    int max = head->data;

    struct Node *temp = head;
    while (temp != NULL) {
        if (temp->data < min)
            min = temp->data;
        if (temp->data > max)
            max = temp->data;
        temp = temp->next;
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}

// Display list
void display(struct Node *head) {
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node *head = NULL;
int n, value;

    printf("How many nodes?\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value of node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nSingly Linked List:\n");
    display(head);

    findMinMax(head);

    return 0;
}
