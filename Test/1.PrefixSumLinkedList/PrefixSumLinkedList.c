#include <stdio.h>
#include <stdlib.h>

/*
Write a program to read an array of n numbers 
save the addition of them in a linked list at everyinstance
*/

struct NODE{
    int data;
    struct NODE *next;
};

//readarray
void readArray(int arr[], int size){
    printf("Enter array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}
//creatnode
struct NODE* createNode(int value){
    struct NODE * newNode = (struct NODE*) malloc(sizeof(struct NODE));
    if(newNode == NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
//insertend
struct NODE* insertEnd(struct NODE *head, int value){
    struct NODE *newNode = createNode(value);
    struct NODE *temp = head;
    if(head == NULL){
        return newNode;
    }
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next = newNode;
    return head;
}
//Display
void display(struct NODE *head){
    if(head == NULL){
        printf("List is empty");
    }
    struct NODE *temp = head;
    while(temp !=NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
//main
int main(){
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    int arr[size], preSum[size];
    struct NODE *head = NULL;
    readArray(arr, size);
    preSum[0] = arr[0];                     //Initial sum = first element
    for(int i=1;i<size;i++){
        preSum[i] = preSum[i-1]+arr[i];     // Sum = previous sum + current element
        head = insertEnd(head,preSum[i]);   // add sum to linked list
    }
    display(head);
    return 0;
}
