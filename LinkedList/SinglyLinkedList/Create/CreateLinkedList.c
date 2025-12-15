#include <stdio.h>
#include <stdlib.h>

struct linked_list{
    int number;
    struct linked_list *next;
};

typedef struct linked_list node;
void create(node *p);
int count(node *p);
void print(node *p);

int main() {
  printf("--Create and print linked list--\n");
  node *head;
  head = (node*)malloc(sizeof(node));
  create(head);
  print(head);
  printf("\nNumber of items = %d\n",count(head));
  return 0;
}

void create(node * list){
    printf("Input a number:\n");
    printf("type -999 at end\n");
    scanf("%d",&list->number); // create current node
    
    if(list->number == -999){
        list->next=0;
    }else{ //create next node
        list->next =(node*)malloc(sizeof(node));
        create(list->next);     //recursion occurs
    }
    return;
}

void print(node *list){
    if(list->next!=0){
        printf("%d-->",list->number); //print current item
        if(list->next->next == 0){
            printf("%d",list->next->number);
        }else{
            print(list->next);
        }
    }
    return;
}

int count(node *list){
    if(list->next == 0){
        return 0;
    }else{
        return (1+count(list->next));
    }
}



