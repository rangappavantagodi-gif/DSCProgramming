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

//--------------------
//Delete functions
//--------------------
//Delete node from beginning
struct NODE* deleteBeginning(struct NODE *head){
    if(head == NULL){
        printf("List is already empty!\n");
        return head;
    }
    struct NODE *temp = head;
    head = head->next;   
    if (head != NULL) {
        head->prev = NULL;
    }
    free(temp);
    printf("Deleted node from beginning.\n");
    return head;
}

//Delete node from end
struct NODE* deleteEnd(struct NODE *head){
    if(head == NULL){
        printf("List is already empty!\n");
        return head;
    }
    
    if(head->next == NULL){
        free(head);
        printf("Deleted last remaning node.\n");
        return NULL;
    }
    
    struct NODE *temp = head;
    struct NODE *prev = NULL;
    while(temp->next != NULL){
        prev = temp;            //store prev node to get last second node
        temp = temp->next;
    }
    
    prev->next = NULL;
    free(temp);
    printf("Deleted node from end\n");
    
    return head;
}

//Delete from specific position (in between)
struct NODE* deletePosition(struct NODE *head, int position){
    if(head == NULL){
        printf("List is already empty!\n");
        return head;
    }
    if(position <= 0){
        printf("Invalid position.\n");
        return head;
    }
    if(position == 1){
        return deleteBeginning(head);
    }
    struct NODE *temp = head;
    struct NODE *prev = NULL;
    for(int i = 1; i < position && temp!=NULL; i++ ){
        prev = temp;
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Position out of range.\n");
        return head;
    }
    if(temp->next!= NULL){
        temp->next->prev = temp->prev; // assign the prev node
    }
    prev->next = temp->next;
    free(temp);
    
    printf("Deleted node from position %d.\n", position);

    return head;
}

// Main function
int main() {
    struct NODE *head = NULL;
    int n, value, i, choice, position;

    printf("How many nodes? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nDoubly Linked List (Forward Traversal):\n");
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
                scanf("%d", &position);
                head = deletePosition(head, position);
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
