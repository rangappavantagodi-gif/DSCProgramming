#include <stdio.h>
#include <stdlib.h>

// Self referential structure
struct NODE {
    int data;
    struct NODE *next;
};

// Create a new node
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

// Insert at end (Circular)
struct NODE* insertEnd(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);

    if (head == NULL) {
        newNode->next = newNode;   // points to itself
        return newNode;
    }

    struct NODE *temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;   // maintain circular link

    return head;
}

// Display circular list
void display(struct NODE *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct NODE *temp = head;
    do {
        printf("%d->", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("back to head\n");
}

// ------------------------------
// DELETE FUNCTIONS (CIRCULAR)
// ------------------------------

// Delete from beginning
struct NODE* deleteBeginning(struct NODE *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    if (head->next == head) {
        free(head);
        printf("Deleted last remaining node.\n");
        return NULL;
    }

    struct NODE *temp = head;
    struct NODE *last = head;

    while (last->next != head) {
        last = last->next;
    }

    head = head->next;
    last->next = head;
    free(temp);

    printf("Deleted node from beginning.\n");
    return head;
}

// Delete from end
struct NODE* deleteEnd(struct NODE *head) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    if (head->next == head) {
        free(head);
        printf("Deleted last remaining node.\n");
        return NULL;
    }

    struct NODE *temp = head;
    struct NODE *prev = NULL;

    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    free(temp);

    printf("Deleted node from end.\n");
    return head;
}

// Delete from specific position
struct NODE* deletePosition(struct NODE *head, int pos) {
    if (head == NULL) {
        printf("List is empty!\n");
        return head;
    }

    if (pos == 1) {
        return deleteBeginning(head);
    }

    struct NODE *temp = head;
    struct NODE *prev = NULL;
    int i;

    for (i = 1; i < pos && temp->next != head; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp->next == head && i < pos) {
        printf("Invalid position!\n");
        return head;
    }

    prev->next = temp->next;
    free(temp);

    printf("Deleted node from position %d.\n", pos);
    return head;
}

// MAIN FUNCTION
int main() {
    struct NODE *head = NULL;
    int n, value, i, choice, pos;

    printf("How many nodes?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value of node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("Circular Singly Linked List:\n");
    display(head);

    while (1) {
        printf("\nMENU:\n");
        printf("1. Delete Beginning\n");
        printf("2. Delete End\n");
        printf("3. Delete at Position\n");
        printf("4. Display List\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = deleteBeginning(head);
                break;
            case 2:
                head = deleteEnd(head);
                break;
            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &pos);
                head = deletePosition(head, pos);
                break;
            case 4:
                display(head);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
