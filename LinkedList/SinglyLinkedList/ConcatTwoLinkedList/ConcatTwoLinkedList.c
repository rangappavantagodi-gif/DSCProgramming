#include <stdio.h>
#include <stdlib.h>

// Structure definition
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

// Insert at end
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

// Concatenate two linked lists
struct Node* concatenate(struct Node *head1, struct Node *head2) {
    if (head1 == NULL)
        return head2;

    struct Node *temp = head1;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = head2;
    return head1;
}

// Display list
void display(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node *list1 = NULL;
    struct Node *list2 = NULL;
    int n,value,i;
    
    printf("How many nodes for linked list 1?\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the value of node %d:",i+1);
        scanf("%d",&value);
        list1 = insertEnd(list1,value);
    }
    
    printf("How many nodes for linked list 2?\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the value of node %d:",i+1);
        scanf("%d",&value);
        list2 = insertEnd(list2,value);
    }
    
    printf("Singly Linked List 1:\n");
    display(list1);
    printf("Singly Linked List 2:\n");
    display(list2);

    list1 = concatenate(list1, list2);

    printf("After Concatenation: ");
    display(list1);

    return 0;
}
