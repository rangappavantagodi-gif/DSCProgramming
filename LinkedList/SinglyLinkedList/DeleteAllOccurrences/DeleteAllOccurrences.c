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
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert node at end
struct NODE* insertEnd(struct NODE *head, int value) {
    struct NODE *newNode = createNode(value);
    if (head == NULL)
        return newNode;

    struct NODE *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    return head;
}

// Delete all occurrences of a given value
struct NODE* deleteAllOccurrences(struct NODE *head, int key) {
    struct NODE *temp, *curr;

    // Delete matching nodes at head
    while (head != NULL && head->data == key) {
        temp = head;
        head = head->next;
        free(temp);
    }

    curr = head;

    // Delete matching nodes in remaining list
    while (curr != NULL && curr->next != NULL) {
        if (curr->next->data == key) {
            temp = curr->next;
            curr->next = temp->next;
            free(temp);
        } else {
            curr = curr->next;
        }
    }

    return head;
}

// Display list
void display(struct NODE *head) {
    while (head != NULL) {
        printf("%d->", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct NODE *head = NULL;
    int n, value, key;

    printf("How many nodes?\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value of node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nOriginal List:\n");
    display(head);

    printf("\nEnter value to delete (all occurrences): ");
    scanf("%d", &key);

    head = deleteAllOccurrences(head, key);

    printf("\nList after deletion:\n");
    display(head);

    return 0;
}
