#include<stdio.h>
#include<stdlib.h>


/*
write a program to read an array of n numbers,
save the difference of each number with the average
of n number in the linkedlist
*/
struct NODE{
    int data;
    struct NODE* next;
};

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

struct NODE* insertEnd(struct NODE *head, int value){
    struct NODE *newNode = createNode(value);

    if (head == NULL) {
        return newNode;
    }

    struct NODE *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void display(struct NODE *head) {
    struct NODE *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    int n,i,diff=0,sum=0,avg;
   
    struct NODE *head =NULL;

    printf("Enter size of array: ");
    scanf("%d",&n);
     int arr[n];
    
    printf("Enter array elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }

    avg=sum/n;
    for(i=0;i<n;i++){
        diff = avg-arr[i];
        head = insertEnd(head,diff);
    }
    printf("linked list \n");
    display(head);

    return 0;
}