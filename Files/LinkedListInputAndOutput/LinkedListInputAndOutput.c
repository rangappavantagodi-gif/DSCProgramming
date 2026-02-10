#include <stdio.h>
#include <stdlib.h>

// Definition of node
struct NODE {
    int data;
    struct NODE *next;
};

// Function to create a new node
struct NODE* createNode(int value) {
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
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

// Read data from file and create linked list
struct NODE* readFromFile(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Unable to open input file\n");
        exit(1);
    }

    struct NODE *head = NULL;
    int value;

    while (fscanf(fp, "%d", &value) != EOF) {
        head = insertEnd(head, value);
    }

    fclose(fp);
    return head;
}

// Write linked list to file
void writeToFile(const char *filename, struct NODE *head) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Unable to open output file\n");
        exit(1);
    }

    struct NODE *temp = head;
    while (temp != NULL) {
        fprintf(fp, "%d->", temp->data);
        temp = temp->next;
    }
    fprintf(fp,"NULL");
    fclose(fp);
}

// Display linked list (optional)
void display(struct NODE *head) {
    struct NODE *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct NODE *head = NULL;

    head = readFromFile("input.txt");
    printf("Linked List contents:\n");
    display(head);

    writeToFile("output.txt", head);
    printf("Linked list written to output.txt\n");

    return 0;
}
