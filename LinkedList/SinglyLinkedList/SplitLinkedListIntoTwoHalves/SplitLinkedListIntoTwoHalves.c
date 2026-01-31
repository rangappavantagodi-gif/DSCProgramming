#include <stdio.h>
#include <stdlib.h>
    
//self referential structure
struct NODE{
    int data;
    struct NODE *next; //self referential pointer
};

//Function to create a new node
struct NODE* createNode(int value){
    struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));
    if(newNode==NULL){
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

//Function to insert node at end
struct NODE* insertEnd(struct NODE *head,int value){
    struct NODE *newNode = createNode(value);
    
    if(head == NULL){
        return newNode;
    }
    
    struct NODE *temp = head;
    while(temp->next !=NULL){   // Traverse until the last node
        temp=temp->next;    //Shift pointer to point next node
    }
    temp->next = newNode;
    return head;
}

void splitList(struct NODE *head, struct NODE **head1, struct NODE **head2){
    if(head == NULL){
        *head1 = NULL;
        *head2 = NULL;
        return;
    }

    struct NODE *slow = head;
    struct NODE *fast = head->next;

    // Move fast by 2 and slow by 1
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    *head1 = head;          // First half starts from head
    *head2 = slow->next;    // Second half starts from next of slow
    slow->next = NULL;      // Break the list
}


//Function to display the list
void display(struct NODE *head){
    struct NODE *temp = head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
    
//Main function    
int main() {
    struct NODE *head = NULL;
    struct NODE *head1 = NULL;
    struct NODE *head2 = NULL;
    int n,value,i;
    
    printf("How many nodes?\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the value of node %d:",i+1);
        scanf("%d",&value);
        head = insertEnd(head,value);
    }
    
    printf("Singly Linked List:\n");
    display(head);
    
    // Split the list
    splitList(head, &head1, &head2);

    printf("\nFirst Half:\n");
    display(head1);

    printf("\nSecond Half:\n");
    display(head2);
    return 0;
}