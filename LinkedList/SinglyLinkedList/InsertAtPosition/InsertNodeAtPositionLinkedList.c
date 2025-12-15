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
    
    //Function to display the list
    void display(struct NODE *head){
        struct NODE *temp = head;
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }
    
    //Function to insert the node at given position
    struct NODE* insertAtPosition(struct NODE *head, int value,int position){
        struct NODE *newNode = createNode(value);
        
        if(1 == position){
            newNode->next = head;
            return newNode;
        }
        
        struct NODE *temp = head;
        for(int i=1; i<position-1 && temp !=NULL;i++){  //Traverse until given position or the end if position out of range
            temp = temp->next;
        }
        
        if(temp == NULL){
            printf("Position out of range, inserting node at end\n");
            return insertEnd(head,value);
        }
        
        newNode->next = temp->next;  // assign the node after position to new node next value
        temp->next = newNode;       // assign the new node to given position
        return head;
    }
    
//Main function    
int main() {
    struct NODE *head = NULL;
    int n,value,i, position;
    
    printf("How many nodes?\n");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        printf("Enter the value of node %d:",i+1);
        scanf("%d",&value);
        head = insertEnd(head,value);
    }
    printf("Singly Linked List:\n");
    display(head);
    
    printf("Enter the position where new node to be added:\n");
    scanf("%d", &position);
    printf("Enter the value of node:\n");
    scanf("%d",&value);
    head = insertAtPosition(head,value,position);
    printf("Updated Singly Linked List:\n");
    display(head);
    return 0;
}